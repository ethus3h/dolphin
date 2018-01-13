/****************************************************************************
** Meta object code from reading C++ file 'viewextensionsfactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/viewextensionsfactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewextensionsfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewExtensionsFactory_t {
    QByteArrayData data[20];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewExtensionsFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewExtensionsFactory_t qt_meta_stringdata_ViewExtensionsFactory = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ViewExtensionsFactory"
QT_MOC_LITERAL(1, 22, 20), // "slotZoomLevelChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "cancelPreviews"
QT_MOC_LITERAL(4, 59, 22), // "slotShowPreviewChanged"
QT_MOC_LITERAL(5, 82, 26), // "slotShowHiddenFilesChanged"
QT_MOC_LITERAL(6, 109, 18), // "slotSortingChanged"
QT_MOC_LITERAL(7, 128, 20), // "DolphinView::Sorting"
QT_MOC_LITERAL(8, 149, 7), // "sorting"
QT_MOC_LITERAL(9, 157, 20), // "slotSortOrderChanged"
QT_MOC_LITERAL(10, 178, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(11, 192, 5), // "order"
QT_MOC_LITERAL(12, 198, 27), // "slotSortFoldersFirstChanged"
QT_MOC_LITERAL(13, 226, 12), // "foldersFirst"
QT_MOC_LITERAL(14, 239, 21), // "slotNameFilterChanged"
QT_MOC_LITERAL(15, 261, 10), // "nameFilter"
QT_MOC_LITERAL(16, 272, 32), // "slotRequestVersionControlActions"
QT_MOC_LITERAL(17, 305, 13), // "KFileItemList"
QT_MOC_LITERAL(18, 319, 5), // "items"
QT_MOC_LITERAL(19, 325, 17) // "requestActivation"

    },
    "ViewExtensionsFactory\0slotZoomLevelChanged\0"
    "\0cancelPreviews\0slotShowPreviewChanged\0"
    "slotShowHiddenFilesChanged\0"
    "slotSortingChanged\0DolphinView::Sorting\0"
    "sorting\0slotSortOrderChanged\0Qt::SortOrder\0"
    "order\0slotSortFoldersFirstChanged\0"
    "foldersFirst\0slotNameFilterChanged\0"
    "nameFilter\0slotRequestVersionControlActions\0"
    "KFileItemList\0items\0requestActivation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewExtensionsFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      12,    1,   74,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,
      16,    1,   80,    2, 0x08 /* Private */,
      19,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void ViewExtensionsFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewExtensionsFactory *_t = static_cast<ViewExtensionsFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotZoomLevelChanged(); break;
        case 1: _t->cancelPreviews(); break;
        case 2: _t->slotShowPreviewChanged(); break;
        case 3: _t->slotShowHiddenFilesChanged(); break;
        case 4: _t->slotSortingChanged((*reinterpret_cast< DolphinView::Sorting(*)>(_a[1]))); break;
        case 5: _t->slotSortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 6: _t->slotSortFoldersFirstChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotNameFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotRequestVersionControlActions((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 9: _t->requestActivation(); break;
        default: ;
        }
    }
}

const QMetaObject ViewExtensionsFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewExtensionsFactory.data,
      qt_meta_data_ViewExtensionsFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewExtensionsFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewExtensionsFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewExtensionsFactory.stringdata0))
        return static_cast<void*>(const_cast< ViewExtensionsFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewExtensionsFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
