/****************************************************************************
** Meta object code from reading C++ file 'dolphinstatusbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/statusbar/dolphinstatusbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinstatusbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinStatusBar_t {
    QByteArrayData data[15];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinStatusBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinStatusBar_t qt_meta_stringdata_DolphinStatusBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DolphinStatusBar"
QT_MOC_LITERAL(1, 17, 11), // "stopPressed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(4, 47, 9), // "zoomLevel"
QT_MOC_LITERAL(5, 57, 7), // "setText"
QT_MOC_LITERAL(6, 65, 4), // "text"
QT_MOC_LITERAL(7, 70, 6), // "setUrl"
QT_MOC_LITERAL(8, 77, 3), // "url"
QT_MOC_LITERAL(9, 81, 12), // "setZoomLevel"
QT_MOC_LITERAL(10, 94, 21), // "showZoomSliderToolTip"
QT_MOC_LITERAL(11, 116, 18), // "updateProgressInfo"
QT_MOC_LITERAL(12, 135, 15), // "updateLabelText"
QT_MOC_LITERAL(13, 151, 22), // "slotResetToDefaultText"
QT_MOC_LITERAL(14, 174, 23) // "updateZoomSliderToolTip"

    },
    "DolphinStatusBar\0stopPressed\0\0"
    "zoomLevelChanged\0zoomLevel\0setText\0"
    "text\0setUrl\0url\0setZoomLevel\0"
    "showZoomSliderToolTip\0updateProgressInfo\0"
    "updateLabelText\0slotResetToDefaultText\0"
    "updateZoomSliderToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinStatusBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   68,    2, 0x0a /* Public */,
       7,    1,   71,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void DolphinStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinStatusBar *_t = static_cast<DolphinStatusBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopPressed(); break;
        case 1: _t->zoomLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->setZoomLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showZoomSliderToolTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateProgressInfo(); break;
        case 7: _t->updateLabelText(); break;
        case 8: _t->slotResetToDefaultText(); break;
        case 9: _t->updateZoomSliderToolTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinStatusBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinStatusBar::stopPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinStatusBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinStatusBar::zoomLevelChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DolphinStatusBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DolphinStatusBar.data,
      qt_meta_data_DolphinStatusBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinStatusBar.stringdata0))
        return static_cast<void*>(const_cast< DolphinStatusBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int DolphinStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DolphinStatusBar::stopPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DolphinStatusBar::zoomLevelChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
