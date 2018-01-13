/****************************************************************************
** Meta object code from reading C++ file 'viewpropertiesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/settings/viewpropertiesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewpropertiesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewPropertiesDialog_t {
    QByteArrayData data[15];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewPropertiesDialog_t qt_meta_stringdata_ViewPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ViewPropertiesDialog"
QT_MOC_LITERAL(1, 21, 6), // "slotOk"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "slotApply"
QT_MOC_LITERAL(4, 39, 19), // "slotViewModeChanged"
QT_MOC_LITERAL(5, 59, 5), // "index"
QT_MOC_LITERAL(6, 65, 18), // "slotSortingChanged"
QT_MOC_LITERAL(7, 84, 20), // "slotSortOrderChanged"
QT_MOC_LITERAL(8, 105, 29), // "slotCategorizedSortingChanged"
QT_MOC_LITERAL(9, 135, 27), // "slotSortFoldersFirstChanged"
QT_MOC_LITERAL(10, 163, 22), // "slotShowPreviewChanged"
QT_MOC_LITERAL(11, 186, 26), // "slotShowHiddenFilesChanged"
QT_MOC_LITERAL(12, 213, 11), // "markAsDirty"
QT_MOC_LITERAL(13, 225, 7), // "isDirty"
QT_MOC_LITERAL(14, 233, 23) // "configureAdditionalInfo"

    },
    "ViewPropertiesDialog\0slotOk\0\0slotApply\0"
    "slotViewModeChanged\0index\0slotSortingChanged\0"
    "slotSortOrderChanged\0slotCategorizedSortingChanged\0"
    "slotSortFoldersFirstChanged\0"
    "slotShowPreviewChanged\0"
    "slotShowHiddenFilesChanged\0markAsDirty\0"
    "isDirty\0configureAdditionalInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewPropertiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void ViewPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewPropertiesDialog *_t = static_cast<ViewPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOk(); break;
        case 1: _t->slotApply(); break;
        case 2: _t->slotViewModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotSortingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSortOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotCategorizedSortingChanged(); break;
        case 6: _t->slotSortFoldersFirstChanged(); break;
        case 7: _t->slotShowPreviewChanged(); break;
        case 8: _t->slotShowHiddenFilesChanged(); break;
        case 9: _t->markAsDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->configureAdditionalInfo(); break;
        default: ;
        }
    }
}

const QMetaObject ViewPropertiesDialog::staticMetaObject = {
    { &KDialog::staticMetaObject, qt_meta_stringdata_ViewPropertiesDialog.data,
      qt_meta_data_ViewPropertiesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewPropertiesDialog.stringdata0))
        return static_cast<void*>(const_cast< ViewPropertiesDialog*>(this));
    return KDialog::qt_metacast(_clname);
}

int ViewPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
