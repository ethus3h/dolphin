/****************************************************************************
** Meta object code from reading C++ file 'dolphiniconsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/dolphiniconsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphiniconsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinIconsView_t {
    QByteArrayData data[15];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinIconsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinIconsView_t qt_meta_stringdata_DolphinIconsView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DolphinIconsView"
QT_MOC_LITERAL(1, 17, 11), // "dataChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "topLeft"
QT_MOC_LITERAL(4, 38, 11), // "bottomRight"
QT_MOC_LITERAL(5, 50, 22), // "slotShowPreviewChanged"
QT_MOC_LITERAL(6, 73, 25), // "slotAdditionalInfoChanged"
QT_MOC_LITERAL(7, 99, 12), // "setZoomLevel"
QT_MOC_LITERAL(8, 112, 5), // "level"
QT_MOC_LITERAL(9, 118, 17), // "requestActivation"
QT_MOC_LITERAL(10, 136, 25), // "slotGlobalSettingsChanged"
QT_MOC_LITERAL(11, 162, 8), // "category"
QT_MOC_LITERAL(12, 171, 29), // "categoryDrawerActionRequested"
QT_MOC_LITERAL(13, 201, 6), // "action"
QT_MOC_LITERAL(14, 208, 5) // "index"

    },
    "DolphinIconsView\0dataChanged\0\0topLeft\0"
    "bottomRight\0slotShowPreviewChanged\0"
    "slotAdditionalInfoChanged\0setZoomLevel\0"
    "level\0requestActivation\0"
    "slotGlobalSettingsChanged\0category\0"
    "categoryDrawerActionRequested\0action\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinIconsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x09 /* Protected */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      12,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QModelIndex,   13,   14,

       0        // eod
};

void DolphinIconsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinIconsView *_t = static_cast<DolphinIconsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->slotShowPreviewChanged(); break;
        case 2: _t->slotAdditionalInfoChanged(); break;
        case 3: _t->setZoomLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->requestActivation(); break;
        case 5: _t->slotGlobalSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->categoryDrawerActionRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DolphinIconsView::staticMetaObject = {
    { &KCategorizedView::staticMetaObject, qt_meta_stringdata_DolphinIconsView.data,
      qt_meta_data_DolphinIconsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinIconsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinIconsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinIconsView.stringdata0))
        return static_cast<void*>(const_cast< DolphinIconsView*>(this));
    return KCategorizedView::qt_metacast(_clname);
}

int DolphinIconsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCategorizedView::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
