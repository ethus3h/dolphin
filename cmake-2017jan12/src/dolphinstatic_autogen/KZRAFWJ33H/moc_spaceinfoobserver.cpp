/****************************************************************************
** Meta object code from reading C++ file 'spaceinfoobserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/statusbar/spaceinfoobserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spaceinfoobserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpaceInfoObserver_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpaceInfoObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpaceInfoObserver_t qt_meta_stringdata_SpaceInfoObserver = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SpaceInfoObserver"
QT_MOC_LITERAL(1, 18, 13), // "valuesChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "spaceInfoChanged"
QT_MOC_LITERAL(4, 50, 4), // "size"
QT_MOC_LITERAL(5, 55, 9) // "available"

    },
    "SpaceInfoObserver\0valuesChanged\0\0"
    "spaceInfoChanged\0size\0available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpaceInfoObserver[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    4,    5,

       0        // eod
};

void SpaceInfoObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpaceInfoObserver *_t = static_cast<SpaceInfoObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->spaceInfoChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpaceInfoObserver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpaceInfoObserver::valuesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SpaceInfoObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpaceInfoObserver.data,
      qt_meta_data_SpaceInfoObserver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpaceInfoObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpaceInfoObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpaceInfoObserver.stringdata0))
        return static_cast<void*>(const_cast< SpaceInfoObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int SpaceInfoObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpaceInfoObserver::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
