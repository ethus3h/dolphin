/****************************************************************************
** Meta object code from reading C++ file 'selectionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/selectionmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectionManager_t {
    QByteArrayData data[16];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionManager_t qt_meta_stringdata_SelectionManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SelectionManager"
QT_MOC_LITERAL(1, 17, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "reset"
QT_MOC_LITERAL(4, 41, 11), // "slotEntered"
QT_MOC_LITERAL(5, 53, 5), // "index"
QT_MOC_LITERAL(6, 59, 19), // "slotViewportEntered"
QT_MOC_LITERAL(7, 79, 15), // "setItemSelected"
QT_MOC_LITERAL(8, 95, 8), // "selected"
QT_MOC_LITERAL(9, 104, 15), // "slotRowsRemoved"
QT_MOC_LITERAL(10, 120, 6), // "parent"
QT_MOC_LITERAL(11, 127, 5), // "start"
QT_MOC_LITERAL(12, 133, 3), // "end"
QT_MOC_LITERAL(13, 137, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(14, 158, 14), // "QItemSelection"
QT_MOC_LITERAL(15, 173, 10) // "deselected"

    },
    "SelectionManager\0selectionChanged\0\0"
    "reset\0slotEntered\0index\0slotViewportEntered\0"
    "setItemSelected\0selected\0slotRowsRemoved\0"
    "parent\0start\0end\0slotSelectionChanged\0"
    "QItemSelection\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    3,   58,    2, 0x08 /* Private */,
      13,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,    8,   15,

       0        // eod
};

void SelectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectionManager *_t = static_cast<SelectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->reset(); break;
        case 2: _t->slotEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->slotViewportEntered(); break;
        case 4: _t->setItemSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SelectionManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectionManager::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SelectionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SelectionManager.data,
      qt_meta_data_SelectionManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionManager.stringdata0))
        return static_cast<void*>(const_cast< SelectionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SelectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SelectionManager::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
