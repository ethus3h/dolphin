/****************************************************************************
** Meta object code from reading C++ file 'kitemlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kitemlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitemlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KItemListWidget_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KItemListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KItemListWidget_t qt_meta_stringdata_KItemListWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KItemListWidget"
QT_MOC_LITERAL(1, 16, 19), // "roleEditingCanceled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 4), // "role"
QT_MOC_LITERAL(5, 48, 5), // "value"
QT_MOC_LITERAL(6, 54, 19), // "roleEditingFinished"
QT_MOC_LITERAL(7, 74, 26), // "slotHoverAnimationFinished"
QT_MOC_LITERAL(8, 101, 12) // "hoverOpacity"

    },
    "KItemListWidget\0roleEditingCanceled\0"
    "\0index\0role\0value\0roleEditingFinished\0"
    "slotHoverAnimationFinished\0hoverOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KItemListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    3,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, QMetaType::QVariant,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00095103,

       0        // eod
};

void KItemListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KItemListWidget *_t = static_cast<KItemListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roleEditingCanceled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 1: _t->roleEditingFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 2: _t->slotHoverAnimationFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KItemListWidget::*_t)(int , const QByteArray & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListWidget::roleEditingCanceled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KItemListWidget::*_t)(int , const QByteArray & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KItemListWidget::roleEditingFinished)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KItemListWidget *_t = static_cast<KItemListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->hoverOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KItemListWidget *_t = static_cast<KItemListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHoverOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject KItemListWidget::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_KItemListWidget.data,
      qt_meta_data_KItemListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KItemListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KItemListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KItemListWidget.stringdata0))
        return static_cast<void*>(const_cast< KItemListWidget*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int KItemListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KItemListWidget::roleEditingCanceled(int _t1, const QByteArray & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KItemListWidget::roleEditingFinished(int _t1, const QByteArray & _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
