/****************************************************************************
** Meta object code from reading C++ file 'kitemlistselectionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kitemlistselectionmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistselectionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListSelectionManager_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListSelectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListSelectionManager_t qt_meta_stringdata_KItemListSelectionManager = {
    {
QT_MOC_LITERAL(0, 0, 25), // "KItemListSelectionManager"
QT_MOC_LITERAL(1, 26, 14), // "currentChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "current"
QT_MOC_LITERAL(4, 50, 8), // "previous"
QT_MOC_LITERAL(5, 59, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 76, 8) // "KItemSet"

    },
    "KItemListSelectionManager\0currentChanged\0"
    "\0current\0previous\0selectionChanged\0"
    "KItemSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListSelectionManager[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    3,    4,

       0        // eod
};

void KItemListSelectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListSelectionManager *_t = static_cast<KItemListSelectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< const KItemSet(*)>(_a[1])),(*reinterpret_cast< const KItemSet(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListSelectionManager::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListSelectionManager::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemListSelectionManager::*_t)(const KItemSet & , const KItemSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListSelectionManager::selectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KItemListSelectionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemListSelectionManager.data,
      qt_meta_data_KItemListSelectionManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListSelectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListSelectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListSelectionManager.stringdata0))
        return static_cast<void*>(const_cast< KItemListSelectionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemListSelectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KItemListSelectionManager::currentChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemListSelectionManager::selectionChanged(const KItemSet & _t1, const KItemSet & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
