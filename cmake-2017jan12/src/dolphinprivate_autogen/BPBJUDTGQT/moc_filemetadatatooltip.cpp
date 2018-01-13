/****************************************************************************
** Meta object code from reading C++ file 'filemetadatatooltip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/tooltips/filemetadatatooltip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemetadatatooltip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileMetaDataToolTip_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileMetaDataToolTip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileMetaDataToolTip_t qt_meta_stringdata_FileMetaDataToolTip = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FileMetaDataToolTip"
QT_MOC_LITERAL(1, 20, 23), // "metaDataRequestFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "KFileItemList"
QT_MOC_LITERAL(4, 59, 5) // "items"

    },
    "FileMetaDataToolTip\0metaDataRequestFinished\0"
    "\0KFileItemList\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileMetaDataToolTip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FileMetaDataToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileMetaDataToolTip *_t = static_cast<FileMetaDataToolTip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaDataRequestFinished((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileMetaDataToolTip::*_t)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileMetaDataToolTip::metaDataRequestFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FileMetaDataToolTip::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileMetaDataToolTip.data,
      qt_meta_data_FileMetaDataToolTip,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileMetaDataToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileMetaDataToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileMetaDataToolTip.stringdata0))
        return static_cast<void*>(const_cast< FileMetaDataToolTip*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileMetaDataToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FileMetaDataToolTip::metaDataRequestFinished(const KFileItemList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
