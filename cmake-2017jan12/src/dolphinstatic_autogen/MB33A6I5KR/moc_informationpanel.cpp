/****************************************************************************
** Meta object code from reading C++ file 'informationpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/panels/information/informationpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'informationpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InformationPanel_t {
    QByteArrayData data[26];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InformationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InformationPanel_t qt_meta_stringdata_InformationPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InformationPanel"
QT_MOC_LITERAL(1, 17, 12), // "urlActivated"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "url"
QT_MOC_LITERAL(4, 35, 12), // "setSelection"
QT_MOC_LITERAL(5, 48, 13), // "KFileItemList"
QT_MOC_LITERAL(6, 62, 9), // "selection"
QT_MOC_LITERAL(7, 72, 22), // "requestDelayedItemInfo"
QT_MOC_LITERAL(8, 95, 9), // "KFileItem"
QT_MOC_LITERAL(9, 105, 4), // "item"
QT_MOC_LITERAL(10, 110, 12), // "showItemInfo"
QT_MOC_LITERAL(11, 123, 22), // "slotFolderStatFinished"
QT_MOC_LITERAL(12, 146, 5), // "KJob*"
QT_MOC_LITERAL(13, 152, 3), // "job"
QT_MOC_LITERAL(14, 156, 15), // "slotInfoTimeout"
QT_MOC_LITERAL(15, 172, 5), // "reset"
QT_MOC_LITERAL(16, 178, 15), // "slotFileRenamed"
QT_MOC_LITERAL(17, 194, 6), // "source"
QT_MOC_LITERAL(18, 201, 4), // "dest"
QT_MOC_LITERAL(19, 206, 14), // "slotFilesAdded"
QT_MOC_LITERAL(20, 221, 9), // "directory"
QT_MOC_LITERAL(21, 231, 16), // "slotFilesChanged"
QT_MOC_LITERAL(22, 248, 5), // "files"
QT_MOC_LITERAL(23, 254, 16), // "slotFilesRemoved"
QT_MOC_LITERAL(24, 271, 20), // "slotEnteredDirectory"
QT_MOC_LITERAL(25, 292, 17) // "slotLeftDirectory"

    },
    "InformationPanel\0urlActivated\0\0url\0"
    "setSelection\0KFileItemList\0selection\0"
    "requestDelayedItemInfo\0KFileItem\0item\0"
    "showItemInfo\0slotFolderStatFinished\0"
    "KJob*\0job\0slotInfoTimeout\0reset\0"
    "slotFileRenamed\0source\0dest\0slotFilesAdded\0"
    "directory\0slotFilesChanged\0files\0"
    "slotFilesRemoved\0slotEnteredDirectory\0"
    "slotLeftDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InformationPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    2,   94,    2, 0x08 /* Private */,
      19,    1,   99,    2, 0x08 /* Private */,
      21,    1,  102,    2, 0x08 /* Private */,
      23,    1,  105,    2, 0x08 /* Private */,
      24,    1,  108,    2, 0x08 /* Private */,
      25,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void InformationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InformationPanel *_t = static_cast<InformationPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->setSelection((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 2: _t->requestDelayedItemInfo((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 3: _t->showItemInfo(); break;
        case 4: _t->slotFolderStatFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 5: _t->slotInfoTimeout(); break;
        case 6: _t->reset(); break;
        case 7: _t->slotFileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->slotFilesAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotFilesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->slotFilesRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 11: _t->slotEnteredDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotLeftDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InformationPanel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationPanel::urlActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InformationPanel::staticMetaObject = {
    { &Panel::staticMetaObject, qt_meta_stringdata_InformationPanel.data,
      qt_meta_data_InformationPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InformationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InformationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InformationPanel.stringdata0))
        return static_cast<void*>(const_cast< InformationPanel*>(this));
    return Panel::qt_metacast(_clname);
}

int InformationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void InformationPanel::urlActivated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
