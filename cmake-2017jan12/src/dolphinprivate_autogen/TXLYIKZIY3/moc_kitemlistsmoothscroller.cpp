/****************************************************************************
** Meta object code from reading C++ file 'kitemlistsmoothscroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/private/kitemlistsmoothscroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistsmoothscroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListSmoothScroller_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListSmoothScroller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListSmoothScroller_t qt_meta_stringdata_KItemListSmoothScroller = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KItemListSmoothScroller"
QT_MOC_LITERAL(1, 24, 25), // "slotAnimationStateChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 25), // "QAbstractAnimation::State"
QT_MOC_LITERAL(4, 77, 8), // "newState"
QT_MOC_LITERAL(5, 86, 8) // "oldState"

    },
    "KItemListSmoothScroller\0"
    "slotAnimationStateChanged\0\0"
    "QAbstractAnimation::State\0newState\0"
    "oldState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListSmoothScroller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void KItemListSmoothScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListSmoothScroller *_t = static_cast<KItemListSmoothScroller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotAnimationStateChanged((*reinterpret_cast< QAbstractAnimation::State(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject KItemListSmoothScroller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemListSmoothScroller.data,
      qt_meta_data_KItemListSmoothScroller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListSmoothScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListSmoothScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListSmoothScroller.stringdata0))
        return static_cast<void*>(const_cast< KItemListSmoothScroller*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemListSmoothScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
