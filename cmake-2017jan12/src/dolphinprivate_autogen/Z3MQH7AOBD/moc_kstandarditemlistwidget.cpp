/****************************************************************************
** Meta object code from reading C++ file 'kstandarditemlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kstandarditemlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kstandarditemlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KStandardItemListWidget_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KStandardItemListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KStandardItemListWidget_t qt_meta_stringdata_KStandardItemListWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KStandardItemListWidget"
QT_MOC_LITERAL(1, 24, 17), // "finishRoleEditing"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "slotCutItemsChanged"
QT_MOC_LITERAL(4, 63, 23), // "slotRoleEditingCanceled"
QT_MOC_LITERAL(5, 87, 4), // "role"
QT_MOC_LITERAL(6, 92, 5), // "value"
QT_MOC_LITERAL(7, 98, 23) // "slotRoleEditingFinished"

    },
    "KStandardItemListWidget\0finishRoleEditing\0"
    "\0slotCutItemsChanged\0slotRoleEditingCanceled\0"
    "role\0value\0slotRoleEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KStandardItemListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       7,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QVariant,    5,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QVariant,    5,    6,

       0        // eod
};

void KStandardItemListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KStandardItemListWidget *_t = static_cast<KStandardItemListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishRoleEditing(); break;
        case 1: _t->slotCutItemsChanged(); break;
        case 2: _t->slotRoleEditingCanceled((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->slotRoleEditingFinished((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject KStandardItemListWidget::staticMetaObject = {
    { &KItemListWidget::staticMetaObject, qt_meta_stringdata_KStandardItemListWidget.data,
      qt_meta_data_KStandardItemListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KStandardItemListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KStandardItemListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KStandardItemListWidget.stringdata0))
        return static_cast<void*>(const_cast< KStandardItemListWidget*>(this));
    return KItemListWidget::qt_metacast(_clname);
}

int KStandardItemListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KItemListWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
