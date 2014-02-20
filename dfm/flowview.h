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


#ifndef FLOWVIEW_H
#define FLOWVIEW_H

#include <QWidget>
#include <QSplitter>
#include <QVBoxLayout>
#include <QSettings>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEffect>
#include <QGraphicsPixmapItem>

#include "filesystemmodel.h"
#include "detailsview.h"
#include "preview.h"

namespace DFM
{
class PreView;
class DetailsView;
class FlowView : public QWidget
{
    Q_OBJECT
public:
    explicit FlowView(QWidget *parent = 0);
    void setModel(QAbstractItemModel *model);
    QModelIndex rootIndex();
    QModelIndex currentIndex();
    void addActions(QList<QAction *> actions);
    inline DetailsView *detailsView() { return m_dView; }
    FS::Model *model();
    inline QSplitter *splitter() { return m_splitter; }
    void setSelectionModel(QItemSelectionModel *selectionModel);

public slots:
    void setRootIndex(const QModelIndex &rootIndex);

private slots:
    void flowCurrentIndexChanged(const QModelIndex &index);
    void treeCurrentIndexChanged(QItemSelection, QItemSelection);
    void saveSplitter();

private:
    DetailsView *m_dView;
    QSplitter *m_splitter;
    PreView *m_preView;
};
}

#endif // FLOWVIEW_H