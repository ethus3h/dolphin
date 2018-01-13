/****************************************************************************
** Meta object code from reading C++ file 'placesitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/places/placesitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placesitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlacesItemModel_t {
    QByteArrayData data[20];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlacesItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlacesItemModel_t qt_meta_stringdata_PlacesItemModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlacesItemModel"
QT_MOC_LITERAL(1, 16, 12), // "errorMessage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "message"
QT_MOC_LITERAL(4, 38, 16), // "storageSetupDone"
QT_MOC_LITERAL(5, 55, 5), // "index"
QT_MOC_LITERAL(6, 61, 7), // "success"
QT_MOC_LITERAL(7, 69, 24), // "storageTearDownRequested"
QT_MOC_LITERAL(8, 94, 9), // "mountPath"
QT_MOC_LITERAL(9, 104, 34), // "storageTearDownExternallyRequ..."
QT_MOC_LITERAL(10, 139, 15), // "slotDeviceAdded"
QT_MOC_LITERAL(11, 155, 3), // "udi"
QT_MOC_LITERAL(12, 159, 17), // "slotDeviceRemoved"
QT_MOC_LITERAL(13, 177, 23), // "slotStorageTearDownDone"
QT_MOC_LITERAL(14, 201, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(15, 218, 5), // "error"
QT_MOC_LITERAL(16, 224, 9), // "errorData"
QT_MOC_LITERAL(17, 234, 20), // "slotStorageSetupDone"
QT_MOC_LITERAL(18, 255, 8), // "hideItem"
QT_MOC_LITERAL(19, 264, 15) // "updateBookmarks"

    },
    "PlacesItemModel\0errorMessage\0\0message\0"
    "storageSetupDone\0index\0success\0"
    "storageTearDownRequested\0mountPath\0"
    "storageTearDownExternallyRequested\0"
    "slotDeviceAdded\0udi\0slotDeviceRemoved\0"
    "slotStorageTearDownDone\0Solid::ErrorType\0"
    "error\0errorData\0slotStorageSetupDone\0"
    "hideItem\0updateBookmarks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlacesItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       7,    1,   72,    2, 0x06 /* Public */,
       9,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    2,   84,    2, 0x08 /* Private */,
      17,    3,   89,    2, 0x08 /* Private */,
      18,    0,   96,    2, 0x08 /* Private */,
      19,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QVariant,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QVariant, QMetaType::QString,   15,   16,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlacesItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlacesItemModel *_t = static_cast<PlacesItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->storageSetupDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->storageTearDownRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->storageTearDownExternallyRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotDeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotDeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotStorageTearDownDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 7: _t->slotStorageSetupDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->hideItem(); break;
        case 9: _t->updateBookmarks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlacesItemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesItemModel::errorMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlacesItemModel::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesItemModel::storageSetupDone)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlacesItemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesItemModel::storageTearDownRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlacesItemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlacesItemModel::storageTearDownExternallyRequested)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PlacesItemModel::staticMetaObject = {
    { &KStandardItemModel::staticMetaObject, qt_meta_stringdata_PlacesItemModel.data,
      qt_meta_data_PlacesItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlacesItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlacesItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlacesItemModel.stringdata0))
        return static_cast<void*>(const_cast< PlacesItemModel*>(this));
    return KStandardItemModel::qt_metacast(_clname);
}

int PlacesItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PlacesItemModel::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlacesItemModel::storageSetupDone(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlacesItemModel::storageTearDownRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlacesItemModel::storageTearDownExternallyRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
