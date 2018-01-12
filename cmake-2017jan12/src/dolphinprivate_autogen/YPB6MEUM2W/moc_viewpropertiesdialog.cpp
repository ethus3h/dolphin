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
    QByteArrayData data[16];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewPropertiesDialog_t qt_meta_stringdata_ViewPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ViewPropertiesDialog"
QT_MOC_LITERAL(1, 21, 14), // "isDirtyChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "isDirty"
QT_MOC_LITERAL(4, 45, 6), // "accept"
QT_MOC_LITERAL(5, 52, 9), // "slotApply"
QT_MOC_LITERAL(6, 62, 19), // "slotViewModeChanged"
QT_MOC_LITERAL(7, 82, 5), // "index"
QT_MOC_LITERAL(8, 88, 18), // "slotSortingChanged"
QT_MOC_LITERAL(9, 107, 20), // "slotSortOrderChanged"
QT_MOC_LITERAL(10, 128, 25), // "slotGroupedSortingChanged"
QT_MOC_LITERAL(11, 154, 27), // "slotSortFoldersFirstChanged"
QT_MOC_LITERAL(12, 182, 22), // "slotShowPreviewChanged"
QT_MOC_LITERAL(13, 205, 26), // "slotShowHiddenFilesChanged"
QT_MOC_LITERAL(14, 232, 11), // "markAsDirty"
QT_MOC_LITERAL(15, 244, 23) // "configureAdditionalInfo"

    },
    "ViewPropertiesDialog\0isDirtyChanged\0"
    "\0isDirty\0accept\0slotApply\0slotViewModeChanged\0"
    "index\0slotSortingChanged\0slotSortOrderChanged\0"
    "slotGroupedSortingChanged\0"
    "slotSortFoldersFirstChanged\0"
    "slotShowPreviewChanged\0"
    "slotShowHiddenFilesChanged\0markAsDirty\0"
    "configureAdditionalInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewPropertiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void ViewPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewPropertiesDialog *_t = static_cast<ViewPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->slotApply(); break;
        case 3: _t->slotViewModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSortingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotSortOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotGroupedSortingChanged(); break;
        case 7: _t->slotSortFoldersFirstChanged(); break;
        case 8: _t->slotShowPreviewChanged(); break;
        case 9: _t->slotShowHiddenFilesChanged(); break;
        case 10: _t->markAsDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->configureAdditionalInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewPropertiesDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewPropertiesDialog::isDirtyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ViewPropertiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewPropertiesDialog.data,
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
    return QDialog::qt_metacast(_clname);
}

int ViewPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ViewPropertiesDialog::isDirtyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
