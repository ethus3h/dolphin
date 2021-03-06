/***************************************************************************
 *   Copyright (C) 2008 by Peter Penz <peter.penz19@gmail.com>             *
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
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#include "selectiontoggle.h"

#include <KGlobalSettings>
#include <KIcon>
#include <KIconLoader>
#include <KIconEffect>
#include <KLocale>

#include <QApplication>
#include <QPainter>
#include <QPaintEvent>
#include <QRect>
#include <QTimer>
#include <QTimeLine>

#include <KDebug>

SelectionToggle::SelectionToggle(QWidget* parent) :
    QAbstractButton(parent),
    m_isHovered(false),
    m_leftMouseButtonPressed(false),
    m_fadingValue(0),
    m_margin(0),
    m_icon(),
    m_fadingTimeLine(0)
{
    setFocusPolicy(Qt::NoFocus);
    parent->installEventFilter(this);
    resize(sizeHint());
    setIconOverlay(isChecked());
    connect(this, SIGNAL(toggled(bool)),
            this, SLOT(setIconOverlay(bool)));
    connect(KGlobalSettings::self(), SIGNAL(iconChanged(int)),
            this, SLOT(refreshIcon()));
}

SelectionToggle::~SelectionToggle()
{
}

QSize SelectionToggle::sizeHint() const
{
    return QSize(16, 16);
}

void SelectionToggle::reset()
{
    m_url = KUrl();
    hide();
}

void SelectionToggle::setUrl(const KUrl& url)
{
    m_url = url;
    if (!url.isEmpty()) {
        startFading();
    }
}

void SelectionToggle::setMargin(int margin)
{
    if (margin != m_margin) {
        m_margin = margin;
        update();
    }
}

int SelectionToggle::margin() const
{
    return m_margin;
}

KUrl SelectionToggle::url() const
{
    return m_url;
}

void SelectionToggle::setVisible(bool visible)
{
    QAbstractButton::setVisible(visible);

    stopFading();
    if (visible) {
        startFading();
    }

}

bool SelectionToggle::eventFilter(QObject* obj, QEvent* event)
{
    if ((obj == parent()) && (event->type() == QEvent::MouseMove) && m_leftMouseButtonPressed) {
        // Don't forward mouse move events to the viewport,
        // otherwise a rubberband selection will be shown when
        // clicking on the selection toggle and moving the mouse
        // above the viewport.
        return true;
    }

    return QAbstractButton::eventFilter(obj, event);
}

void SelectionToggle::enterEvent(QEvent* event)
{
    QAbstractButton::enterEvent(event);

    // if the mouse cursor is above the selection toggle, display
    // it immediately without fading timer
    m_isHovered = true;
    if (m_fadingTimeLine) {
        m_fadingTimeLine->stop();
    }
    m_fadingValue = 255;
    setToolTip(isChecked() ? i18nc("@info:tooltip", "Deselect Item") :
                             i18nc("@info:tooltip", "Select Item"));
    update();
}

void SelectionToggle::leaveEvent(QEvent* event)
{
    QAbstractButton::leaveEvent(event);

    m_isHovered = false;
    update();
}

void SelectionToggle::mousePressEvent(QMouseEvent* event)
{
    QAbstractButton::mousePressEvent(event);
    m_leftMouseButtonPressed = (event->buttons() & Qt::LeftButton);
}

void SelectionToggle::mouseReleaseEvent(QMouseEvent* event)
{
    QAbstractButton::mouseReleaseEvent(event);
    m_leftMouseButtonPressed = (event->buttons() & Qt::LeftButton);
}

void SelectionToggle::resizeEvent(QResizeEvent* event)
{
    QAbstractButton::resizeEvent(event);
    setIconOverlay(isChecked());
}

void SelectionToggle::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setClipRect(event->rect());

    // draw the icon overlay
    const QPoint pos(m_margin, m_margin);
    if (m_isHovered) {
        KIconEffect *iconEffect = KIconLoader::global()->iconEffect();
        QPixmap activeIcon = iconEffect->apply(m_icon, KIconLoader::Desktop, KIconLoader::ActiveState);
        painter.drawPixmap(pos, activeIcon);
    } else {
        if (m_fadingValue < 255) {
            // apply an alpha mask respecting the fading value to the icon
            QPixmap icon = m_icon;
            QPixmap alphaMask(icon.width(), icon.height());
            const QColor color(m_fadingValue, m_fadingValue, m_fadingValue);
            alphaMask.fill(color);
            icon.setAlphaChannel(alphaMask);
            painter.drawPixmap(pos, icon);
        } else {
            // no fading is required
            painter.drawPixmap(pos, m_icon);
        }
    }

}

void SelectionToggle::setFadingValue(int value)
{
    m_fadingValue = value;
    if (m_fadingValue >= 255) {
        Q_ASSERT(m_fadingTimeLine);
        m_fadingTimeLine->stop();
    }
    update();
}

void SelectionToggle::setIconOverlay(bool checked)
{
    const char* icon = checked ? "list-remove" : "list-add";
    const int size = qMin(width() - 2 * m_margin, height() - 2 * m_margin);
    m_icon = KIconLoader::global()->loadIcon(icon,
                                             KIconLoader::NoGroup,
                                             size);
    update();
}

void SelectionToggle::refreshIcon()
{
    setIconOverlay(isChecked());
}

void SelectionToggle::startFading()
{
    Q_ASSERT(!m_fadingTimeLine);

    const bool animate = KGlobalSettings::graphicEffectsLevel() & KGlobalSettings::SimpleAnimationEffects;
    const int duration = animate ? 600 : 1;

    m_fadingTimeLine = new QTimeLine(duration, this);
    connect(m_fadingTimeLine, SIGNAL(frameChanged(int)),
            this, SLOT(setFadingValue(int)));
    m_fadingTimeLine->setFrameRange(0, 255);
    m_fadingTimeLine->start();
    m_fadingValue = 0;
}

void SelectionToggle::stopFading()
{
    if (m_fadingTimeLine) {
        m_fadingTimeLine->stop();
        delete m_fadingTimeLine;
        m_fadingTimeLine = 0;
    }
    m_fadingValue = 0;
}

#include "selectiontoggle.moc"
