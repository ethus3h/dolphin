/**************************************************************************
*   Copyright (C) 2013 by Robert Metsaranta                               *
*   therealestrob@gmail.com                                               *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************/

#include <QImageReader>
#include <QDirIterator>

#include "filesystemmodel.h"
#include "iojob.h"
#include "thumbsloader.h"
#include "mainwindow.h"
#include "viewcontainer.h"

using namespace DFM;

QIcon
FileIconProvider::icon(const QFileInfo &info) const
{
#if 0
    if ( Store::config.icons.customIcons.contains(info.filePath()) )
        return QIcon(Store::config.icons.customIcons.value(info.filePath()));
#endif
    if ( info.absoluteFilePath() == QDir::rootPath() )
        if ( QIcon::hasThemeIcon("folder-system") )
            return QIcon::fromTheme("folder-system");
        else if ( QIcon::hasThemeIcon("inode-directory") )
            return QIcon::fromTheme("inode-directory");

    if ( m_fsModel->thumbsLoader()->hasIcon(info.absoluteFilePath()) )
        if ( QIcon::hasThemeIcon(m_fsModel->thumbsLoader()->icon(info.absoluteFilePath())) )
            return QIcon::fromTheme(m_fsModel->thumbsLoader()->icon(info.absoluteFilePath()));

    QIcon icn = QFileIconProvider::icon(info);
    if ( QIcon::hasThemeIcon(icn.name()) )
        return QIcon::fromTheme(icn.name());

    return icn;
}

//-----------------------------------------------------------------------------

static bool lessThen(FileSystemModel::Node *n1, FileSystemModel::Node *n2)
{
    if ( n1 == n2 )
        return true;
    const bool desc = bool(n1->sortOrder() == Qt::DescendingOrder);
    const int column = n1->sortColumn();

    //dirs always first right?
    if ( n1->isDir() && !n2->isDir() )
        return true;
    if ( !n1->isDir() && n2->isDir() )
        return false;

    //hidden... last?
    if ( n1->hidden() && !n2->hidden() )
        return false;
    if ( !n1->hidden() && n2->hidden() )
        return true;

    bool lt = true;
    switch (column)
    {
    case 0: lt = n1->name().toLower()<n2->name().toLower(); break; //name
    case 1: lt = n1->size()<n2->size(); break; //size
    case 2: lt = n1->suffix()<n2->suffix(); break; //type
    case 3: lt = n1->lastModified()<n2->lastModified(); break; //lastModified
    default: break;
    }
    return desc?!lt:lt;
}

FileSystemModel::Node::Node(FileSystemModel *model, const QString &path, Node *parent)
    : QFileInfo(path)
    , m_parent(parent)
    , m_isPopulated(false)
    , m_model(model)
    , m_filePath(path)
    , m_isLocked(false)
    , m_isChildLocked(false)
    , m_filter(QString(""))
{
    if ( !m_parent )
        m_name = "--";
    else if ( fileName().isEmpty() )
        m_name = filePath();
    else
        m_name = fileName();
    if ( m_parent )
        m_parent->insertChild(this);
}

FileSystemModel::Node::~Node()
{
    for (int i = 0; i<Deleted+1; ++i )
        qDeleteAll(m_children[i]);
}

void
FileSystemModel::Node::insertChild(Node *node)
{
    if ( node->hidden() && !showHidden() )
        m_children[Hidden] << node;
    else
    {
        int a = -1;
        int z = m_children[Visible].size();
        while ( ++a < z )
            if ( !lessThen(m_children[Visible].at(a), node) )
                break;

        const QModelIndex &index = model()->index(filePath());
        m_children[Visible].insert(a, node);
        if ( model()->hasIndex(a, 0, index) )
        {
            model()->beginInsertRows(index, a, a);
            model()->endInsertRows();
        }

    }
}

int FileSystemModel::Node::row()
{
    if ( !parent() )
        return -1;

    return parent()->children().indexOf(this);
}

int FileSystemModel::Node::childCount() { return m_children[Visible].size(); }

FileSystemModel::Node
*FileSystemModel::Node::child(const int c)
{
    Node *n = 0;
    if ( c >= 0 && c < m_children[Visible].size() )
        n = m_children[Visible].at(c);
    return n;
}

QString FileSystemModel::Node::name() { return m_name; }

FileSystemModel::Nodes FileSystemModel::Node::children() { return m_children[Visible]; }

bool FileSystemModel::Node::hidden() { return isHidden()&&!isLocked(); }

FileSystemModel *FileSystemModel::Node::model() { return m_model; }

void FileSystemModel::Node::blockChildren(bool p) { model()->dataGatherer()->pause(p); }

void FileSystemModel::Node::pause() { model()->dataGatherer()->pause(); }

void
FileSystemModel::Node::setFilter(const QString &filter)
{
    if ( filter == m_filter )
        return;

    m_filter = filter;
    emit model()->layoutAboutToBeChanged();
    for ( int i = 0; i < Filtered; ++i )
    {
        int c = m_children[i].count();
        while ( --c > -1 )
            if ( !m_children[i].at(c)->name().contains(filter, Qt::CaseInsensitive) )
                m_children[Filtered] << m_children[i].takeAt(c);
    }

    int f = m_children[Filtered].count();
    while ( --f > -1 )
        if ( m_children[Filtered].at(f)->name().contains(filter, Qt::CaseInsensitive) )
        {
            if ( m_children[Filtered].at(f)->hidden() && !showHidden() )
                m_children[Hidden] << m_children[Filtered].takeAt(f);
            else if ( m_children[Filtered].at(f)->hidden() && showHidden() )
                m_children[Visible] << m_children[Filtered].takeAt(f);
            else
                m_children[Visible] << m_children[Filtered].takeAt(f);
        }
    if ( m_children[Visible].count() > 1 )
        sort(&m_children[Visible]);
    emit model()->layoutChanged();
}

bool
FileSystemModel::Node::rename(const QString &newName)
{
    const QString &oldName = absoluteFilePath();
    if ( QFile::rename(oldName, dir().absoluteFilePath(newName)) )
    {
        m_filePath = dir().absoluteFilePath(newName);
        m_name = newName;
        setFile(m_filePath);
        refresh();
        return true;
    }
    return false;
}

QVariant
FileSystemModel::Node::data(const int column)
{
    switch (column)
    {
    case 0: return name(); break;
    case 1: return isDir()?QString("--"):Ops::prettySize(size()); break;
    case 2:
    {
        if ( isDir() )
            return QString("directory");
        else if ( isSymLink() )
            return QString("symlink");
        else if ( suffix().isEmpty() && isExecutable() )
            return QString("exec");
        else if ( suffix().isEmpty() )
            return QString("file");
        else
            return suffix();
        break;
    }
    case 3: return lastModified(); break;
    default: return QString("--");
    }
}

FileSystemModel::Node
*FileSystemModel::Node::nodeFromPath(const QString &path, bool checkOnly)
{
    if ( !isPopulated() )
    {
        if ( checkOnly )
            return 0;
        else
            rePopulate();
    }

    for ( int i = 0; i < Deleted; ++i )
    {
        int c = m_children[i].count();
        while ( --c > -1 )
        {
            Node *node = m_children[i].value(c, 0);
            if ( node && node->filePath() == path )
            {
                if ( i )
                    m_children[Visible] << m_children[i].takeAt(c);
                return node;
            }
        }
    }
    return 0;
}

FileSystemModel::Node
*FileSystemModel::Node::node(const QString &path, bool checkOnly)
{
    QFileInfo fi(path);
    if ( !fi.exists() || !fi.isAbsolute() )
        return 0;
    QStringList paths;
    QDir dir;
    if ( fi.isDir() )
        dir = QDir(path);
    else
    {
        dir = fi.dir();
        paths << dir.absolutePath();
    }
    paths << path;
    while (dir.cdUp())
        paths.prepend(dir.absolutePath());

    Node *node = model()->rootNode();

    while ( !paths.isEmpty() && node )
        node = node->nodeFromPath(paths.takeFirst(), checkOnly);

    if ( node && node->filePath() == path )
        return node;

    return 0;
}

static QDir::Filters filters = QDir::AllEntries|QDir::System|QDir::NoDotAndDotDot|QDir::Hidden;

void
FileSystemModel::Node::rePopulate()
{
    m_isPopulated = true;
    model()->startPopulating();
    if ( isLocked() )
        setLocked(false);
    if ( filePath() == model()->rootPath() )
    {
        int sc = model()->sortColumn();
        Qt::SortOrder so = model()->sortOrder();
        Ops::getSorting(filePath(), &sc, &so);
        if ( sc != model()->sortColumn() || so != model()->sortOrder() )
            model()->setSort(sc, so);
    }
    for ( int i = 0; i < Deleted; ++i )
    {
        int c = m_children[i].count();
        while ( --c > -1 )
        {
            Node *node = m_children[i].at(c);
            node->refresh();
            if ( !node->exists() )
            {
                if ( !i )
                    model()->beginRemoveRows(model()->index(filePath()), c, c);
                m_children[Deleted] << m_children[i].takeAt(c);
                if ( !i )
                    model()->endRemoveRows();
            }
        }
    }
    const QDir dir(filePath());
    if ( this == model()->rootNode() )
    {
        for ( int i = 0; i < QDir::drives().count(); ++i )
        {
            if ( hasChild(QDir::drives().at(i).filePath()) )
                continue;
            new Node(model(), QDir::drives().at(i).filePath(), this);
        }
    }
    else if ( dir.isAbsolute() )
    {
        QDirIterator it(filePath(), filters);
        while ( it.hasNext() )
        {
            const QFileInfo file(it.next());
            if ( hasChild(file.fileName()) )
                continue;
            new Node(model(), file.filePath(), this);
        }
    }

    model()->endPopulating();
    if ( filePath() == model()->rootPath() )
        emit model()->directoryLoaded(filePath());

    for ( int i = 0; i < m_children[Visible].count(); ++i )
        if ( m_children[Visible].at(i)->isPopulated() )
            m_children[Visible].at(i)->rePopulate();
}

bool
FileSystemModel::Node::hasChild(const QString &name)
{
    for ( int i = 0; i < Deleted; ++i )
    {
        FileSystemModel::Nodes::const_iterator start = m_children[i].constBegin(), end = m_children[i].constEnd();
        while ( start != end )
        {
            if ( (*start)->name() == name )
                return true;
            ++start;
        }
    }
    return false;
}

void
FileSystemModel::Node::sort()
{
    if ( m_children[Visible].isEmpty() )
        return;

    if ( m_children[Visible].count() > 1 )
        qStableSort(m_children[Visible].begin(), m_children[Visible].end(), lessThen);

    int i = m_children[Visible].count();
    while ( --i > -1 )
    {
        Node *node = m_children[Visible].at(i);
        if ( node->isPopulated() && node->hasChildren() )
            node->sort();
    }
}

void
FileSystemModel::Node::sort(Nodes *nodes)
{
    if ( !nodes )
        return;
    if ( nodes->count() < 2 )
        return;
    qStableSort(nodes->begin(), nodes->end(), lessThen);
}

void
FileSystemModel::Node::setHiddenVisible(bool visible)
{
    const QModelIndex &idx = model()->index(filePath());
    if ( visible )
    {
        model()->beginInsertRows(idx, m_children[Visible].count(), m_children[Visible].count()+m_children[Hidden].count());
        m_children[Visible]+=m_children[Hidden];
        sort(&m_children[Visible]);
        model()->endInsertRows();
        m_children[Hidden].clear();
    }
    else
    {
        int i = m_children[Visible].count();
        while ( --i > -1 )
            if ( m_children[Visible].at(i)->hidden() )
            {
                model()->beginRemoveRows(idx, i, i);
                m_children[Hidden] << m_children[Visible].takeAt(i);
                model()->endRemoveRows();
            }
    }
    int i = m_children[Visible].count();
    while ( --i > -1 )
        if ( m_children[Visible].at(i)->isPopulated() )
            m_children[Visible].at(i)->setHiddenVisible(visible);
}

//-----------------------------------------------------------------------------
# if 0
#ifdef Q_OS_LINUX
// for ioprio
#include <unistd.h>
#include <sys/syscall.h>
enum {
    IOPRIO_CLASS_NONE,
    IOPRIO_CLASS_RT,
    IOPRIO_CLASS_BE,
    IOPRIO_CLASS_IDLE
};

enum {
    IOPRIO_WHO_PROCESS = 1,
    IOPRIO_WHO_PGRP,
    IOPRIO_WHO_USER
};
#define IOPRIO_CLASS_SHIFT  13
#endif
#endif

void
DataGatherer::run()
{
#if 0
    bool ioPriorityWorked = false;
#if defined(Q_OS_LINUX) && defined(SYS_ioprio_set)

    // try setting the idle priority class

    ioPriorityWorked = ( syscall( SYS_ioprio_set, IOPRIO_WHO_PROCESS, 0, IOPRIO_CLASS_IDLE << IOPRIO_CLASS_SHIFT ) >= 0 );

    // try setting the lowest priority in the best-effort priority class (the default class)

    if( !ioPriorityWorked )
        ioPriorityWorked = ( syscall( SYS_ioprio_set, IOPRIO_WHO_PROCESS, 0, 7 | ( IOPRIO_CLASS_BE << IOPRIO_CLASS_SHIFT ) ) >= 0 );
#endif
    if( !ioPriorityWorked )
        setPriority( QThread::IdlePriority );
#endif

    switch ( m_task )
    {
    case Populate:
    {
        if ( !m_node )
            return;

        m_node->rePopulate();
        m_node->setHiddenVisible(m_node->showHidden());
        if ( m_node->filePath() != m_model->rootPath() )
            return;
        QFileSystemWatcher *watcher = m_model->dirWatcher();
        if ( !watcher->directories().isEmpty() )
            watcher->removePaths(watcher->directories());
        QStringList newPaths;
        FileSystemModel::Node *node = m_node;
        while ( node )
        {
            if ( !node->filePath().isEmpty() )
                newPaths << node->filePath();
            node->setLocked(true);
            node = node->parent();
        }
        if ( !newPaths.isEmpty() )
            watcher->addPaths(newPaths);
        break;
    }
    case Generate:
    {
        if ( QFileInfo(m_path).isDir() )
            m_result = m_model->rootNode()->node(m_path, false);
        if ( m_result )
            emit nodeGenerated(m_path, m_result);
        break;
    }
    default:
        break;
    }
}

void
DataGatherer::populateNode(FileSystemModel::Node *node)
{
    if ( isRunning() || node == m_model->rootNode() )
        return;
    m_task = Populate;
    m_node = node;
    start();
}

void
DataGatherer::generateNode(const QString &path)
{
    if ( isRunning() )
        return;
    m_task = Generate;
    m_path = path;
    m_node = 0;
    m_result = 0;
    start();
}

//-----------------------------------------------------------------------------

FileSystemModel::FileSystemModel(QObject *parent)
    : QAbstractItemModel(parent)
    , m_rootNode(new Node(this))
    , m_view(0)
    , m_showHidden(false)
    , m_ip(new FileIconProvider(this))
    , m_sortOrder(Qt::AscendingOrder)
    , m_sortColumn(0)
    , m_it(new ImagesThread(this))
    , m_thumbsLoader(new ThumbsLoader(this))
    , m_watcher(new QFileSystemWatcher(this))
    , m_container(0)
    , m_dataGatherer(new DataGatherer(this))
    , m_isPopulating(false)
{
    if ( ViewContainer *vc = qobject_cast<ViewContainer *>(parent) )
        m_container = vc;

    connect ( m_thumbsLoader, SIGNAL(thumbFor(QString,QString)), this, SLOT(thumbFor(QString,QString)) );
    connect ( m_it, SIGNAL(imagesReady(QString)), this, SLOT(flowDataAvailable(QString)) );
    connect ( this, SIGNAL(rootPathChanged(QString)), m_it, SLOT(clearData()) );
    connect ( m_watcher, SIGNAL(directoryChanged(QString)), this, SLOT(dirChanged(QString)) );
    connect ( m_dataGatherer, SIGNAL(nodeGenerated(QString,FileSystemModel::Node*)), this, SLOT(nodeGenerated(QString,FileSystemModel::Node*)) );
}

FileSystemModel::~FileSystemModel()
{
    delete m_rootNode;
    m_thumbsLoader->clearQueue();
    m_it->discontinue();
    while ( m_thumbsLoader->isRunning() )
        m_thumbsLoader->wait();
    while ( m_it->isRunning() )
        m_it->wait();
}

void
FileSystemModel::setSort(const int sortColumn, const int sortOrder)
{
    m_sortColumn = sortColumn;
    m_sortOrder = (Qt::SortOrder)sortOrder;
    emit sortingChanged(m_sortColumn, (int)m_sortOrder);
}

void
FileSystemModel::nodeGenerated(const QString &path, FileSystemModel::Node *node)
{
    if ( path != rootPath() )
        return;

    emit rootPathChanged(rootPath());
    dataGatherer()->populateNode(node);
}

void
FileSystemModel::setRootPath(const QString &path)
{
    if ( rootPath() == path || path.isEmpty() )
        return;
    m_rootPath = path;
    Node *node = rootNode()->node(path);
    if ( !node )
        dataGatherer()->generateNode(path);
    else
        nodeGenerated(path, node);
}

void
FileSystemModel::refresh()
{
    Node *node = rootNode()->node(rootPath());
    if ( !node )
        return;
    dataGatherer()->populateNode(node);
}

void
FileSystemModel::dirChanged(const QString &path)
{
    const QModelIndex &idx = index(path);
    if ( !idx.isValid() || !idx.parent().isValid() )
        return;

    Node *node = rootNode()->node(path);
    if ( !node )
        return;
    node->refresh();
    if ( !node->exists() )
    {
        beginRemoveRows(idx.parent(), node->row(), node->row());
        delete node;
        endRemoveRows();
    }
    else
        dataGatherer()->populateNode(node);
}

Qt::ItemFlags
FileSystemModel::flags(const QModelIndex &index) const
{
    Node *node = fromIndex(index);
    node->refresh();
    Qt::ItemFlags flags = QAbstractItemModel::flags(index);
    if ( node->isWritable() )
        flags |= Qt::ItemIsEditable;
    if ( node->isDir() )
        flags |= Qt::ItemIsDropEnabled;
    if ( node->isReadable() )
        flags |= Qt::ItemIsSelectable | Qt::ItemIsDragEnabled;
    return flags;
}

void
FileSystemModel::forceEmitDataChangedFor(const QString &file)
{
    const QModelIndex &idx = index(file);
    emit dataChanged(idx, idx);
    emit flowDataChanged(idx, idx);
}

void
FileSystemModel::flowDataAvailable(const QString &file)
{
    const QModelIndex &idx = index(file);
    emit flowDataChanged(idx, idx);
}

void
FileSystemModel::thumbFor(const QString &file, const QString &iconName)
{
    const QModelIndex &idx = index(file);
    emit dataChanged(idx, idx);
    if ( m_container->currentViewType() == ViewContainer::Flow )
        if ( !QFileInfo(file).isDir() )
            m_it->queueFile(file, m_thumbsLoader->thumb(file), true);
        else if ( !iconName.isNull() )
            m_it->queueName(QIcon::fromTheme(iconName));
}

bool FileSystemModel::hasThumb(const QString &file) const { return m_thumbsLoader->hasThumb(file); }

QVariant
FileSystemModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    Node *node = fromIndex(index);
    const QString &file = node->filePath();
    const int col = index.column();
    if ( node == m_rootNode )
        return QVariant();
    if ( role == Qt::DecorationRole && col > 0 )
        return QVariant();
    if ( role == FileNameRole )
        return node->name();
    if ( role == FilePathRole )
        return node->filePath();

    if ( role == Qt::TextAlignmentRole )
    if ( col == 1 )
        return int(Qt::AlignVCenter|Qt::AlignRight);
    else
        return int(Qt::AlignLeft|Qt::AlignVCenter);

    const bool customIcon = Store::config.icons.customIcons.contains(file);

    if ( col == 0 && role == Qt::DecorationRole && customIcon )
        return QIcon(Store::config.icons.customIcons.value(file));

    if ( role == Qt::DecorationRole )
    {
        if ( m_thumbsLoader->hasThumb(file) )
            return QIcon(QPixmap::fromImage(m_thumbsLoader->thumb(file)));
        else
        {
            if ( (Store::config.views.showThumbs || node->isDir()) && !isPopulating() )
                m_thumbsLoader->queueFile(file);
            return m_ip->icon(*node);
        }
    }

    if ( role >= FlowImg )
    {
        const QIcon &icon = customIcon ? QIcon(Store::config.icons.customIcons.value(file)) : m_ip->icon(*node);

        if ( m_it->hasData(file) )
            return QPixmap::fromImage(m_it->flowData(file, role == FlowRefl));

        if ( !m_thumbsLoader->hasThumb(file) && Store::config.views.showThumbs )
            m_thumbsLoader->queueFile(file);

        if ( (m_thumbsLoader->hasThumb(file) && !m_it->hasData(file) && Store::config.views.showThumbs) && !isPopulating() )
            m_it->queueFile(file, m_thumbsLoader->thumb(file));

        if ( m_it->hasNameData(icon.name()) )
            return QPixmap::fromImage(m_it->flowNameData(icon.name(), role == FlowRefl));
        else if ( !icon.name().isEmpty() )
            m_it->queueName(icon);

        if ( role == FlowRefl )
            return QPixmap();

        return icon.pixmap(SIZE);
    }

    if (role != Qt::DisplayRole && role != Qt::EditRole)
        return QVariant();

    return node->data(col);
}

bool
FileSystemModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if ( !index.isValid() || role != Qt::EditRole )
        return false;

    Node *node = fromIndex(index);
    const QString &newName = value.toString();
    const QString &oldName = node->fileName();
    const QString &path = node->path();
    if ( node->rename(newName) )
    {
        emit fileRenamed(path, oldName, newName);
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

QVariant
FileSystemModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ( role == Qt::DisplayRole )
        switch ( section )
        {
        case 0: return tr("Name"); break;
        case 1: return tr("Size"); break;
        case 2: return tr("Type"); break;
        case 3: return tr("Last Modified"); break;
        default: break;
        }
    else if ( role == Qt::TextAlignmentRole )
        return bool(section == 1) ? int(Qt::AlignRight|Qt::AlignVCenter) : int(Qt::AlignLeft|Qt::AlignVCenter);
    return QVariant();
}

QMimeData
*FileSystemModel::mimeData(const QModelIndexList &indexes) const
{
    QList<QUrl> urls;
    for ( int i = 0; i < indexes.count(); ++i )
    {
        const QModelIndex &index = indexes.at(i);
        if (!index.isValid() || index.column())
            continue;
        Node *node = fromIndex(index);
        urls << QUrl::fromLocalFile(node->filePath());
    }
    QMimeData *data = new QMimeData();
    data->setUrls(urls);
    return data;
}

int
FileSystemModel::rowCount(const QModelIndex &parent) const
{
    return fromIndex(parent)->childCount();
}

FileSystemModel::Node
*FileSystemModel::fromIndex(const QModelIndex &index) const
{
    Node *node = static_cast<Node *>(index.internalPointer());
    if (index.isValid() && node)
        return node;
    return m_rootNode;
}

QModelIndex
FileSystemModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    Node *parentNode = fromIndex(parent);
    Node *childNode = parentNode->child(row);

    if (childNode)
        return createIndex(row, column, childNode);
    else
        return QModelIndex();
}

QModelIndex
FileSystemModel::index(const QString &path) const
{
    Node *node = m_rootNode->node(path);
    if ( !node )
        return QModelIndex();

    return createIndex(node->row(), 0, node);
}

QModelIndex
FileSystemModel::parent(const QModelIndex &child) const
{
    Node *childNode = fromIndex(child);
    Node *parentNode = childNode->parent();

    if (!parentNode)
        return QModelIndex();
    if (parentNode == m_rootNode)
        return QModelIndex();

    return createIndex(parentNode->row(), 0, parentNode);
}

bool
FileSystemModel::hasChildren(const QModelIndex &parent) const
{
    return fromIndex(parent)->isDir();
}

bool
FileSystemModel::canFetchMore(const QModelIndex &parent) const
{
    return fromIndex(parent)->isDir();
}

void
FileSystemModel::fetchMore(const QModelIndex &parent)
{
    if ( parent.isValid() && parent.column() != 0 )
        return;
    Node *node = fromIndex(parent);
    if ( !node->isPopulated() )
        dataGatherer()->populateNode(node);
}

void
FileSystemModel::sort(int column, Qt::SortOrder order)
{
    if ( rootPath().isEmpty() )
        return;
    const bool orderChanged = bool(m_sortColumn!=column||m_sortOrder!=order);
    m_sortColumn = column;
    m_sortOrder = order;
    qDebug() << "sort called" << rootPath() << column << order;
    emit layoutAboutToBeChanged();
    const QModelIndexList &oldList = persistentIndexList();
    QList<QPair<int, Node *> > old;
    for ( int i = 0; i < oldList.count(); ++i )
        old << QPair<int, Node *>(oldList.at(i).column(), fromIndex(oldList.at(i)));

    rootNode()->sort();

    QModelIndexList newList;
    for ( int i = 0; i < old.count(); ++i )
    {
        QPair<int, Node *> n = old.at(i);
        Node *node = n.second;
        QModelIndex idx = index(node->filePath());
        if ( n.first > 0 )
            idx = idx.sibling(idx.row(), n.first);
        newList << idx;
    }
    changePersistentIndexList(oldList, newList);
    if ( orderChanged )
        emit sortingChanged(column, (int)order);
    emit layoutChanged();

#ifdef Q_WS_X11
    if ( Store::config.views.dirSettings && orderChanged )
    {
        QDir dir(rootPath());
        QSettings settings(dir.absoluteFilePath(".directory"), QSettings::IniFormat);
        settings.beginGroup("DFM");
        QVariant varCol = settings.value("sortCol");
        if ( varCol.isValid() )
        {
            int col = varCol.value<int>();
            if ( col != column )
                settings.setValue("sortCol", column);
        }
        else
            settings.setValue("sortCol", column);
        QVariant varOrd = settings.value("sortOrd");
        if ( varCol.isValid() )
        {
            Qt::SortOrder ord = (Qt::SortOrder)varOrd.value<int>();
            if ( ord != order )
                settings.setValue("sortOrd", order);
        }
        else
            settings.setValue("sortOrd", order);
        settings.endGroup();
    }
#endif
}

void
FileSystemModel::setHiddenVisible(bool visible)
{
    if ( visible == m_showHidden )
        return;

    m_showHidden = visible;
    rootNode()->setHiddenVisible(showHidden());
    emit hiddenVisibilityChanged(m_showHidden);
}

bool
FileSystemModel::dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent)
{
    if (!data->hasUrls())
        return false;

    Node *node = fromIndex(parent);
    if ( !node->isDir() )
        return false;

    IO::Job::copy(data->urls(), node->filePath(), true, true);
    return true;
}

QModelIndex
FileSystemModel::mkdir(const QModelIndex &parent, const QString &name)
{
    if ( parent.isValid() )
    {
        Node *node = fromIndex(parent);
        QDir dir(node->filePath());
        dir.mkdir(name);
        return index(dir.absoluteFilePath(name));
    }
    return QModelIndex();
}

QString
FileSystemModel::filePath(const QModelIndex &index) const
{
    return fromIndex(index)->filePath();
}

void
FileSystemModel::startPopulating()
{
    m_isPopulating = true;
}

void
FileSystemModel::endPopulating()
{
    m_isPopulating = false;
}