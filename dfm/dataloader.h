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


#ifndef DATALOADER_H
#define DATALOADER_H

#include <QObject>
#include <QThread>
#include <QModelIndex>
#include <QDebug>
#include <QAbstractItemView>
#include <QFile>
#include <QDir>
#include <QEvent>
#include <QMutex>
#include <QQueue>
#include "objects.h"
#include "helpers.h"

typedef struct _Data
{
    QImage thumb;
    QString count; //entries for dirs...
    QString mimeType, iconName, lastModified, fileType;
} Data;

namespace DFM
{

class DDataLoader : public DThread
{
    Q_OBJECT
public:
    static DDataLoader *instance();
    static inline void clearQueue() { s_queue.clear(); }
    static void removeData(const QString &file);
    static Data *data(const QString &file, const bool checkOnly = false);

public slots:
    void discontinue() { s_queue.clear(); DThread::discontinue(); }
    void fileRenamed(const QString &path, const QString &oldName, const QString &newName);
    
signals:
    void newData(const QString &file);
    void noLongerExists(const QString &file);

protected:
    explicit DDataLoader(QObject *parent = 0);
    void run();
    void getData(const QString &path);

private:
    int m_extent;

    static DHash<QString, Data *> s_data;
    static DQueue<QString> s_queue;
    static DMimeProvider s_mimeProvider;
    static DDataLoader *s_instance;
};

}

#endif // DATALOADER_H