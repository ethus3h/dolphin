/****************************************************************************
** Meta object code from reading C++ file 'placespanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/places/placespanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placespanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlacesPanel_t {
    QByteArrayData data[32];
    char stringdata0[476];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlacesPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlacesPanel_t qt_meta_stringdata_PlacesPanel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PlacesPanel"
QT_MOC_LITERAL(1, 12, 14), // "placeActivated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "url"
QT_MOC_LITERAL(4, 32, 18), // "placeMiddleClicked"
QT_MOC_LITERAL(5, 51, 12), // "errorMessage"
QT_MOC_LITERAL(6, 64, 5), // "error"
QT_MOC_LITERAL(7, 70, 24), // "storageTearDownRequested"
QT_MOC_LITERAL(8, 95, 9), // "mountPath"
QT_MOC_LITERAL(9, 105, 34), // "storageTearDownExternallyRequ..."
QT_MOC_LITERAL(10, 140, 12), // "readSettings"
QT_MOC_LITERAL(11, 153, 17), // "slotItemActivated"
QT_MOC_LITERAL(12, 171, 5), // "index"
QT_MOC_LITERAL(13, 177, 21), // "slotItemMiddleClicked"
QT_MOC_LITERAL(14, 199, 28), // "slotItemContextMenuRequested"
QT_MOC_LITERAL(15, 228, 3), // "pos"
QT_MOC_LITERAL(16, 232, 28), // "slotViewContextMenuRequested"
QT_MOC_LITERAL(17, 261, 17), // "slotItemDropEvent"
QT_MOC_LITERAL(18, 279, 28), // "QGraphicsSceneDragDropEvent*"
QT_MOC_LITERAL(19, 308, 5), // "event"
QT_MOC_LITERAL(20, 314, 33), // "slotItemDropEventStorageSetup..."
QT_MOC_LITERAL(21, 348, 7), // "success"
QT_MOC_LITERAL(22, 356, 22), // "slotAboveItemDropEvent"
QT_MOC_LITERAL(23, 379, 15), // "slotUrlsDropped"
QT_MOC_LITERAL(24, 395, 4), // "dest"
QT_MOC_LITERAL(25, 400, 11), // "QDropEvent*"
QT_MOC_LITERAL(26, 412, 8), // "QWidget*"
QT_MOC_LITERAL(27, 421, 6), // "parent"
QT_MOC_LITERAL(28, 428, 16), // "slotTrashUpdated"
QT_MOC_LITERAL(29, 445, 5), // "KJob*"
QT_MOC_LITERAL(30, 451, 3), // "job"
QT_MOC_LITERAL(31, 455, 20) // "slotStorageSetupDone"

    },
    "PlacesPanel\0placeActivated\0\0url\0"
    "placeMiddleClicked\0errorMessage\0error\0"
    "storageTearDownRequested\0mountPath\0"
    "storageTearDownExternallyRequested\0"
    "readSettings\0slotItemActivated\0index\0"
    "slotItemMiddleClicked\0"
    "slotItemContextMenuRequested\0pos\0"
    "slotViewContextMenuRequested\0"
    "slotItemDropEvent\0QGraphicsSceneDragDropEvent*\0"
    "event\0slotItemDropEventStorageSetupDone\0"
    "success\0slotAboveItemDropEvent\0"
    "slotUrlsDropped\0dest\0QDropEvent*\0"
    "QWidget*\0parent\0slotTrashUpdated\0KJob*\0"
    "job\0slotStorageSetupDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlacesPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,
       7,    1,  103,    2, 0x06 /* Public */,
       9,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  109,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      14,    2,  116,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      17,    2,  124,    2, 0x08 /* Private */,
      20,    2,  129,    2, 0x08 /* Private */,
      22,    2,  134,    2, 0x08 /* Private */,
      23,    3,  139,    2, 0x08 /* Private */,
      28,    1,  146,    2, 0x08 /* Private */,
      31,    2,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,   12,   15,
    QMetaType::Void, QMetaType::QPointF,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   12,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   21,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   12,   19,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 25, 0x80000000 | 26,   24,   19,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   21,

       0        // eod
};

void PlacesPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlacesPanel *_t = static_cast<PlacesPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->placeActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->placeMiddleClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->storageTearDownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->storageTearDownExternallyRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->readSettings(); break;
        case 6: _t->slotItemActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotItemMiddleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotItemContextMenuRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 9: _t->slotViewContextMenuRequested((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 10: _t->slotItemDropEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 11: _t->slotItemDropEventStorageSetupDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->slotAboveItemDropEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 13: _t->slotUrlsDropped((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 14: _t->slotTrashUpdated((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 15: _t->slotStorageSetupDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlacesPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesPanel::placeActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlacesPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesPanel::placeMiddleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlacesPanel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesPanel::errorMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlacesPanel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesPanel::storageTearDownRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlacesPanel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesPanel::storageTearDownExternallyRequested)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PlacesPanel::staticMetaObject = {
    { &Panel::staticMetaObject, qt_meta_stringdata_PlacesPanel.data,
      qt_meta_data_PlacesPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlacesPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlacesPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlacesPanel.stringdata0))
        return static_cast<void*>(const_cast< PlacesPanel*>(this));
    return Panel::qt_metacast(_clname);
}

int PlacesPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PlacesPanel::placeActivated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlacesPanel::placeMiddleClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlacesPanel::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlacesPanel::storageTearDownRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlacesPanel::storageTearDownExternallyRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
