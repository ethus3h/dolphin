/****************************************************************************
** Meta object code from reading C++ file 'dolphinsearchbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/search/dolphinsearchbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinsearchbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinSearchBox_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinSearchBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinSearchBox_t qt_meta_stringdata_DolphinSearchBox = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DolphinSearchBox"
QT_MOC_LITERAL(1, 17, 13), // "searchRequest"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "searchTextChanged"
QT_MOC_LITERAL(4, 50, 4), // "text"
QT_MOC_LITERAL(5, 55, 13), // "returnPressed"
QT_MOC_LITERAL(6, 69, 12), // "closeRequest"
QT_MOC_LITERAL(7, 82, 9), // "activated"
QT_MOC_LITERAL(8, 92, 17), // "emitSearchRequest"
QT_MOC_LITERAL(9, 110, 16), // "emitCloseRequest"
QT_MOC_LITERAL(10, 127, 24), // "slotConfigurationChanged"
QT_MOC_LITERAL(11, 152, 21), // "slotSearchTextChanged"
QT_MOC_LITERAL(12, 174, 17), // "slotReturnPressed"
QT_MOC_LITERAL(13, 192, 23), // "slotFacetsButtonToggled"
QT_MOC_LITERAL(14, 216, 16), // "slotFacetChanged"
QT_MOC_LITERAL(15, 233, 15) // "slotSearchSaved"

    },
    "DolphinSearchBox\0searchRequest\0\0"
    "searchTextChanged\0text\0returnPressed\0"
    "closeRequest\0activated\0emitSearchRequest\0"
    "emitCloseRequest\0slotConfigurationChanged\0"
    "slotSearchTextChanged\0slotReturnPressed\0"
    "slotFacetsButtonToggled\0slotFacetChanged\0"
    "slotSearchSaved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinSearchBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DolphinSearchBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinSearchBox *_t = static_cast<DolphinSearchBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchRequest(); break;
        case 1: _t->searchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->closeRequest(); break;
        case 4: _t->activated(); break;
        case 5: _t->emitSearchRequest(); break;
        case 6: _t->emitCloseRequest(); break;
        case 7: _t->slotConfigurationChanged(); break;
        case 8: _t->slotSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotReturnPressed(); break;
        case 10: _t->slotFacetsButtonToggled(); break;
        case 11: _t->slotFacetChanged(); break;
        case 12: _t->slotSearchSaved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinSearchBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinSearchBox::searchRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinSearchBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinSearchBox::searchTextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DolphinSearchBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinSearchBox::returnPressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DolphinSearchBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinSearchBox::closeRequest)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DolphinSearchBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinSearchBox::activated)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject DolphinSearchBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DolphinSearchBox.data,
      qt_meta_data_DolphinSearchBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinSearchBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinSearchBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinSearchBox.stringdata0))
        return static_cast<void*>(const_cast< DolphinSearchBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int DolphinSearchBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DolphinSearchBox::searchRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DolphinSearchBox::searchTextChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DolphinSearchBox::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DolphinSearchBox::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DolphinSearchBox::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
