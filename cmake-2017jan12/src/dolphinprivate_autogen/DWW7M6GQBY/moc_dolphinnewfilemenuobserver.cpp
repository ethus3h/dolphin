/****************************************************************************
** Meta object code from reading C++ file 'dolphinnewfilemenuobserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/dolphinnewfilemenuobserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinnewfilemenuobserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinNewFileMenuObserver_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinNewFileMenuObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinNewFileMenuObserver_t qt_meta_stringdata_DolphinNewFileMenuObserver = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DolphinNewFileMenuObserver"
QT_MOC_LITERAL(1, 27, 11), // "itemCreated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "url"
QT_MOC_LITERAL(4, 44, 12), // "errorMessage"
QT_MOC_LITERAL(5, 57, 5) // "error"

    },
    "DolphinNewFileMenuObserver\0itemCreated\0"
    "\0url\0errorMessage\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinNewFileMenuObserver[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void DolphinNewFileMenuObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinNewFileMenuObserver *_t = static_cast<DolphinNewFileMenuObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemCreated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinNewFileMenuObserver::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinNewFileMenuObserver::itemCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinNewFileMenuObserver::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinNewFileMenuObserver::errorMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DolphinNewFileMenuObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DolphinNewFileMenuObserver.data,
      qt_meta_data_DolphinNewFileMenuObserver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinNewFileMenuObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinNewFileMenuObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinNewFileMenuObserver.stringdata0))
        return static_cast<void*>(const_cast< DolphinNewFileMenuObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int DolphinNewFileMenuObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DolphinNewFileMenuObserver::itemCreated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DolphinNewFileMenuObserver::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
