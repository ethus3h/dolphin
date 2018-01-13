/****************************************************************************
** Meta object code from reading C++ file 'placesitemsignalhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/places/placesitemsignalhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placesitemsignalhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlacesItemSignalHandler_t {
    QByteArrayData data[7];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlacesItemSignalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlacesItemSignalHandler_t qt_meta_stringdata_PlacesItemSignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PlacesItemSignalHandler"
QT_MOC_LITERAL(1, 24, 27), // "tearDownExternallyRequested"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 3), // "udi"
QT_MOC_LITERAL(4, 57, 22), // "onAccessibilityChanged"
QT_MOC_LITERAL(5, 80, 25), // "onTrashDirListerCompleted"
QT_MOC_LITERAL(6, 106, 19) // "onTearDownRequested"

    },
    "PlacesItemSignalHandler\0"
    "tearDownExternallyRequested\0\0udi\0"
    "onAccessibilityChanged\0onTrashDirListerCompleted\0"
    "onTearDownRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlacesItemSignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void PlacesItemSignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlacesItemSignalHandler *_t = static_cast<PlacesItemSignalHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tearDownExternallyRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onAccessibilityChanged(); break;
        case 2: _t->onTrashDirListerCompleted(); break;
        case 3: _t->onTearDownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlacesItemSignalHandler::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesItemSignalHandler::tearDownExternallyRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlacesItemSignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlacesItemSignalHandler.data,
      qt_meta_data_PlacesItemSignalHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlacesItemSignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlacesItemSignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlacesItemSignalHandler.stringdata0))
        return static_cast<void*>(const_cast< PlacesItemSignalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PlacesItemSignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PlacesItemSignalHandler::tearDownExternallyRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
