/****************************************************************************
** Meta object code from reading C++ file 'dolphinpart_ext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/dolphinpart_ext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinpart_ext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinPartBrowserExtension_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinPartBrowserExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinPartBrowserExtension_t qt_meta_stringdata_DolphinPartBrowserExtension = {
    {
QT_MOC_LITERAL(0, 0, 27), // "DolphinPartBrowserExtension"
QT_MOC_LITERAL(1, 28, 3), // "cut"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "copy"
QT_MOC_LITERAL(4, 38, 5), // "paste"
QT_MOC_LITERAL(5, 44, 7), // "pasteTo"
QT_MOC_LITERAL(6, 52, 20) // "reparseConfiguration"

    },
    "DolphinPartBrowserExtension\0cut\0\0copy\0"
    "paste\0pasteTo\0reparseConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinPartBrowserExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,

       0        // eod
};

void DolphinPartBrowserExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinPartBrowserExtension *_t = static_cast<DolphinPartBrowserExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cut(); break;
        case 1: _t->copy(); break;
        case 2: _t->paste(); break;
        case 3: _t->pasteTo((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->reparseConfiguration(); break;
        default: ;
        }
    }
}

const QMetaObject DolphinPartBrowserExtension::staticMetaObject = {
    { &KParts::BrowserExtension::staticMetaObject, qt_meta_stringdata_DolphinPartBrowserExtension.data,
      qt_meta_data_DolphinPartBrowserExtension,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinPartBrowserExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinPartBrowserExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinPartBrowserExtension.stringdata0))
        return static_cast<void*>(const_cast< DolphinPartBrowserExtension*>(this));
    return KParts::BrowserExtension::qt_metacast(_clname);
}

int DolphinPartBrowserExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::BrowserExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_DolphinPartFileInfoExtension_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinPartFileInfoExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinPartFileInfoExtension_t qt_meta_stringdata_DolphinPartFileInfoExtension = {
    {
QT_MOC_LITERAL(0, 0, 28) // "DolphinPartFileInfoExtension"

    },
    "DolphinPartFileInfoExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinPartFileInfoExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DolphinPartFileInfoExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DolphinPartFileInfoExtension::staticMetaObject = {
    { &KParts::FileInfoExtension::staticMetaObject, qt_meta_stringdata_DolphinPartFileInfoExtension.data,
      qt_meta_data_DolphinPartFileInfoExtension,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinPartFileInfoExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinPartFileInfoExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinPartFileInfoExtension.stringdata0))
        return static_cast<void*>(const_cast< DolphinPartFileInfoExtension*>(this));
    return KParts::FileInfoExtension::qt_metacast(_clname);
}

int DolphinPartFileInfoExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::FileInfoExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DolphinPartListingFilterExtension_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinPartListingFilterExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinPartListingFilterExtension_t qt_meta_stringdata_DolphinPartListingFilterExtension = {
    {
QT_MOC_LITERAL(0, 0, 33) // "DolphinPartListingFilterExten..."

    },
    "DolphinPartListingFilterExtension"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinPartListingFilterExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DolphinPartListingFilterExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DolphinPartListingFilterExtension::staticMetaObject = {
    { &KParts::ListingFilterExtension::staticMetaObject, qt_meta_stringdata_DolphinPartListingFilterExtension.data,
      qt_meta_data_DolphinPartListingFilterExtension,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinPartListingFilterExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinPartListingFilterExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinPartListingFilterExtension.stringdata0))
        return static_cast<void*>(const_cast< DolphinPartListingFilterExtension*>(this));
    return KParts::ListingFilterExtension::qt_metacast(_clname);
}

int DolphinPartListingFilterExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::ListingFilterExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DolphinPartListingNotificationExtension_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinPartListingNotificationExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinPartListingNotificationExtension_t qt_meta_stringdata_DolphinPartListingNotificationExtension = {
    {
QT_MOC_LITERAL(0, 0, 39), // "DolphinPartListingNotificatio..."
QT_MOC_LITERAL(1, 40, 12), // "slotNewItems"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 13), // "KFileItemList"
QT_MOC_LITERAL(4, 68, 16) // "slotItemsDeleted"

    },
    "DolphinPartListingNotificationExtension\0"
    "slotNewItems\0\0KFileItemList\0"
    "slotItemsDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinPartListingNotificationExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DolphinPartListingNotificationExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinPartListingNotificationExtension *_t = static_cast<DolphinPartListingNotificationExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNewItems((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 1: _t->slotItemsDeleted((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DolphinPartListingNotificationExtension::staticMetaObject = {
    { &KParts::ListingNotificationExtension::staticMetaObject, qt_meta_stringdata_DolphinPartListingNotificationExtension.data,
      qt_meta_data_DolphinPartListingNotificationExtension,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinPartListingNotificationExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinPartListingNotificationExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinPartListingNotificationExtension.stringdata0))
        return static_cast<void*>(const_cast< DolphinPartListingNotificationExtension*>(this));
    return KParts::ListingNotificationExtension::qt_metacast(_clname);
}

int DolphinPartListingNotificationExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::ListingNotificationExtension::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
