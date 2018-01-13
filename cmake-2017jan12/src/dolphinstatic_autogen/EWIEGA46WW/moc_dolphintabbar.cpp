/****************************************************************************
** Meta object code from reading C++ file 'dolphintabbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/dolphintabbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphintabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinTabBar_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinTabBar_t qt_meta_stringdata_DolphinTabBar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DolphinTabBar"
QT_MOC_LITERAL(1, 14, 19), // "openNewActivatedTab"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 12), // "tabDropEvent"
QT_MOC_LITERAL(5, 54, 11), // "QDropEvent*"
QT_MOC_LITERAL(6, 66, 5), // "event"
QT_MOC_LITERAL(7, 72, 18), // "tabDetachRequested"
QT_MOC_LITERAL(8, 91, 25) // "slotAutoActivationTimeout"

    },
    "DolphinTabBar\0openNewActivatedTab\0\0"
    "index\0tabDropEvent\0QDropEvent*\0event\0"
    "tabDetachRequested\0slotAutoActivationTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinTabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       7,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DolphinTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinTabBar *_t = static_cast<DolphinTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openNewActivatedTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabDropEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 2: _t->tabDetachRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotAutoActivationTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinTabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinTabBar::openNewActivatedTab)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinTabBar::*_t)(int , QDropEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinTabBar::tabDropEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DolphinTabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinTabBar::tabDetachRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DolphinTabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_DolphinTabBar.data,
      qt_meta_data_DolphinTabBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinTabBar.stringdata0))
        return static_cast<void*>(const_cast< DolphinTabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int DolphinTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DolphinTabBar::openNewActivatedTab(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DolphinTabBar::tabDropEvent(int _t1, QDropEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DolphinTabBar::tabDetachRequested(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
