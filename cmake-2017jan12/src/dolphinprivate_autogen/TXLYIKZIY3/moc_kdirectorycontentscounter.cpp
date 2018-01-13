/****************************************************************************
** Meta object code from reading C++ file 'kdirectorycontentscounter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/private/kdirectorycontentscounter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdirectorycontentscounter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KDirectoryContentsCounter_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDirectoryContentsCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDirectoryContentsCounter_t qt_meta_stringdata_KDirectoryContentsCounter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KDirectoryContentsCounter"
QT_MOC_LITERAL(1, 26, 6), // "result"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "path"
QT_MOC_LITERAL(4, 39, 5), // "count"
QT_MOC_LITERAL(5, 45, 29), // "requestDirectoryContentsCount"
QT_MOC_LITERAL(6, 75, 40), // "KDirectoryContentsCounterWork..."
QT_MOC_LITERAL(7, 116, 7), // "options"
QT_MOC_LITERAL(8, 124, 10), // "slotResult"
QT_MOC_LITERAL(9, 135, 17), // "slotDirWatchDirty"
QT_MOC_LITERAL(10, 153, 16) // "slotItemsRemoved"

    },
    "KDirectoryContentsCounter\0result\0\0"
    "path\0count\0requestDirectoryContentsCount\0"
    "KDirectoryContentsCounterWorker::Options\0"
    "options\0slotResult\0slotDirWatchDirty\0"
    "slotItemsRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDirectoryContentsCounter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   49,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void KDirectoryContentsCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KDirectoryContentsCounter *_t = static_cast<KDirectoryContentsCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->requestDirectoryContentsCount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< KDirectoryContentsCounterWorker::Options(*)>(_a[2]))); break;
        case 2: _t->slotResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotDirWatchDirty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotItemsRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDirectoryContentsCounterWorker::Options >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KDirectoryContentsCounter::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KDirectoryContentsCounter::result)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KDirectoryContentsCounter::*_t)(const QString & , KDirectoryContentsCounterWorker::Options );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KDirectoryContentsCounter::requestDirectoryContentsCount)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KDirectoryContentsCounter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KDirectoryContentsCounter.data,
      qt_meta_data_KDirectoryContentsCounter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KDirectoryContentsCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDirectoryContentsCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KDirectoryContentsCounter.stringdata0))
        return static_cast<void*>(const_cast< KDirectoryContentsCounter*>(this));
    return QObject::qt_metacast(_clname);
}

int KDirectoryContentsCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KDirectoryContentsCounter::result(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDirectoryContentsCounter::requestDirectoryContentsCount(const QString & _t1, KDirectoryContentsCounterWorker::Options _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
