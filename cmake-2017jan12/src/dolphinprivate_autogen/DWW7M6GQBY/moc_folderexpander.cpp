/****************************************************************************
** Meta object code from reading C++ file 'folderexpander.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/folderexpander.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderexpander.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FolderExpander_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderExpander_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderExpander_t qt_meta_stringdata_FolderExpander = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FolderExpander"
QT_MOC_LITERAL(1, 15, 8), // "enterDir"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "dirModelIndex"
QT_MOC_LITERAL(4, 39, 12), // "viewScrolled"
QT_MOC_LITERAL(5, 52, 17) // "autoExpandTimeout"

    },
    "FolderExpander\0enterDir\0\0dirModelIndex\0"
    "viewScrolled\0autoExpandTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderExpander[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FolderExpander::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderExpander *_t = static_cast<FolderExpander *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enterDir((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->viewScrolled(); break;
        case 2: _t->autoExpandTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FolderExpander::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FolderExpander::enterDir)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FolderExpander::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FolderExpander.data,
      qt_meta_data_FolderExpander,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FolderExpander::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderExpander::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FolderExpander.stringdata0))
        return static_cast<void*>(const_cast< FolderExpander*>(this));
    return QObject::qt_metacast(_clname);
}

int FolderExpander::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void FolderExpander::enterDir(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
