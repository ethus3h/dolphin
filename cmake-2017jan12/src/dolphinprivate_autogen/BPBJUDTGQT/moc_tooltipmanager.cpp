/****************************************************************************
** Meta object code from reading C++ file 'tooltipmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/tooltips/tooltipmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tooltipmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToolTipManager_t {
    QByteArrayData data[13];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolTipManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolTipManager_t qt_meta_stringdata_ToolTipManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ToolTipManager"
QT_MOC_LITERAL(1, 15, 11), // "hideToolTip"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "requestToolTip"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 21), // "startContentRetrieval"
QT_MOC_LITERAL(6, 71, 13), // "setPreviewPix"
QT_MOC_LITERAL(7, 85, 9), // "KFileItem"
QT_MOC_LITERAL(8, 95, 4), // "item"
QT_MOC_LITERAL(9, 100, 3), // "pix"
QT_MOC_LITERAL(10, 104, 13), // "previewFailed"
QT_MOC_LITERAL(11, 118, 27), // "slotMetaDataRequestFinished"
QT_MOC_LITERAL(12, 146, 11) // "showToolTip"

    },
    "ToolTipManager\0hideToolTip\0\0requestToolTip\0"
    "index\0startContentRetrieval\0setPreviewPix\0"
    "KFileItem\0item\0pix\0previewFailed\0"
    "slotMetaDataRequestFinished\0showToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolTipManager[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    2,   54,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QPixmap,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolTipManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolTipManager *_t = static_cast<ToolTipManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideToolTip(); break;
        case 1: _t->requestToolTip((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->startContentRetrieval(); break;
        case 3: _t->setPreviewPix((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 4: _t->previewFailed(); break;
        case 5: _t->slotMetaDataRequestFinished(); break;
        case 6: _t->showToolTip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        }
    }
}

const QMetaObject ToolTipManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ToolTipManager.data,
      qt_meta_data_ToolTipManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToolTipManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolTipManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToolTipManager.stringdata0))
        return static_cast<void*>(const_cast< ToolTipManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ToolTipManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
