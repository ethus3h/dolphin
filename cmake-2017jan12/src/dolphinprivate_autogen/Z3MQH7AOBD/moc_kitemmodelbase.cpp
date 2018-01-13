/****************************************************************************
** Meta object code from reading C++ file 'kitemmodelbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kitemmodelbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemmodelbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemModelBase_t {
    QByteArrayData data[21];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemModelBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemModelBase_t qt_meta_stringdata_KItemModelBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KItemModelBase"
QT_MOC_LITERAL(1, 15, 13), // "itemsInserted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "KItemRangeList"
QT_MOC_LITERAL(4, 45, 10), // "itemRanges"
QT_MOC_LITERAL(5, 56, 12), // "itemsRemoved"
QT_MOC_LITERAL(6, 69, 10), // "itemsMoved"
QT_MOC_LITERAL(7, 80, 10), // "KItemRange"
QT_MOC_LITERAL(8, 91, 9), // "itemRange"
QT_MOC_LITERAL(9, 101, 10), // "QList<int>"
QT_MOC_LITERAL(10, 112, 14), // "movedToIndexes"
QT_MOC_LITERAL(11, 127, 12), // "itemsChanged"
QT_MOC_LITERAL(12, 140, 16), // "QSet<QByteArray>"
QT_MOC_LITERAL(13, 157, 5), // "roles"
QT_MOC_LITERAL(14, 163, 13), // "groupsChanged"
QT_MOC_LITERAL(15, 177, 21), // "groupedSortingChanged"
QT_MOC_LITERAL(16, 199, 7), // "current"
QT_MOC_LITERAL(17, 207, 15), // "sortRoleChanged"
QT_MOC_LITERAL(18, 223, 8), // "previous"
QT_MOC_LITERAL(19, 232, 16), // "sortOrderChanged"
QT_MOC_LITERAL(20, 249, 13) // "Qt::SortOrder"

    },
    "KItemModelBase\0itemsInserted\0\0"
    "KItemRangeList\0itemRanges\0itemsRemoved\0"
    "itemsMoved\0KItemRange\0itemRange\0"
    "QList<int>\0movedToIndexes\0itemsChanged\0"
    "QSet<QByteArray>\0roles\0groupsChanged\0"
    "groupedSortingChanged\0current\0"
    "sortRoleChanged\0previous\0sortOrderChanged\0"
    "Qt::SortOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemModelBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    2,   60,    2, 0x06 /* Public */,
      11,    2,   65,    2, 0x06 /* Public */,
      14,    0,   70,    2, 0x06 /* Public */,
      15,    1,   71,    2, 0x06 /* Public */,
      17,    2,   74,    2, 0x06 /* Public */,
      19,    2,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,    4,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   16,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   16,   18,

       0        // eod
};

void KItemModelBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemModelBase *_t = static_cast<KItemModelBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemsInserted((*reinterpret_cast< const KItemRangeList(*)>(_a[1]))); break;
        case 1: _t->itemsRemoved((*reinterpret_cast< const KItemRangeList(*)>(_a[1]))); break;
        case 2: _t->itemsMoved((*reinterpret_cast< const KItemRange(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 3: _t->itemsChanged((*reinterpret_cast< const KItemRangeList(*)>(_a[1])),(*reinterpret_cast< const QSet<QByteArray>(*)>(_a[2]))); break;
        case 4: _t->groupsChanged(); break;
        case 5: _t->groupedSortingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sortRoleChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->sortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QByteArray> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemModelBase::*_t)(const KItemRangeList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::itemsInserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(const KItemRangeList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::itemsRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(const KItemRange & , const QList<int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::itemsMoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(const KItemRangeList & , const QSet<QByteArray> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::itemsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::groupsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::groupedSortingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::sortRoleChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (KItemModelBase::*_t)(Qt::SortOrder , Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemModelBase::sortOrderChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject KItemModelBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KItemModelBase.data,
      qt_meta_data_KItemModelBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemModelBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemModelBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemModelBase.stringdata0))
        return static_cast<void*>(const_cast< KItemModelBase*>(this));
    return QObject::qt_metacast(_clname);
}

int KItemModelBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KItemModelBase::itemsInserted(const KItemRangeList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemModelBase::itemsRemoved(const KItemRangeList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KItemModelBase::itemsMoved(const KItemRange & _t1, const QList<int> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KItemModelBase::itemsChanged(const KItemRangeList & _t1, const QSet<QByteArray> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KItemModelBase::groupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void KItemModelBase::groupedSortingChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KItemModelBase::sortRoleChanged(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KItemModelBase::sortOrderChanged(Qt::SortOrder _t1, Qt::SortOrder _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
