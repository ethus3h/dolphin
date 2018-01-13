/****************************************************************************
** Meta object code from reading C++ file 'kitemlistrubberband.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/private/kitemlistrubberband.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistrubberband.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListRubberBand_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListRubberBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListRubberBand_t qt_meta_stringdata_KItemListRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 19), // "KItemListRubberBand"
QT_MOC_LITERAL(1, 20, 17), // "activationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "active"
QT_MOC_LITERAL(4, 46, 20), // "startPositionChanged"
QT_MOC_LITERAL(5, 67, 7), // "current"
QT_MOC_LITERAL(6, 75, 8), // "previous"
QT_MOC_LITERAL(7, 84, 18) // "endPositionChanged"

    },
    "KItemListRubberBand\0activationChanged\0"
    "\0active\0startPositionChanged\0current\0"
    "previous\0endPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListRubberBand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    2,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    5,    6,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    5,    6,

       0        // eod
};

void KItemListRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListRubberBand *_t = static_cast<KItemListRubberBand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->startPositionChanged((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 2: _t->endPositionChanged((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListRubberBand::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListRubberBand::activationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemListRubberBand::*_t)(const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListRubberBand::startPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KItemListRubberBand::*_t)(const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListRubberBand::endPositionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject KItemListRubberBand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemListRubberBand.data,
      qt_meta_data_KItemListRubberBand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListRubberBand.stringdata0))
        return static_cast<void*>(const_cast< KItemListRubberBand*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemListRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KItemListRubberBand::activationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemListRubberBand::startPositionChanged(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KItemListRubberBand::endPositionChanged(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
