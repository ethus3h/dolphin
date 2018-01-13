/****************************************************************************
** Meta object code from reading C++ file 'filterbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/filterbar/filterbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FilterBar_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterBar_t qt_meta_stringdata_FilterBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FilterBar"
QT_MOC_LITERAL(1, 10, 13), // "filterChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "nameFilter"
QT_MOC_LITERAL(4, 36, 12), // "closeRequest"
QT_MOC_LITERAL(5, 49, 16), // "focusViewRequest"
QT_MOC_LITERAL(6, 66, 5), // "clear"
QT_MOC_LITERAL(7, 72, 14), // "slotUrlChanged"
QT_MOC_LITERAL(8, 87, 20), // "slotToggleLockButton"
QT_MOC_LITERAL(9, 108, 7) // "checked"

    },
    "FilterBar\0filterChanged\0\0nameFilter\0"
    "closeRequest\0focusViewRequest\0clear\0"
    "slotUrlChanged\0slotToggleLockButton\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void FilterBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterBar *_t = static_cast<FilterBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->closeRequest(); break;
        case 2: _t->focusViewRequest(); break;
        case 3: _t->clear(); break;
        case 4: _t->slotUrlChanged(); break;
        case 5: _t->slotToggleLockButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FilterBar::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterBar::filterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FilterBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterBar::closeRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FilterBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterBar::focusViewRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FilterBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FilterBar.data,
      qt_meta_data_FilterBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FilterBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FilterBar.stringdata0))
        return static_cast<void*>(const_cast< FilterBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int FilterBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FilterBar::filterChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterBar::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FilterBar::focusViewRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
