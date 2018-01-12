/****************************************************************************
** Meta object code from reading C++ file 'dolphintabpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/dolphintabpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphintabpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinTabPage_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinTabPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinTabPage_t qt_meta_stringdata_DolphinTabPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DolphinTabPage"
QT_MOC_LITERAL(1, 15, 17), // "activeViewChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "DolphinViewContainer*"
QT_MOC_LITERAL(4, 56, 13), // "viewContainer"
QT_MOC_LITERAL(5, 70, 20), // "activeViewUrlChanged"
QT_MOC_LITERAL(6, 91, 3), // "url"
QT_MOC_LITERAL(7, 95, 17), // "slotViewActivated"
QT_MOC_LITERAL(8, 113, 22), // "slotViewUrlRedirection"
QT_MOC_LITERAL(9, 136, 6), // "oldUrl"
QT_MOC_LITERAL(10, 143, 6), // "newUrl"
QT_MOC_LITERAL(11, 150, 16) // "switchActiveView"

    },
    "DolphinTabPage\0activeViewChanged\0\0"
    "DolphinViewContainer*\0viewContainer\0"
    "activeViewUrlChanged\0url\0slotViewActivated\0"
    "slotViewUrlRedirection\0oldUrl\0newUrl\0"
    "switchActiveView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinTabPage[] = {

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
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x08 /* Private */,
       8,    2,   46,    2, 0x08 /* Private */,
      11,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QUrl,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,    9,   10,
    QMetaType::Void,

       0        // eod
};

void DolphinTabPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinTabPage *_t = static_cast<DolphinTabPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeViewChanged((*reinterpret_cast< DolphinViewContainer*(*)>(_a[1]))); break;
        case 1: _t->activeViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->slotViewActivated(); break;
        case 3: _t->slotViewUrlRedirection((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 4: _t->switchActiveView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinTabPage::*_t)(DolphinViewContainer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinTabPage::activeViewChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinTabPage::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinTabPage::activeViewUrlChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DolphinTabPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DolphinTabPage.data,
      qt_meta_data_DolphinTabPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinTabPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinTabPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinTabPage.stringdata0))
        return static_cast<void*>(const_cast< DolphinTabPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int DolphinTabPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DolphinTabPage::activeViewChanged(DolphinViewContainer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DolphinTabPage::activeViewUrlChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
