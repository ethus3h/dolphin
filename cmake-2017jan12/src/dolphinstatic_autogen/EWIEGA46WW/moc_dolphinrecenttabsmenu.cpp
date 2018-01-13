/****************************************************************************
** Meta object code from reading C++ file 'dolphinrecenttabsmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/dolphinrecenttabsmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinrecenttabsmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinRecentTabsMenu_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinRecentTabsMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinRecentTabsMenu_t qt_meta_stringdata_DolphinRecentTabsMenu = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DolphinRecentTabsMenu"
QT_MOC_LITERAL(1, 22, 16), // "restoreClosedTab"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "state"
QT_MOC_LITERAL(4, 46, 22), // "closedTabsCountChanged"
QT_MOC_LITERAL(5, 69, 5), // "count"
QT_MOC_LITERAL(6, 75, 17), // "rememberClosedTab"
QT_MOC_LITERAL(7, 93, 3), // "url"
QT_MOC_LITERAL(8, 97, 12), // "undoCloseTab"
QT_MOC_LITERAL(9, 110, 12), // "handleAction"
QT_MOC_LITERAL(10, 123, 8), // "QAction*"
QT_MOC_LITERAL(11, 132, 6) // "action"

    },
    "DolphinRecentTabsMenu\0restoreClosedTab\0"
    "\0state\0closedTabsCountChanged\0count\0"
    "rememberClosedTab\0url\0undoCloseTab\0"
    "handleAction\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinRecentTabsMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   45,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::UInt,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QByteArray,    7,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void DolphinRecentTabsMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinRecentTabsMenu *_t = static_cast<DolphinRecentTabsMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restoreClosedTab((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->closedTabsCountChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->rememberClosedTab((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->undoCloseTab(); break;
        case 4: _t->handleAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinRecentTabsMenu::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinRecentTabsMenu::restoreClosedTab)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinRecentTabsMenu::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinRecentTabsMenu::closedTabsCountChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DolphinRecentTabsMenu::staticMetaObject = {
    { &KActionMenu::staticMetaObject, qt_meta_stringdata_DolphinRecentTabsMenu.data,
      qt_meta_data_DolphinRecentTabsMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinRecentTabsMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinRecentTabsMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinRecentTabsMenu.stringdata0))
        return static_cast<void*>(const_cast< DolphinRecentTabsMenu*>(this));
    return KActionMenu::qt_metacast(_clname);
}

int DolphinRecentTabsMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KActionMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DolphinRecentTabsMenu::restoreClosedTab(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DolphinRecentTabsMenu::closedTabsCountChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
