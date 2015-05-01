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

#include <QAction>
#include <QMenu>
#include <QProcess>
#include <QStyledItemDelegate>
#include <QTextLayout>
#include <QRect>
#include <qmath.h>
#include <QTextEdit>
#include <QMessageBox>
#include <QTextCursor>
#include <QTextFormat>
#include <QDesktopServices>
#include <QPainter>
#include <QApplication>
#include <QWheelEvent>
#include <QScrollBar>
#include <QSettings>
#include <QPropertyAnimation>
#include <QTransform>
#include <QDebug>
#include "filesystemmodel.h"
#include "viewcontainer.h"
#include "iconview.h"
#include "viewcontainer.h"
#include "mainwindow.h"
#include "operations.h"
#include "viewanimator.h"
#include "objects.h"
#include "config.h"

#define TEXT index.data().toString()
#define RECT option.rect
#define FM option.fontMetrics
#define PAL option.palette
#define DECOSIZE option.decorationSize
#define SHADOW 5

using namespace DFM;

class IconDelegate : public FileItemDelegate
{
public:
    enum ShadowPart { TopLeft = 0, Top, TopRight, Left, Center, Right, BottomLeft, Bottom, BottomRight };
    inline explicit IconDelegate(IconView *parent)
        : FileItemDelegate(parent)
        , m_iv(parent)
        , m_mid(Ops::colorMid(parent->palette().color(QPalette::Highlight), parent->palette().color(QPalette::Base)))
    {
        genShadowData();
    }
    inline QPixmap shadowPix()
    {
        const int size((SHADOW*2)+1);
        QPixmap pix(size, size);
        pix.fill(Qt::transparent);
        QPainter p(&pix);
        p.translate(0.5f, 0.5f);
        QRect r(pix.rect());
        const float d = (float)r.height()/2.0f;
        QRadialGradient rg(r.center(), d);
    //    const QColor &c2(QColor(c.red(), c.green(), c.blue(), c.alpha()/4));
    //    c.setAlpha(192);
        QColor c(Qt::black);
        rg.setColorAt(0.2f, c);
        c.setAlpha(96);
        rg.setColorAt(0.5f, c);
        rg.setColorAt(0.9f, Qt::transparent);
        p.setBrush(rg);
        p.setPen(Qt::NoPen);
        p.setRenderHint(QPainter::Antialiasing);
        p.drawEllipse(r);
        r.adjust(SHADOW-1, SHADOW-1, -(SHADOW-1), -SHADOW);
        p.translate(-0.5f, -0.5f);
        p.setCompositionMode(QPainter::CompositionMode_DestinationOut);
        p.fillRect(r, Qt::black);
        p.end();
        return pix;
    }
    inline void genShadowData()
    {
        QPixmap shadow = shadowPix();

        m_shadowData[TopLeft] = shadow.copy(0, 0, SHADOW, SHADOW);
        m_shadowData[Top] = shadow.copy(SHADOW, 0, 1, SHADOW);
        m_shadowData[TopRight] = shadow.copy(SHADOW, 0, SHADOW, SHADOW);
        m_shadowData[Left] = shadow.copy(0, SHADOW, SHADOW, 1);
        m_shadowData[Center] = QPixmap(); //no center...
        m_shadowData[Right] = shadow.copy(shadow.width()-(SHADOW+1), SHADOW, SHADOW, 1);
        m_shadowData[BottomLeft] = shadow.copy(0, SHADOW, SHADOW, SHADOW);
        m_shadowData[Bottom] = shadow.copy(SHADOW, shadow.height()-(SHADOW+1), 1, SHADOW);
        m_shadowData[BottomRight] = shadow.copy(SHADOW, SHADOW, SHADOW, SHADOW);
    }
    inline void renderShadow(QRect rect, QPainter *painter) const
    {
        const int x = rect.x(), y = rect.y(), r = rect.right(), b = rect.bottom(), w = rect.width(), h = rect.height();
        painter->drawTiledPixmap(QRect(rect.topLeft(), m_shadowData[TopLeft].size()), m_shadowData[TopLeft]);
        painter->drawTiledPixmap(QRect(QPoint(x+SHADOW, y), QSize(w-(SHADOW*2+1), m_shadowData[Top].height())), m_shadowData[Top]);
        painter->drawTiledPixmap(QRect(QPoint(r-SHADOW, y), m_shadowData[TopRight].size()), m_shadowData[TopRight]);
        painter->drawTiledPixmap(QRect(QPoint(x, y+SHADOW), QSize(m_shadowData[Left].width(), h-(SHADOW*2+1))), m_shadowData[Left]);
        painter->drawTiledPixmap(QRect(QPoint(r-SHADOW, y+SHADOW), QSize(m_shadowData[Right].width(), h-(SHADOW*2+1))), m_shadowData[Right]);
        painter->drawTiledPixmap(QRect(QPoint(x, b-SHADOW), m_shadowData[BottomLeft].size()), m_shadowData[BottomLeft]);
        painter->drawTiledPixmap(QRect(QPoint(x+SHADOW, b-SHADOW), QSize(w-(SHADOW*2+1), m_shadowData[Bottom].height())), m_shadowData[Bottom]);
        painter->drawTiledPixmap(QRect(QPoint(r-SHADOW, b-SHADOW), m_shadowData[BottomRight].size()), m_shadowData[BottomRight]);
    }
    void setEditorData(QWidget *editor, const QModelIndex &index) const
    {
        FileItemDelegate::setEditorData(editor, index);
        static_cast<QTextEdit *>(editor)->setAlignment(Qt::AlignCenter);
    }
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        if (!m_model || !index.isValid() || !option.rect.isValid())
            return;

        const QPen savedPen(painter->pen());
        const QBrush savedBrush(painter->brush());
//        const QFont savedFont(painter->font());

        const bool selected(option.state & QStyle::State_Selected);
        const int step(selected ? STEPS : ViewAnimator::hoverLevel(m_iv, index));
        if (step)
        {
            QColor h(selected?PAL.color(QPalette::Highlight):m_mid);
            if (!selected)
                h.setAlpha((255.0f/(float)STEPS)*step);
            painter->setPen(Qt::NoPen);
            painter->setBrush(h);
            const bool hadAA(painter->testRenderHint(QPainter::Antialiasing));
            painter->setRenderHint(QPainter::Antialiasing);
            painter->drawRoundedRect(RECT.adjusted(1, 1, 0, 0), 3, 3);
            painter->setRenderHint(QPainter::Antialiasing, hadAA);
        }
        const QPixmap &pixmap = pix(option, index);
        QRect textRect(RECT), pixRect(RECT);
        pixRect.setBottom(pixRect.top()+DECOSIZE.height()+((SHADOW-3)*2));
        textRect.setTop(pixRect.bottom());
//        painter->setFont(index.data(Qt::FontRole).value<QFont>());
        painter->setPen(PAL.color(selected?QPalette::HighlightedText:QPalette::Text));
        painter->drawText(textRect, Qt::AlignTop|Qt::AlignHCenter, text(option, index));
//        QApplication::style()->drawItemText(painter, textRect, Qt::AlignTop|Qt::AlignHCenter, PAL, option.state&QStyle::State_Enabled, text(option, index), selected?QPalette::HighlightedText:QPalette::Text);
        pixRect = QApplication::style()->itemPixmapRect(pixRect, Qt::AlignCenter, pixmap);

        if (m_model->hasThumb(index))
            renderShadow(pixRect.adjusted(-(SHADOW-1), -(SHADOW-1), SHADOW-1, SHADOW), painter);

        QApplication::style()->drawItemPixmap(painter, pixRect, Qt::AlignCenter, pixmap);
        painter->setPen(savedPen);
        painter->setBrush(savedBrush);
//        painter->setFont(savedFont);
    }
    inline void setModel(FS::Model *fsModel) { m_model = fsModel; }
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        return m_iv->gridSize();
    }
    inline void clearData() { m_textData.clear(); m_pixData.clear(); }
    inline void clear(const QModelIndex &index)
    {
        if (m_pixData.contains(index.internalPointer()))
            m_pixData.remove(index.internalPointer());
        if (m_textData.contains(index.internalPointer()))
            m_textData.remove(index.internalPointer());
    }
    bool isHitted(const QModelIndex &index, const QPoint &p, const QRect &r = QRect()) const
    {
        if (m_pixData.contains(index.internalPointer()) && static_cast<const FS::Model *>(index.model())->hasThumb(index))
        {
            QRect pixRect(r);
            pixRect.setBottom(pixRect.top()+m_iv->iconSize().height()+((SHADOW-3)*2));
            return QApplication::style()->itemPixmapRect(pixRect, Qt::AlignCenter, m_pixData.value(index.internalPointer())).contains(p);
        }
        QRect theRect(QPoint(0,0), m_iv->iconSize());
        theRect.moveCenter(QRect(r.topLeft(), QSize(r.width(), m_iv->iconSize().height()+2)).center());
        return theRect.contains(p);
    }
protected:
    QPixmap pix(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        if (!index.isValid()||!index.internalPointer())
            return QPixmap();

        if (m_pixData.contains(index.internalPointer()))
            return m_pixData.value(index.internalPointer());

        const QIcon &icon = m_model->fileIcon(index);
        const bool isThumb = m_model->hasThumb(index);

        int newSize = icon.actualSize(DECOSIZE).height();
        if (!isThumb && icon.actualSize(DECOSIZE).height() < DECOSIZE.height())
        {
            QList<int> il;
            for (int i = 0; i < icon.availableSizes().count(); ++i)
                il << icon.availableSizes().at(i).height();

            if (il.count() > 1)
                qSort(il);

            int i = -1;

            while (newSize < DECOSIZE.height() && ++i<il.count())
                newSize = il.at(i);
        }

        QPixmap pixmap = icon.pixmap(isThumb?256:newSize);
        QSize sz(pixmap.size());
        if (isThumb)
            sz.scale(RECT.width()-((SHADOW-2)*2), DECOSIZE.height()-SHADOW, Qt::KeepAspectRatio);
        else
            sz = DECOSIZE;
        if (pixmap.size() != DECOSIZE && pixmap.width()>sz.width() && pixmap.height()>sz.height())
            pixmap = pixmap.scaled(sz, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        m_pixData.insert(index.internalPointer(), pixmap);
        return pixmap;
    }
    QString text(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        if (!index.isValid()||!index.internalPointer())
            return QString();

        if (m_textData.contains(index.internalPointer()))
            return m_textData.value(index.internalPointer());
        QFontMetrics fm(option.fontMetrics);

        QString spaces(TEXT.replace(".", QString(" ")));
        spaces = spaces.replace("_", QString(" "));
        QString theText;

        QTextLayout textLayout(spaces, option.font);
        int lineCount = -1;
        QTextOption opt;
        opt.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        textLayout.setTextOption(opt);

        const int w = RECT.width();

        textLayout.beginLayout();
        while (++lineCount < Store::config.views.iconView.lineCount)
        {
            QTextLine line = textLayout.createLine();
            if (!line.isValid())
                break;

            line.setLineWidth(w);
            QString actualText;
            actualText = TEXT.mid(line.textStart(), qMin(line.textLength(), TEXT.count()));
            if (line.lineNumber() == Store::config.views.iconView.lineCount-1)
                actualText = fm.elidedText(TEXT.mid(line.textStart(), TEXT.count()), Qt::ElideRight, w);

            //this should only happen if there
            //are actual dots or underscores...
            //so width should always be > oldw
            //we do this only cause QTextLayout
            //doesnt think that dots or underscores
            //are actual wordseparators
            if (fm.boundingRect(actualText).width() > w)
            {
                int width = 0;
                if (actualText.contains("."))
                    width += fm.boundingRect(".").width()*actualText.count(".");
                if (actualText.contains("_"))
                    width += fm.boundingRect("_").width()*actualText.count("_");

                int oldw = fm.boundingRect(" ").width()*actualText.count(" ");
                int diff = width - oldw;

                line.setLineWidth(w-diff);
                actualText = TEXT.mid(line.textStart(), qMin(line.textLength(), TEXT.count()));
                if (line.lineNumber() == Store::config.views.iconView.lineCount-1)
                    actualText = fm.elidedText(TEXT.mid(line.textStart(), TEXT.count()), Qt::ElideRight, w);
            }
            theText.append(QString("%1\n").arg(actualText));
        }
        textLayout.endLayout();
        m_textData.insert(index.internalPointer(), theText);
        return theText;
    }
    static inline int textFlags() { return Qt::AlignHCenter | Qt::AlignTop | Qt::TextWordWrap; }

private:
    QPixmap m_shadowData[9];
    QColor m_mid;
    IconView *m_iv;
    mutable QHash<void *, QString> m_textData;
    mutable QHash<void *, QPixmap> m_pixData;
    FS::Model *m_model;
};

IconView::IconView(QWidget *parent)
    : QAbstractItemView(parent)
    , m_newSize(0)
    , m_gridHeight(0)
    , m_model(0)
    , m_horItems(0)
    , m_scrollTimer(new QTimer(this))
    , m_sizeTimer(new QTimer(this))
    , m_layTimer(new QTimer(this))
    , m_resizeTimer(new QTimer(this))
    , m_hadSelection(false)
{
    ScrollAnimator::manage(this);
    setItemDelegate(new IconDelegate(this));
    const int iSize = Store::config.views.iconView.iconSize*16;
    setGridHeight(iSize);
    setSelectionMode(QAbstractItemView::ExtendedSelection);

    setIconSize(QSize(iSize, iSize));
    updateLayout();
    setEditTriggers(QAbstractItemView::SelectedClicked | QAbstractItemView::EditKeyPressed);
    setDragDropMode(QAbstractItemView::DragDrop);
    setDropIndicatorShown(true);
    setDefaultDropAction(Qt::MoveAction);
    viewport()->setAcceptDrops(true);
    setDragEnabled(true);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setSelectionBehavior(QAbstractItemView::SelectRows);

    connect(verticalScrollBar(), SIGNAL(valueChanged(int)), viewport(), SLOT(update()));
    connect(this, SIGNAL(iconSizeChanged(int)), this, SLOT(setGridHeight(int)));
    connect(static_cast<ViewContainer *>(parent), SIGNAL(settingsChanged()), this, SLOT(correctLayout()));
    connect(m_sizeTimer, SIGNAL(timeout()), this, SLOT(updateIconSize()));
    connect(m_layTimer, SIGNAL(timeout()), this, SLOT(calculateRects()));
    connect(m_scrollTimer, SIGNAL(timeout()), this, SLOT(scrollAnimation()));
    connect(m_resizeTimer, SIGNAL(timeout()), this, SLOT(sizeTimerEvent()));

    m_slide = false;
    m_startSlide = false;

    for (int i = 16; i <= 256; i+=16)
        m_allowedSizes << i;
}

IconView::~IconView()
{

}


void
IconView::setNewSize(const int size)
{
    m_newSize = size;
    if (!m_sizeTimer->isActive())
        m_sizeTimer->start(25);
}

void
IconView::updateIconSize()
{
    if (iconWidth() > m_newSize) //zoom out
        setIconWidth(iconWidth()-qMax(1, ((iconWidth()-m_newSize)/2)));
    else if (iconWidth() < m_newSize) //zoom in
        setIconWidth(iconWidth()+qMax(1, ((m_newSize-iconWidth())/2)));
    else
    {
        emit iconSizeChanged(m_newSize);
        m_sizeTimer->stop();
    }
}

void
IconView::wheelEvent(QWheelEvent *event)
{
    if (event->modifiers() & Qt::CTRL)
    {
        MainWindow *mw = MainWindow::window(this);
        if (QSlider *s = mw->iconSizeSlider())
            s->setValue(s->value()+(event->delta()>0?1:-1));
    }
    else
        QAbstractItemView::wheelEvent(event);
    event->accept();
}

void
IconView::showEvent(QShowEvent *e)
{
    QAbstractItemView::showEvent(e);
    updateLayout();
}

void
IconView::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
        clearSelection();
    if (event->key() == Qt::Key_Return
         && event->modifiers() == Qt::NoModifier
         && state() == NoState)
    {
        const QModelIndexList &selection = selectionModel()->selectedRows();
        for (int i = 0; i < selection.count(); ++i)
            emit opened(selection.at(i));
        event->accept();
        return;
    }
    DViewBase::keyPressEvent(event);
    QAbstractItemView::keyPressEvent(event);
}

void
IconView::resizeEvent(QResizeEvent *e)
{
    QAbstractItemView::resizeEvent(e);
    m_prevSize = size();
    m_resizeTimer->start(250);
    if (m_contentsHeight>viewport()->height())
        verticalScrollBar()->setRange(0, m_contentsHeight-viewport()->height());
    else
        verticalScrollBar()->setRange(0, -1);
    verticalScrollBar()->setPageStep(viewport()->height());
}

void
IconView::sizeTimerEvent()
{
    if (m_prevSize==size())
    {
        m_resizeTimer->stop();
        updateLayout();
    }
}

void
IconView::mouseMoveEvent(QMouseEvent *event)
{
    int newVal = event->pos().x() > m_startPos.x() ? 16 : -16;
    bool shouldSlide = event->pos().x() > m_startPos.x() + 64 || event->pos().x() < m_startPos.x() - 64;
    newVal += iconSize().width();

    if (shouldSlide && m_startSlide && m_allowedSizes.contains(newVal))
    {
        m_slide = true;
        emit iconSizeChanged(newVal);
        m_startPos = event->pos();
    }
    if ((event->buttons() & Qt::LeftButton) && selectionModel() && !indexAt(m_pressPos).isValid())
    {
        setState(DragSelectingState);
        const QRect selectRect(event->pos(), m_pressPos);
        bool hasCount = false;
        for (int i = 0; i<model()->rowCount(rootIndex()); ++i)
        {
            const QModelIndex &index(model()->index(i, 0, rootIndex()));
            const QRect vr(visualRect(index));
            if (!selectRect.intersects(vr))
                continue;
            hasCount = true;
            m_hadSelection = false;
            QItemSelectionModel::SelectionFlags command = selectionCommand(index, event);
//            if (command.testFlag(QItemSelectionModel::Toggle))
//            {
//                command &= ~QItemSelectionModel::Toggle;
//            }
            setSelection(selectRect, command);
            if (index.isValid() && (index != selectionModel()->currentIndex()))
                selectionModel()->setCurrentIndex(index, QItemSelectionModel::NoUpdate);
        }
        if (!hasCount && !m_hadSelection)
            selectionModel()->clearSelection();
    }
    else
        QAbstractItemView::mouseMoveEvent(event);
    if (m_pressPos != QPoint())
        viewport()->update();
}

void
IconView::mousePressEvent(QMouseEvent *event)
{
    m_pressPos = event->pos();
    m_pressedIndex = indexAt(m_pressPos);
    m_hadSelection = selectionModel()->hasSelection();
    QAbstractItemView::mousePressEvent(event);

    if (!selectionModel() || (state() == EditingState))
        return;

    if (event->button() == Qt::MiddleButton)
    {
        m_startPos = event->pos();
        m_startSlide = true;
        setDragEnabled(false);   //we will likely not want to drag items around at this point...
    }
}

void
IconView::mouseReleaseEvent(QMouseEvent *e)
{
    QAbstractItemView::mouseReleaseEvent(e);
    const QModelIndex &index = indexAt(e->pos());
    m_pressPos = QPoint();
    if (Store::config.views.singleClick
         && e->modifiers() == Qt::NoModifier
         && e->button() == Qt::LeftButton
         && state() == NoState)
    {
        if (index == m_pressedIndex)
            emit opened(index);
        m_pressedIndex = QModelIndex();
    }
    else if (e->button() == Qt::MiddleButton)
    {
        if (e->pos() == m_startPos
             && !e->modifiers()
             && index == m_pressedIndex)
        {
            emit newTabRequest(index);
            e->accept();
        }
        if (m_startSlide)
        {
            m_slide = false;
            m_startSlide = false;
            setDragEnabled(true);
            m_startPos = QPoint();
        }
    }
    viewport()->update(); //needed for not painting errors after rubberband selection
}

void
IconView::mouseDoubleClickEvent(QMouseEvent *event)
{
    QAbstractItemView::mouseDoubleClickEvent(event);
    const QModelIndex &index = indexAt(event->pos());
    if (index.isValid()
            && !Store::config.views.singleClick
            && !event->modifiers()
            && event->button() == Qt::LeftButton
            && state() == NoState)
        emit opened(index);
}

QStyleOptionViewItem
IconView::viewOptions() const
{
    QStyleOptionViewItemV4 option(QAbstractItemView::viewOptions());
    option.widget=this;
//    option.decorationAlignment=Qt::AlignHCenter|Qt::AlignTop;
    option.decorationPosition=QStyleOptionViewItem::Top;
//    option.displayAlignment=Qt::AlignHCenter|Qt::AlignTop;
    return option;
}

void
IconView::renderCategory(const QString &category, const QRect &catRect, QPainter *p, const int index)
{
    p->save();
    QFont f(font());
    f.setBold(true);
    QFontMetrics fm(f);
    QColor bg(palette().color(QPalette::Text));
    bg.setAlpha(bool(index&1)?32:16);
    QColor mid(Ops::colorMid(palette().color(QPalette::Base), palette().color(QPalette::Text)));
    switch (Store::config.views.iconView.categoryStyle)
    {
    case 0:
    {
        p->fillRect(catRect, bg);
        p->setPen(QColor(255,255,255,64));
        p->drawLine(catRect.topLeft(), catRect.topRight());
        p->setPen(QColor(0,0,0,64));
        p->drawLine(catRect.bottomLeft(), catRect.bottomRight());
        break;
    }
    case 1:
    {
        p->setRenderHint(QPainter::Antialiasing);
        p->setBrush(bg);
        p->setPen(Qt::NoPen);
        p->drawRoundedRect(catRect.adjusted(0, 1, -1, 0), 4, 4);
        break;
    }
    case 2:
    {
        QRectF rf(catRect.adjusted(0, 2, -1, 0));
        p->setRenderHint(QPainter::Antialiasing);
        p->setBrush(bg);
        p->setPen(mid);
        p->drawRoundedRect(rf.translated(0.5, 0.5), 4, 4);
        break;
    }
    }
    p->setPen(mid);
    p->setFont(f);
    p->drawText(fm.boundingRect(2, catRect.top()+1, width(), height(), 0, category, category.size()), category);
    p->restore();
}

void
IconView::paintEvent(QPaintEvent *e)
{
    QPainter p(viewport());
    p.setClipRect(e->rect());
    if (isCategorized())
    {
        for (int cat = 0; cat < m_categories.count(); ++cat)
        {
            const QString &category(m_categories.at(cat));
            const QRect catRect = visualRect(category);
            if (!e->rect().intersects(catRect))
                continue;

            renderCategory(category, catRect, &p, cat);

            const QModelIndexList &block(m_model->category(category));
            for (int i = 0; i < block.count(); ++i)
            {
                const QModelIndex &index(block.at(i));
                const QRect vr(visualRect(index));
                if (!e->rect().intersects(vr))
                    continue;
                QStyleOptionViewItemV4 option(viewOptions());
                option.rect=vr;
                if (selectionModel()->isSelected(index))
                    option.state|=QStyle::State_Selected;
                itemDelegate()->paint(&p, option, index);
            }
        }
    }
    else
    {
        for (int i = 0; i < m_model->rowCount(rootIndex()); ++i)
        {
            const QModelIndex &index(m_model->index(i, 0, rootIndex()));
            const QRect vr(visualRect(index));
            if (!e->rect().intersects(vr))
                continue;
            QStyleOptionViewItemV4 option(viewOptions());
            option.rect=vr;
            option.widget=this;
            if (selectionModel()->isSelected(index))
                option.state|=QStyle::State_Selected;
            itemDelegate()->paint(&p, option, index);
        }
    }
    if (m_slide)
    {
        const QString &sizeString = QString::number(iconSize().width()).append(" px");
        QFont font = p.font();
        font.setBold(true);
        font.setPointSize(32);
        p.setFont(font);
        QRect rect;
        rect.setSize(QFontMetrics(font).boundingRect(sizeString).size());
        rect.moveBottomRight(viewport()->rect().bottomRight());
        p.drawText(rect, sizeString);
    }
    if (m_pressPos != QPoint() && state() == DragSelectingState)
    {
        QStyleOptionRubberBand opt;
        opt.initFrom(this);
        opt.shape = QRubberBand::Rectangle;
        opt.opaque = false;

        const QPoint &gb = mapFromGlobal(QCursor::pos());
        const int startx = qMin(m_pressPos.x(), gb.x());
        const int starty = qMin(m_pressPos.y(), gb.y());
        const int endx = qMax(m_pressPos.x(), gb.x());
        const int endy = qMax(m_pressPos.y(), gb.y());
        opt.rect = QRect(startx, starty, endx-startx, endy-starty);
        style()->drawControl(QStyle::CE_RubberBand, &opt, &p);
    }
    p.end();
}

void
IconView::setGridHeight(int gh)
{
    m_gridHeight = gh + SHADOW*2-1 + (fontMetrics().height()+fontMetrics().leading())*Store::config.views.iconView.lineCount-fontMetrics().leading();
}

void
IconView::correctLayout()
{
    m_gridHeight = iconSize().height() + SHADOW*2-1 + (fontMetrics().height()+fontMetrics().leading())*Store::config.views.iconView.lineCount-fontMetrics().leading();
    updateLayout();
}

void
IconView::updateLayout()
{
    if (!isVisible()||!m_model)
        return;

    int contentsWidth = viewport()->width();
    int horItemCount = m_horItems = contentsWidth/(iconSize().width() + Store::config.views.iconView.textWidth*2);
    const int rowCount = m_model->rowCount(rootIndex());
    if (rowCount < horItemCount && rowCount > 1 && !isCategorized())
        horItemCount = model()->rowCount(rootIndex());
    if (contentsWidth && horItemCount)
        setGridSize(QSize(contentsWidth/horItemCount, m_gridHeight));
    calculateRects();
}

void
IconView::contextMenuEvent(QContextMenuEvent *event)
{
    const QString &file = indexAt(event->pos()).data(FS::FilePathRole).toString();
    MainWindow::currentWindow()->rightClick(file, event->globalPos());
}


void
IconView::setModel(QAbstractItemModel *model)
{
    QAbstractItemView::setModel(model);
    if (m_model = qobject_cast<FS::Model *>(model))
    {
        m_layTimer->setInterval(50);
        connect(m_model, SIGNAL(finishedWorking()), this, SLOT(updateLayout()));
        connect(m_model, SIGNAL(urlLoaded(QUrl)), this, SLOT(updateLayout()));
        connect(m_model, SIGNAL(finishedWorking()), m_layTimer, SLOT(stop()));
        connect(m_model, SIGNAL(startedWorking()), m_layTimer, SLOT(start()));
        connect(m_model, SIGNAL(urlChanged(QUrl)), this, SLOT(clear()));
        connect(m_model, SIGNAL(sortingChanged(int,int)), this, SLOT(calculateRects()));
        connect(m_model, SIGNAL(dataChanged(QModelIndex,QModelIndex)), this, SLOT(clear(QModelIndex,QModelIndex)));
        connect(m_model, SIGNAL(layoutChanged()), this, SLOT(updateLayout()));
        connect(m_model, SIGNAL(modelReset()), this, SLOT(updateLayout()));
        static_cast<IconDelegate*>(itemDelegate())->setModel(m_model);
    }
    ViewAnimator::manage(this);
}

void
IconView::setIconWidth(const int width)
{
    QAbstractItemView::setIconSize(QSize(width, width));
    setGridHeight(width);
    setGridSize(QSize(gridSize().width(), m_gridHeight));
    updateLayout();
}

QRect
IconView::visualRect(const QModelIndex &index) const
{
    if (!index.isValid()||index.column()||!m_horItems||!m_rects.contains(index.internalPointer()))
        return QRect();

    return m_rects.value(index.internalPointer(), QRect()).translated(0, -verticalOffset());
}

QRect
IconView::visualRect(const QString &cat) const
{
    return m_catRects.value(cat, QRect()).translated(0, -verticalOffset());
}

QModelIndex
IconView::indexAt(const QPoint &p) const
{
    for (int i = 0; i < m_model->rowCount(rootIndex()); ++i)
    {
        const QModelIndex &index(m_model->index(i, 0, rootIndex()));
        const QRect r(visualRect(index));
//        if (!viewport()->rect().intersects(r))
//            continue;
        if (r.contains(p))
            if (static_cast<IconDelegate *>(itemDelegate())->isHitted(index, p, r))
                return index;
    }
    return QModelIndex();
}

void
IconView::scrollTo(const QModelIndex &index, ScrollHint hint)
{
    if (!index.isValid()||!verticalScrollBar()->isEnabled())
        return;
    const QRect r(visualRect(index));
    if (viewport()->rect().intersects(r)&&hint==QAbstractItemView::EnsureVisible)
        return;

    const bool goUp = r.top()<viewport()->rect().top();
    const int h = viewport()->height();
    int v = -1;
    switch (hint)
    {
    case QAbstractItemView::EnsureVisible:
        if (goUp)
            v = r.top()+verticalOffset();
        else
            v = r.bottom()+verticalOffset()-h;
        break;
    case QAbstractItemView::PositionAtTop:
        v = r.top()+verticalOffset();
        break;
    case QAbstractItemView::PositionAtBottom:
        v = r.bottom()+verticalOffset()-h;
        break;
    case QAbstractItemView::PositionAtCenter:
        v = ((r.top()+verticalOffset())-h/2)-r.height()/2;
        break;
    default: break;
    }
    if (v>-1)
        animatedScrollTo(v);
}

void
IconView::animatedScrollTo(const int pos)
{
    int start = verticalOffset();
    int range = pos-start;
    int block = qCeil((float)range/10.0f);

    m_scrollValues.clear();
    for (int i=1; i<=10; ++i)
        m_scrollValues << (start+=block);
    m_scrollTimer->start(20);
}

void
IconView::scrollAnimation()
{
    if (m_scrollValues.isEmpty())
        m_scrollTimer->stop();
    else
        verticalScrollBar()->setValue(m_scrollValues.takeFirst());
}

bool
IconView::isCategorized()
{
    return Store::config.views.iconView.categorized;
}

void
IconView::calculateRects()
{
    if (!m_horItems)
        return;
    m_rects.clear();
    m_catRects.clear();
    static_cast<IconDelegate *>(itemDelegate())->clearData();
    const int hsz = gridSize().width();
    const int vsz = gridSize().height();
    m_contentsHeight = -vsz;

    if (isCategorized())
    {
        m_categories = m_model->categories();
        QFont f(font());
        f.setBold(true);
        QFontMetrics fm(f);
        for (int cat = 0; cat < m_categories.count(); ++cat)
        {
            m_contentsHeight+=vsz;
            const int startv = m_contentsHeight;

            m_contentsHeight+=fm.height();
            int col = -1;
            const QModelIndexList &block(m_model->category(m_categories.at(cat)));
            for (int i = 0; i < block.count(); ++i)
            {
                if (col+1==m_horItems)
                {
                    m_contentsHeight+=vsz;
                    col=0;
                }
                else
                    ++col;
                const QModelIndex &index(block.at(i));
                if (index.isValid()&&index.internalPointer())
                    m_rects.insert(index.internalPointer(), QRect(hsz*col, m_contentsHeight, hsz, vsz));
            }
            m_catRects.insert(m_categories.at(cat), QRect(0, startv, viewport()->width(), (m_contentsHeight+vsz)-startv));
        }
    }
    else
    {
        for (int i = 0; i < m_model->rowCount(rootIndex()); ++i)
        {
            const QModelIndex &index(m_model->index(i, 0, rootIndex()));
            const int col = i % m_horItems;
            m_contentsHeight = vsz * (i / m_horItems);
            if (index.isValid()&&index.internalPointer())
                m_rects.insert(index.internalPointer(), QRect(hsz*col, m_contentsHeight, hsz, vsz));
        }
    }
    m_contentsHeight+=vsz;
    if (m_contentsHeight > viewport()->height())
        verticalScrollBar()->setRange(0, m_contentsHeight-viewport()->height());
    else
        verticalScrollBar()->setRange(0, -1);
    viewport()->update();
    if (!m_model->isWorking())
        m_layTimer->stop();
}

//These two not needed at all for this?
int IconView::horizontalOffset() const { return 0; }
bool IconView::isIndexHidden(const QModelIndex & index) const { return false; }

QModelIndex
IconView::moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
{
    const QRect r(visualRect(currentIndex()));

    switch (cursorAction)
    {
    case MoveUp:
    {
        QPoint p(r.center().x(), r.y()-1);
        while (p.y()>-verticalOffset())
        {
            const QModelIndex &index(indexAt(p));
            if (index.isValid())
                return index;
            --p.ry();
        }
        break;
    }
    case MoveDown:
    {
        QPoint p(r.center().x(), r.bottom()+1);
        while (p.y()<m_contentsHeight-verticalOffset())
        {

            const QModelIndex &index(indexAt(p));
            if (index.isValid())
                return index;
            ++p.ry();
        }
        break;
    }
    case MoveLeft:
    {
        QPoint p(r.x()-1, r.center().y());
        while (p.x()>viewport()->rect().x())
        {
            const QModelIndex &index(indexAt(p));
            if (index.isValid())
                return index;
            --p.rx();
        }
        break;
    }
    case MoveRight:
    {
        QPoint p(r.right()+1, r.center().y());
        while (p.x()<viewport()->rect().right())
        {
            const QModelIndex &index(indexAt(p));
            if (index.isValid())
                return index;
            ++p.rx();
        }
        break;
    }
    case MoveHome:
        return m_model->index(0, 0, rootIndex());
    case MoveEnd:
        return m_model->index(m_model->rowCount(rootIndex())-1, 0, rootIndex());
    case MovePageUp:
        return indexAt(r.center()-QPoint(0, viewport()->height()));
    case MovePageDown:
        return indexAt(r.center()+QPoint(0, viewport()->height()));
    case MoveNext: break;
    case MovePrevious: break;
    default: break;
    }
    return QModelIndex();
}

void
IconView::setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags flags)
{
    QItemSelection selection;
    for (int i = 0; i < m_model->rowCount(rootIndex()); ++i)
    {
        const QModelIndex &index(m_model->index(i, 0, rootIndex()));
        const QRect vr(visualRect(index));
        if (rect.intersects(vr))
            selection.select(index, index);
    }
    selectionModel()->select(selection, flags);
}

int
IconView::verticalOffset() const
{
    return verticalScrollBar()->value();
}

QRegion
IconView::visualRegionForSelection(const QItemSelection &selection) const
{
    // when is this needed anyway?
    QRegion region;
    foreach (const QModelIndex &index, selection.indexes())
        region += visualRect(index);
    return region;
}

void
IconView::clear(const QModelIndex &first, const QModelIndex &last)
{
    static_cast<IconDelegate *>(itemDelegate())->clear(first);
}

void
IconView::clear()
{
    static_cast<IconDelegate *>(itemDelegate())->clearData();
}
