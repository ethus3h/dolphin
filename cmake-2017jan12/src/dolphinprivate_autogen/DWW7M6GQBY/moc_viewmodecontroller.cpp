/****************************************************************************
** Meta object code from reading C++ file 'viewmodecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/viewmodecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewmodecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewModeController_t {
    QByteArrayData data[13];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewModeController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewModeController_t qt_meta_stringdata_ViewModeController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ViewModeController"
QT_MOC_LITERAL(1, 19, 10), // "urlChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "KUrl"
QT_MOC_LITERAL(4, 36, 3), // "url"
QT_MOC_LITERAL(5, 40, 17), // "activationChanged"
QT_MOC_LITERAL(6, 58, 6), // "active"
QT_MOC_LITERAL(7, 65, 17), // "nameFilterChanged"
QT_MOC_LITERAL(8, 83, 10), // "nameFilter"
QT_MOC_LITERAL(9, 94, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(10, 111, 5), // "level"
QT_MOC_LITERAL(11, 117, 14), // "cancelPreviews"
QT_MOC_LITERAL(12, 132, 6) // "setUrl"

    },
    "ViewModeController\0urlChanged\0\0KUrl\0"
    "url\0activationChanged\0active\0"
    "nameFilterChanged\0nameFilter\0"
    "zoomLevelChanged\0level\0cancelPreviews\0"
    "setUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModeController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ViewModeController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewModeController *_t = static_cast<ViewModeController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlChanged((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 1: _t->activationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nameFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->zoomLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cancelPreviews(); break;
        case 5: _t->setUrl((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewModeController::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewModeController::urlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ViewModeController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewModeController::activationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ViewModeController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewModeController::nameFilterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ViewModeController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewModeController::zoomLevelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ViewModeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewModeController::cancelPreviews)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ViewModeController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewModeController.data,
      qt_meta_data_ViewModeController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewModeController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewModeController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewModeController.stringdata0))
        return static_cast<void*>(const_cast< ViewModeController*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewModeController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ViewModeController::urlChanged(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewModeController::activationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewModeController::nameFilterChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewModeController::zoomLevelChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ViewModeController::cancelPreviews()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
