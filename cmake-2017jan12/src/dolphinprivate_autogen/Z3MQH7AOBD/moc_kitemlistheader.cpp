/****************************************************************************
** Meta object code from reading C++ file 'kitemlistheader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kitemlistheader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListHeader_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListHeader_t qt_meta_stringdata_KItemListHeader = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KItemListHeader"
QT_MOC_LITERAL(1, 16, 18), // "columnWidthChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "role"
QT_MOC_LITERAL(4, 41, 12), // "currentWidth"
QT_MOC_LITERAL(5, 54, 13), // "previousWidth"
QT_MOC_LITERAL(6, 68, 25) // "columnWidthChangeFinished"

    },
    "KItemListHeader\0columnWidthChanged\0\0"
    "role\0currentWidth\0previousWidth\0"
    "columnWidthChangeFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListHeader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QReal,    3,    4,

       0        // eod
};

void KItemListHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListHeader *_t = static_cast<KItemListHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnWidthChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 1: _t->columnWidthChangeFinished((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListHeader::*_t)(const QByteArray & , qreal , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeader::columnWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemListHeader::*_t)(const QByteArray & , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeader::columnWidthChangeFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KItemListHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemListHeader.data,
      qt_meta_data_KItemListHeader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListHeader.stringdata0))
        return static_cast<void*>(const_cast< KItemListHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemListHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KItemListHeader::columnWidthChanged(const QByteArray & _t1, qreal _t2, qreal _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemListHeader::columnWidthChangeFinished(const QByteArray & _t1, qreal _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
