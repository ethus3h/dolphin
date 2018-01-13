/****************************************************************************
** Meta object code from reading C++ file 'kitemlistheaderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/private/kitemlistheaderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistheaderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListHeaderWidget_t {
    QByteArrayData data[17];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListHeaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListHeaderWidget_t qt_meta_stringdata_KItemListHeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KItemListHeaderWidget"
QT_MOC_LITERAL(1, 22, 18), // "columnWidthChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "role"
QT_MOC_LITERAL(4, 47, 12), // "currentWidth"
QT_MOC_LITERAL(5, 60, 13), // "previousWidth"
QT_MOC_LITERAL(6, 74, 25), // "columnWidthChangeFinished"
QT_MOC_LITERAL(7, 100, 11), // "columnMoved"
QT_MOC_LITERAL(8, 112, 12), // "currentIndex"
QT_MOC_LITERAL(9, 125, 13), // "previousIndex"
QT_MOC_LITERAL(10, 139, 16), // "sortOrderChanged"
QT_MOC_LITERAL(11, 156, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(12, 170, 7), // "current"
QT_MOC_LITERAL(13, 178, 8), // "previous"
QT_MOC_LITERAL(14, 187, 15), // "sortRoleChanged"
QT_MOC_LITERAL(15, 203, 19), // "slotSortRoleChanged"
QT_MOC_LITERAL(16, 223, 20) // "slotSortOrderChanged"

    },
    "KItemListHeaderWidget\0columnWidthChanged\0"
    "\0role\0currentWidth\0previousWidth\0"
    "columnWidthChangeFinished\0columnMoved\0"
    "currentIndex\0previousIndex\0sortOrderChanged\0"
    "Qt::SortOrder\0current\0previous\0"
    "sortRoleChanged\0slotSortRoleChanged\0"
    "slotSortOrderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListHeaderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    2,   56,    2, 0x06 /* Public */,
       7,    3,   61,    2, 0x06 /* Public */,
      10,    2,   68,    2, 0x06 /* Public */,
      14,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   78,    2, 0x08 /* Private */,
      16,    2,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QReal,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int,    3,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   12,   13,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void KItemListHeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListHeaderWidget *_t = static_cast<KItemListHeaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnWidthChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 1: _t->columnWidthChangeFinished((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 2: _t->columnMoved((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->sortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 4: _t->sortRoleChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->slotSortRoleChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->slotSortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListHeaderWidget::*_t)(const QByteArray & , qreal , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeaderWidget::columnWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemListHeaderWidget::*_t)(const QByteArray & , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeaderWidget::columnWidthChangeFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KItemListHeaderWidget::*_t)(const QByteArray & , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeaderWidget::columnMoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KItemListHeaderWidget::*_t)(Qt::SortOrder , Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeaderWidget::sortOrderChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (KItemListHeaderWidget::*_t)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListHeaderWidget::sortRoleChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject KItemListHeaderWidget::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_KItemListHeaderWidget.data,
      qt_meta_data_KItemListHeaderWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListHeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListHeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListHeaderWidget.stringdata0))
        return static_cast<void*>(const_cast< KItemListHeaderWidget*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int KItemListHeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KItemListHeaderWidget::columnWidthChanged(const QByteArray & _t1, qreal _t2, qreal _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemListHeaderWidget::columnWidthChangeFinished(const QByteArray & _t1, qreal _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KItemListHeaderWidget::columnMoved(const QByteArray & _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KItemListHeaderWidget::sortOrderChanged(Qt::SortOrder _t1, Qt::SortOrder _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KItemListHeaderWidget::sortRoleChanged(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
