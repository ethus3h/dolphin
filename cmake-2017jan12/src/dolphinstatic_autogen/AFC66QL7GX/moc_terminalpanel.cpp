/****************************************************************************
** Meta object code from reading C++ file 'terminalpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/terminal/terminalpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'terminalpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TerminalPanel_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerminalPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerminalPanel_t qt_meta_stringdata_TerminalPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TerminalPanel"
QT_MOC_LITERAL(1, 14, 17), // "hideTerminalPanel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "changeUrl"
QT_MOC_LITERAL(4, 43, 3), // "url"
QT_MOC_LITERAL(5, 47, 14), // "terminalExited"
QT_MOC_LITERAL(6, 62, 21), // "dockVisibilityChanged"
QT_MOC_LITERAL(7, 84, 22), // "slotMostLocalUrlResult"
QT_MOC_LITERAL(8, 107, 5), // "KJob*"
QT_MOC_LITERAL(9, 113, 3), // "job"
QT_MOC_LITERAL(10, 117, 38), // "slotKonsolePartCurrentDirecto..."
QT_MOC_LITERAL(11, 156, 3) // "dir"

    },
    "TerminalPanel\0hideTerminalPanel\0\0"
    "changeUrl\0url\0terminalExited\0"
    "dockVisibilityChanged\0slotMostLocalUrlResult\0"
    "KJob*\0job\0slotKonsolePartCurrentDirectoryChanged\0"
    "dir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerminalPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void TerminalPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TerminalPanel *_t = static_cast<TerminalPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideTerminalPanel(); break;
        case 1: _t->changeUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->terminalExited(); break;
        case 3: _t->dockVisibilityChanged(); break;
        case 4: _t->slotMostLocalUrlResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 5: _t->slotKonsolePartCurrentDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TerminalPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TerminalPanel::hideTerminalPanel)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TerminalPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TerminalPanel::changeUrl)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TerminalPanel::staticMetaObject = {
    { &Panel::staticMetaObject, qt_meta_stringdata_TerminalPanel.data,
      qt_meta_data_TerminalPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TerminalPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalPanel.stringdata0))
        return static_cast<void*>(const_cast< TerminalPanel*>(this));
    return Panel::qt_metacast(_clname);
}

int TerminalPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
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
void TerminalPanel::hideTerminalPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TerminalPanel::changeUrl(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
