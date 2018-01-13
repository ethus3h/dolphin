/****************************************************************************
** Meta object code from reading C++ file 'selectiontoggle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/selectiontoggle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectiontoggle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectionToggle_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionToggle_t qt_meta_stringdata_SelectionToggle = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SelectionToggle"
QT_MOC_LITERAL(1, 16, 10), // "setVisible"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "visible"
QT_MOC_LITERAL(4, 36, 14), // "setFadingValue"
QT_MOC_LITERAL(5, 51, 5), // "value"
QT_MOC_LITERAL(6, 57, 14), // "setIconOverlay"
QT_MOC_LITERAL(7, 72, 7), // "checked"
QT_MOC_LITERAL(8, 80, 11) // "refreshIcon"

    },
    "SelectionToggle\0setVisible\0\0visible\0"
    "setFadingValue\0value\0setIconOverlay\0"
    "checked\0refreshIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionToggle[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void SelectionToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectionToggle *_t = static_cast<SelectionToggle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFadingValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setIconOverlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->refreshIcon(); break;
        default: ;
        }
    }
}

const QMetaObject SelectionToggle::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_SelectionToggle.data,
      qt_meta_data_SelectionToggle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectionToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionToggle.stringdata0))
        return static_cast<void*>(const_cast< SelectionToggle*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int SelectionToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
