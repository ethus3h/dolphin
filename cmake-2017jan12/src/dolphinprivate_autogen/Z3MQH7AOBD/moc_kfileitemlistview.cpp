/****************************************************************************
** Meta object code from reading C++ file 'kfileitemlistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kfileitemlistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileitemlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KFileItemListView_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileItemListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileItemListView_t qt_meta_stringdata_KFileItemListView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KFileItemListView"
QT_MOC_LITERAL(1, 18, 16), // "slotItemsRemoved"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "KItemRangeList"
QT_MOC_LITERAL(4, 51, 10), // "itemRanges"
QT_MOC_LITERAL(5, 62, 19), // "slotSortRoleChanged"
QT_MOC_LITERAL(6, 82, 7), // "current"
QT_MOC_LITERAL(7, 90, 8), // "previous"
QT_MOC_LITERAL(8, 99, 30), // "triggerVisibleIndexRangeUpdate"
QT_MOC_LITERAL(9, 130, 23), // "updateVisibleIndexRange"
QT_MOC_LITERAL(10, 154, 21), // "triggerIconSizeUpdate"
QT_MOC_LITERAL(11, 176, 14) // "updateIconSize"

    },
    "KFileItemListView\0slotItemsRemoved\0\0"
    "KItemRangeList\0itemRanges\0slotSortRoleChanged\0"
    "current\0previous\0triggerVisibleIndexRangeUpdate\0"
    "updateVisibleIndexRange\0triggerIconSizeUpdate\0"
    "updateIconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileItemListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       5,    2,   47,    2, 0x09 /* Protected */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,
      10,    0,   54,    2, 0x08 /* Private */,
      11,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KFileItemListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KFileItemListView *_t = static_cast<KFileItemListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotItemsRemoved((*reinterpret_cast< const KItemRangeList(*)>(_a[1]))); break;
        case 1: _t->slotSortRoleChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->triggerVisibleIndexRangeUpdate(); break;
        case 3: _t->updateVisibleIndexRange(); break;
        case 4: _t->triggerIconSizeUpdate(); break;
        case 5: _t->updateIconSize(); break;
        default: ;
        }
    }
}

const QMetaObject KFileItemListView::staticMetaObject = {
    { &KStandardItemListView::staticMetaObject, qt_meta_stringdata_KFileItemListView.data,
      qt_meta_data_KFileItemListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KFileItemListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileItemListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KFileItemListView.stringdata0))
        return static_cast<void*>(const_cast< KFileItemListView*>(this));
    return KStandardItemListView::qt_metacast(_clname);
}

int KFileItemListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KStandardItemListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
