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

#include <QPainter>
#include <QTextEdit>
#include <QMessageBox>
#include <QTimer>
#include <QApplication>
#include <QDebug>
#include <QLabel>
#include <QScrollBar>
#include "columnview.h"
#include "viewcontainer.h"
#include "mainwindow.h"
#include "filesystemmodel.h"
#include "operations.h"
#include "config.h"
#include "objects.h"

using namespace DFM;

#define KEY "colWidth"

class ColumnDelegate : public FileItemDelegate
{
public:
    explicit ColumnDelegate(QObject *parent = 0) : FileItemDelegate(parent) {}
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        ColumnView *view = static_cast<ColumnView *>(parent());
        const bool childViews(view->activeIndexes().contains(index));
        const bool isDir(static_cast<const FS::Model *>(index.model())->isDir(index));
        bool needBold(false);
        //background
        if (option.state & (QStyle::State_Selected|QStyle::State_MouseOver) || childViews)
        {
            QColor bg(option.palette.color(QPalette::Highlight));
            if (!(option.state & QStyle::State_Selected))
                bg.setAlpha(32);
            needBold = (option.state & QStyle::State_Selected)||childViews;
            painter->fillRect(option.rect, bg);
        }

        //icon
        const QRect ir(option.rect.topLeft(), QSize(20, option.rect.height()));
        const QIcon icon(index.data(FS::FileIconRole).value<QIcon>());
        if (!icon.isNull())
            icon.paint(painter, ir);

        //text
        const QFont savedFont(painter->font());
        if (needBold)
        {
            QFont f(savedFont);
            f.setBold(true);
            painter->setFont(f);
        }
        const QRect tr(option.rect.left()+20, option.rect.top(), option.rect.width()-(20+isDir*20), option.rect.height());
        QApplication::style()->drawItemText(painter,
                                            tr,
                                            Qt::AlignLeft|Qt::AlignVCenter,
                                            option.palette,
                                            option.state & QStyle::State_Enabled,
                                            painter->fontMetrics().elidedText(index.data().toString(), option.textElideMode, tr.width()),
                                            option.state & QStyle::State_Selected ? QPalette::HighlightedText : QPalette::Text);
        if (needBold)
            painter->setFont(savedFont);

        //arrow
        if (isDir)
        {
            QStyleOption copy = option;
            copy.rect = copy.rect.adjusted(copy.rect.width()-20, 0, 0, 0);
            QApplication::style()->drawPrimitive(QStyle::PE_IndicatorArrowRight, &copy, painter, view);
        }
    }
};

//---------------------------------------------------------------------------------------------------------

ColumnView::ColumnView(QWidget *parent) : QAbstractItemView(parent)
{
    setIconSize(QSize(16, 16));
    setDragDropMode(QAbstractItemView::DragDrop);
    setDropIndicatorShown(true);
    setDefaultDropAction(Qt::MoveAction);
    setAcceptDrops(true);
    setDragEnabled(true);
    setEditTriggers(QAbstractItemView::SelectedClicked|QAbstractItemView::EditKeyPressed);
    setSelectionMode(QAbstractItemView::ExtendedSelection);
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setTextElideMode(Qt::ElideRight);
    QAbstractItemDelegate *d = itemDelegate();
    setItemDelegate(new ColumnDelegate(this));
    connect(horizontalScrollBar(), SIGNAL(valueChanged(int)), this, SLOT(updateLayout()));
}

ColumnView::~ColumnView()
{

}

void
ColumnView::resizeEvent(QResizeEvent *e)
{
    QAbstractItemView::resizeEvent(e);
    updateLayout();
}

void
ColumnView::setRootIndex(const QModelIndex &index)
{
    QAbstractItemView::setRootIndex(index);
    destroyColumns(QModelIndex());
    m_indexesOfPath.clear();
    m_columns << createColumn(index);
    updateLayout();
}

void
ColumnView::destroyColumns(const QModelIndex &index)
{
    if (m_columns.isEmpty())
        return;
    int i(m_columns.count()-1);
    while (i > -1)
    {
        Column *c = m_columns.at(i);
        if (index.isValid() && index == c->rootIndex())
            break;
        m_indexesOfPath.removeOne(c->rootIndex());
        m_columns.removeOne(c);
        c->deleteLater();
        --i;
    }
}

void
ColumnView::open(const QModelIndex &index)
{
    if (index.data(FS::FileTypeRole).toString() == "directory")
    {
        destroyColumns(index.parent());
        m_columns << createColumn(index);
        m_indexesOfPath << index;
        updateLayout();
        clearSelection();
    }
    else
        emit opened(index);
    if (horizontalScrollBar()->value() < horizontalScrollBar()->maximum())
        horizontalScrollBar()->setValue(horizontalScrollBar()->maximum());
}

Column
*ColumnView::createColumn(const QModelIndex &rootIndex)
{
//    QAbstractItemView *column = QColumnView::createColumn(rootIndex);
    Column *column = new Column(this);
    initializeColumn(column);
    column->setRootIndex(rootIndex);
    connect(column, SIGNAL(opened(QModelIndex)), this, SLOT(open(QModelIndex)));
    connect(column, SIGNAL(newTabRequest(QModelIndex)), this, SIGNAL(newTabRequest(QModelIndex)));
    connect(column, SIGNAL(entered(QModelIndex)), this, SIGNAL(entered(QModelIndex)));
    column->show();
    return column;
}

void
ColumnView::initializeColumn(Column *column)
{
    column->setIconSize(iconSize());
    column->setFrameShape(QFrame::NoFrame);
    column->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    column->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    column->setMinimumWidth(100);
    column->setAttribute(Qt::WA_MacShowFocusRect, false);
    column->setDragDropMode(dragDropMode());
    column->setDragDropOverwriteMode(dragDropOverwriteMode());
    column->setDropIndicatorShown(showDropIndicator());
    column->setAlternatingRowColors(alternatingRowColors());
    column->setAutoScroll(hasAutoScroll());
    column->setEditTriggers(editTriggers());
    column->setHorizontalScrollMode(horizontalScrollMode());
    column->setIconSize(iconSize());
    column->setSelectionBehavior(selectionBehavior());
    column->setSelectionMode(selectionMode());
    column->setTabKeyNavigation(tabKeyNavigation());
    column->setTextElideMode(textElideMode());
    column->setVerticalScrollMode(verticalScrollMode());
    column->setModel(model());
    column->setSelectionModel(selectionModel());
    column->setCornerWidget(new Grip(column));

    // set the delegate to be the columnview delegate
    QAbstractItemDelegate *delegate = column->itemDelegate();
    column->setItemDelegate(itemDelegate());
    delete delegate;
}

void
ColumnView::updateLayout()
{
    int x(0);
    for (int i = 0; i < m_columns.count(); ++i)
    {
        Column *c = m_columns.at(i);
        c->move(x-horizontalScrollBar()->value(), 0);
        c->resize(c->width(), viewport()->height());
        x += c->width();
    }
    horizontalScrollBar()->setPageStep(width());
    if (x > width())
        horizontalScrollBar()->setRange(0, x-width());
    else
        horizontalScrollBar()->setRange(0, -1);
}

void
ColumnView::rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end)
{
    QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
    for (int i = 0; i < m_columns.count(); ++i)
    {
        Column *c = m_columns.at(i);
        if (!c->rootIndex().isValid())
        {
            m_columns.removeOne(c);
            c->deleteLater();
        }
    }
}

bool
ColumnView::edit(const QModelIndex &index, EditTrigger trigger, QEvent *event)
{
    for (int i = 0; i < m_columns.count(); ++i)
    {
        Column *c = m_columns.at(i);
        if (index.parent() == c->rootIndex())
            return c->edit(index, trigger, event);
    }
    return false;
}

/*
 * Pure virtual methods
 */

QModelIndex
ColumnView::indexAt(const QPoint &point) const
{
    for (int i = 0; i < m_columns.count(); ++i)
    {
        Column *c = m_columns.at(i);
        if (c->geometry().contains(point))
            return c->indexAt(point+c->frameGeometry().topLeft());
    }
    return QModelIndex();
}

void
ColumnView::scrollTo(const QModelIndex &index, ScrollHint hint)
{
    //hmm
}

QRect
ColumnView::visualRect(const QModelIndex &index) const
{
    if (!index.isValid())
        return QRect();
    for (int i = 0; i < m_columns.count(); ++i)
    {
        const Column *const c = m_columns.at(i);
        QRect r = c->visualRect(index);
        if (r.isValid())
        {
            r.translate(c->frameGeometry().topLeft());
            return r;
        }
    }
    return QRect();
}

int
ColumnView::horizontalOffset() const
{
    return horizontalScrollBar()->value();
}

int
ColumnView::verticalOffset() const
{
    return 0;
}

bool
ColumnView::isIndexHidden(const QModelIndex &index) const
{
    return false;
}

void
ColumnView::setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags)
{

}

QModelIndex
ColumnView::moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
{
    QModelIndex current = currentIndex();
    if (isRightToLeft()) {
        if (cursorAction == MoveLeft)
            cursorAction = MoveRight;
        else if (cursorAction == MoveRight)
            cursorAction = MoveLeft;
    }
    switch (cursorAction) {
    case MoveLeft:
        if (current.parent().isValid() && current.parent() != rootIndex())
            return (current.parent());
        else
            return current;
        break;

    case MoveRight:
        if (model()->hasChildren(current))
            return model()->index(0, 0, current);
        else
            return current.sibling(current.row() + 1, current.column());
        break;

    default:
        break;
    }

    return QModelIndex();
}

QRegion
ColumnView::visualRegionForSelection(const QItemSelection &selection) const
{
    return QRegion();
}

/*
 * End pure virtual methods
 */

//---------------------------------------------------------------------------------------------------------

Column::Column(QWidget *parent)
    : QListView(parent)
    , m_hasBeenShown(false)
{
    setSelectionRectVisible(true);
    setUniformItemSizes(true);
    ScrollAnimator::manage(this);
}

void
Column::paintEvent(QPaintEvent *e)
{
    QPainter p(viewport());
    for (int i = 0; i < model()->rowCount(rootIndex()); ++i)
    {
        const QModelIndex &index = model()->index(i, 0, rootIndex());
        QStyleOptionViewItemV4 opt = viewOptions();
        opt.rect = visualRect(index);
        if (opt.rect.width() > viewport()->width())
            opt.rect.setWidth(viewport()->width());
        if (!opt.rect.intersects(viewport()->rect()))
            continue;
        if (opt.rect.contains(viewport()->mapFromGlobal(QCursor::pos())))
            opt.state |= QStyle::State_MouseOver;
        if (selectedIndexes().contains(index))
            opt.state |= QStyle::State_Selected;
        itemDelegate()->paint(&p, opt, index);
    }
    p.end();
    e->accept();
}

void
Column::setRootIndex(const QModelIndex &index)
{
    QListView::setRootIndex(index);
    if (index.isValid())
    {
        const QString path = index.data(FS::FilePathRole).toString();
        static_cast<FS::Model *>(const_cast<QAbstractItemModel *>(index.model()))->watchDir(path);
    }
}

void
Column::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Escape)
        clearSelection();
    if (e->key() == Qt::Key_Return
         && e->modifiers() == Qt::NoModifier
         && state() == NoState)
    {
        if (selectionModel()->selectedIndexes().count())
            foreach (const QModelIndex &index, selectionModel()->selectedIndexes())
                if (!index.column())
                    emit opened(index);
        e->accept();
        return;
    }
    if (e->key() == Qt::Key_Meta)
        setDragEnabled(false);
    QListView::keyPressEvent(e);
    DViewBase::keyPressEvent(e);
}

void
Column::keyReleaseEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Meta)
        setDragEnabled(true);
    QListView::keyReleaseEvent(e);
}

void
Column::mousePressEvent(QMouseEvent *e)
{
    m_pressIdx = indexAt(e->pos());
    QListView::mousePressEvent(e);
}

void
Column::mouseReleaseEvent(QMouseEvent *e)
{
    if (m_pressIdx.isValid() && m_pressIdx == indexAt(e->pos()))
    {
        e->accept();
        if (e->button() == Qt::MiddleButton)
        {
            emit newTabRequest(m_pressIdx);
            m_pressIdx = QModelIndex();
            return;
        }
        if (Store::config.views.singleClick
                && e->button() == Qt::LeftButton
                && !e->modifiers())
        {
            emit opened(m_pressIdx);
            m_pressIdx = QModelIndex();
            return;
        }
    }
    QListView::mouseReleaseEvent(e);
}

void
Column::mouseDoubleClickEvent(QMouseEvent *e)
{
    if (m_pressIdx.isValid() && m_pressIdx == indexAt(e->pos()))
    {
        e->accept();
        if (!Store::config.views.singleClick)
        if (e->button() == Qt::LeftButton)
        {
            emit opened(m_pressIdx);
            m_pressIdx = QModelIndex();
            return;
        }
    }
    QListView::mouseDoubleClickEvent(e);
}

void
Column::contextMenuEvent(QContextMenuEvent *e)
{
    const QString &file = indexAt(e->pos()).data(FS::FilePathRole).toString();
    if (MainWindow *mw = MainWindow::currentWindow())
        mw->rightClick(file, e->globalPos());
}

void
Column::showEvent(QShowEvent *e)
{
    QListView::showEvent(e);
    if (!m_hasBeenShown)
    {
        bool ok;
        int width = Ops::getDesktopValue<int>(QDir(rootIndex().data(FS::FilePathRole).toString()), KEY, &ok, rootIndex().data(FS::UrlRole).toUrl().toString());
        if (!ok)
            width = Store::config.views.columnsView.colWidth;
        resize(width, height());
        m_hasBeenShown = true;
    }
}

void
Column::resizeEvent(QResizeEvent *e)
{
    QListView::resizeEvent(e);
    if (Store::config.views.dirSettings && m_hasBeenShown)
        Ops::writeDesktopValue<int>(QDir(rootIndex().data(FS::FilePathRole).toString()), KEY, size().width(), rootIndex().data(FS::UrlRole).toUrl().toString());
    if (e->size().width() != e->oldSize().width())
        static_cast<ColumnView *>(parent())->updateLayout();
}

//---------------------------------------------------------------------------------------------------------

Grip::Grip(QWidget *parent)
    : QWidget(parent)
    , m_x(-1)
{
    setCursor(Qt::SplitHCursor);
}

void
Grip::mousePressEvent(QMouseEvent *e)
{
    m_x = e->globalX();
    e->accept();
}

void
Grip::mouseReleaseEvent(QMouseEvent *e)
{
    m_x = -1;
    e->accept();
}

void
Grip::mouseMoveEvent(QMouseEvent *e)
{
    if (m_x != -1)
    {
        const QSize size = parentWidget()->size();
        parentWidget()->resize(parentWidget()->width() + (e->globalX()-m_x), parentWidget()->height());
        if (size != parentWidget()->size())
            m_x = e->globalX();
    }
    e->accept();
}

void
Grip::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    style()->drawControl(QStyle::CE_ColumnViewGrip, &opt, &painter, this);
    e->accept();
}
