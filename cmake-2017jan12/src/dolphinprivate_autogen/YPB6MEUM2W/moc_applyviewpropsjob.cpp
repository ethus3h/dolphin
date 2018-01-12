/****************************************************************************
** Meta object code from reading C++ file 'applyviewpropsjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/settings/applyviewpropsjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applyviewpropsjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ApplyViewPropsJob_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplyViewPropsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplyViewPropsJob_t qt_meta_stringdata_ApplyViewPropsJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApplyViewPropsJob"
QT_MOC_LITERAL(1, 18, 10), // "slotResult"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "KJob*"
QT_MOC_LITERAL(4, 36, 3), // "job"
QT_MOC_LITERAL(5, 40, 11), // "slotEntries"
QT_MOC_LITERAL(6, 52, 9), // "KIO::Job*"
QT_MOC_LITERAL(7, 62, 17) // "KIO::UDSEntryList"

    },
    "ApplyViewPropsJob\0slotResult\0\0KJob*\0"
    "job\0slotEntries\0KIO::Job*\0KIO::UDSEntryList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplyViewPropsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,

       0        // eod
};

void ApplyViewPropsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApplyViewPropsJob *_t = static_cast<ApplyViewPropsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->slotEntries((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KIO::Job* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ApplyViewPropsJob::staticMetaObject = {
    { &KIO::Job::staticMetaObject, qt_meta_stringdata_ApplyViewPropsJob.data,
      qt_meta_data_ApplyViewPropsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ApplyViewPropsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplyViewPropsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ApplyViewPropsJob.stringdata0))
        return static_cast<void*>(const_cast< ApplyViewPropsJob*>(this));
    return KIO::Job::qt_metacast(_clname);
}

int ApplyViewPropsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KIO::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
