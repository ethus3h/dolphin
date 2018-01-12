/****************************************************************************
** Meta object code from reading C++ file 'treeviewcontextmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/folders/treeviewcontextmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treeviewcontextmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TreeViewContextMenu_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeViewContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeViewContextMenu_t qt_meta_stringdata_TreeViewContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TreeViewContextMenu"
QT_MOC_LITERAL(1, 20, 3), // "cut"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "copy"
QT_MOC_LITERAL(4, 30, 5), // "paste"
QT_MOC_LITERAL(5, 36, 6), // "rename"
QT_MOC_LITERAL(6, 43, 11), // "moveToTrash"
QT_MOC_LITERAL(7, 55, 10), // "deleteItem"
QT_MOC_LITERAL(8, 66, 14), // "showProperties"
QT_MOC_LITERAL(9, 81, 18), // "setShowHiddenFiles"
QT_MOC_LITERAL(10, 100, 4), // "show"
QT_MOC_LITERAL(11, 105, 26), // "setLimitFoldersPanelToHome"
QT_MOC_LITERAL(12, 132, 6), // "enable"
QT_MOC_LITERAL(13, 139, 16) // "setAutoScrolling"

    },
    "TreeViewContextMenu\0cut\0\0copy\0paste\0"
    "rename\0moveToTrash\0deleteItem\0"
    "showProperties\0setShowHiddenFiles\0"
    "show\0setLimitFoldersPanelToHome\0enable\0"
    "setAutoScrolling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeViewContextMenu[] = {

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
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void TreeViewContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TreeViewContextMenu *_t = static_cast<TreeViewContextMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cut(); break;
        case 1: _t->copy(); break;
        case 2: _t->paste(); break;
        case 3: _t->rename(); break;
        case 4: _t->moveToTrash(); break;
        case 5: _t->deleteItem(); break;
        case 6: _t->showProperties(); break;
        case 7: _t->setShowHiddenFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setLimitFoldersPanelToHome((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setAutoScrolling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TreeViewContextMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TreeViewContextMenu.data,
      qt_meta_data_TreeViewContextMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TreeViewContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeViewContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TreeViewContextMenu.stringdata0))
        return static_cast<void*>(const_cast< TreeViewContextMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int TreeViewContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
