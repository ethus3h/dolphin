/****************************************************************************
** Meta object code from reading C++ file 'dolphincolumnview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/dolphincolumnview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphincolumnview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinColumnView_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinColumnView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinColumnView_t qt_meta_stringdata_DolphinColumnView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DolphinColumnView"
QT_MOC_LITERAL(1, 18, 12), // "setZoomLevel"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "level"
QT_MOC_LITERAL(4, 38, 11), // "slotEntered"
QT_MOC_LITERAL(5, 50, 5), // "index"
QT_MOC_LITERAL(6, 56, 17), // "requestActivation"
QT_MOC_LITERAL(7, 74, 10), // "updateFont"
QT_MOC_LITERAL(8, 85, 22), // "slotShowPreviewChanged"
QT_MOC_LITERAL(9, 108, 22) // "slotDirListerCompleted"

    },
    "DolphinColumnView\0setZoomLevel\0\0level\0"
    "slotEntered\0index\0requestActivation\0"
    "updateFont\0slotShowPreviewChanged\0"
    "slotDirListerCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinColumnView[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DolphinColumnView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinColumnView *_t = static_cast<DolphinColumnView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setZoomLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->requestActivation(); break;
        case 3: _t->updateFont(); break;
        case 4: _t->slotShowPreviewChanged(); break;
        case 5: _t->slotDirListerCompleted(); break;
        default: ;
        }
    }
}

const QMetaObject DolphinColumnView::staticMetaObject = {
    { &DolphinTreeView::staticMetaObject, qt_meta_stringdata_DolphinColumnView.data,
      qt_meta_data_DolphinColumnView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinColumnView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinColumnView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinColumnView.stringdata0))
        return static_cast<void*>(const_cast< DolphinColumnView*>(this));
    return DolphinTreeView::qt_metacast(_clname);
}

int DolphinColumnView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DolphinTreeView::qt_metacall(_c, _id, _a);
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
