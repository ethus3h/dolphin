/****************************************************************************
** Meta object code from reading C++ file 'kitemlistviewanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/private/kitemlistviewanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistviewanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListViewAnimation_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListViewAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListViewAnimation_t qt_meta_stringdata_KItemListViewAnimation = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KItemListViewAnimation"
QT_MOC_LITERAL(1, 23, 8), // "finished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "QGraphicsWidget*"
QT_MOC_LITERAL(4, 50, 6), // "widget"
QT_MOC_LITERAL(5, 57, 37), // "KItemListViewAnimation::Anima..."
QT_MOC_LITERAL(6, 95, 4), // "type"
QT_MOC_LITERAL(7, 100, 12) // "slotFinished"

    },
    "KItemListViewAnimation\0finished\0\0"
    "QGraphicsWidget*\0widget\0"
    "KItemListViewAnimation::AnimationType\0"
    "type\0slotFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListViewAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KItemListViewAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListViewAnimation *_t = static_cast<KItemListViewAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QGraphicsWidget*(*)>(_a[1])),(*reinterpret_cast< KItemListViewAnimation::AnimationType(*)>(_a[2]))); break;
        case 1: _t->slotFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListViewAnimation::*_t)(QGraphicsWidget * , KItemListViewAnimation::AnimationType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListViewAnimation::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject KItemListViewAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemListViewAnimation.data,
      qt_meta_data_KItemListViewAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListViewAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListViewAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListViewAnimation.stringdata0))
        return static_cast<void*>(const_cast< KItemListViewAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemListViewAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KItemListViewAnimation::finished(QGraphicsWidget * _t1, KItemListViewAnimation::AnimationType _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
