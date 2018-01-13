/****************************************************************************
** Meta object code from reading C++ file 'folderspanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/folders/folderspanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FoldersPanel_t {
    QByteArrayData data[21];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FoldersPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FoldersPanel_t qt_meta_stringdata_FoldersPanel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FoldersPanel"
QT_MOC_LITERAL(1, 13, 15), // "folderActivated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "url"
QT_MOC_LITERAL(4, 34, 19), // "folderMiddleClicked"
QT_MOC_LITERAL(5, 54, 12), // "errorMessage"
QT_MOC_LITERAL(6, 67, 5), // "error"
QT_MOC_LITERAL(7, 73, 17), // "slotItemActivated"
QT_MOC_LITERAL(8, 91, 5), // "index"
QT_MOC_LITERAL(9, 97, 21), // "slotItemMiddleClicked"
QT_MOC_LITERAL(10, 119, 28), // "slotItemContextMenuRequested"
QT_MOC_LITERAL(11, 148, 3), // "pos"
QT_MOC_LITERAL(12, 152, 28), // "slotViewContextMenuRequested"
QT_MOC_LITERAL(13, 181, 17), // "slotItemDropEvent"
QT_MOC_LITERAL(14, 199, 28), // "QGraphicsSceneDragDropEvent*"
QT_MOC_LITERAL(15, 228, 5), // "event"
QT_MOC_LITERAL(16, 234, 23), // "slotRoleEditingFinished"
QT_MOC_LITERAL(17, 258, 4), // "role"
QT_MOC_LITERAL(18, 263, 5), // "value"
QT_MOC_LITERAL(19, 269, 20), // "slotLoadingCompleted"
QT_MOC_LITERAL(20, 290, 20) // "startFadeInAnimation"

    },
    "FoldersPanel\0folderActivated\0\0url\0"
    "folderMiddleClicked\0errorMessage\0error\0"
    "slotItemActivated\0index\0slotItemMiddleClicked\0"
    "slotItemContextMenuRequested\0pos\0"
    "slotViewContextMenuRequested\0"
    "slotItemDropEvent\0QGraphicsSceneDragDropEvent*\0"
    "event\0slotRoleEditingFinished\0role\0"
    "value\0slotLoadingCompleted\0"
    "startFadeInAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FoldersPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   78,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      10,    2,   84,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    2,   92,    2, 0x08 /* Private */,
      16,    3,   97,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    8,   11,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,    8,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, QMetaType::QVariant,    8,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FoldersPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FoldersPanel *_t = static_cast<FoldersPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->folderActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->folderMiddleClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotItemActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotItemMiddleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotItemContextMenuRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 6: _t->slotViewContextMenuRequested((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 7: _t->slotItemDropEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 8: _t->slotRoleEditingFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->slotLoadingCompleted(); break;
        case 10: _t->startFadeInAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FoldersPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoldersPanel::folderActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FoldersPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoldersPanel::folderMiddleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FoldersPanel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FoldersPanel::errorMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FoldersPanel::staticMetaObject = {
    { &Panel::staticMetaObject, qt_meta_stringdata_FoldersPanel.data,
      qt_meta_data_FoldersPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FoldersPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoldersPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FoldersPanel.stringdata0))
        return static_cast<void*>(const_cast< FoldersPanel*>(this));
    return Panel::qt_metacast(_clname);
}

int FoldersPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FoldersPanel::folderActivated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FoldersPanel::folderMiddleClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FoldersPanel::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
