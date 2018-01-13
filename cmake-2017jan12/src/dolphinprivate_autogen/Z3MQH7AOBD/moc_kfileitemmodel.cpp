/****************************************************************************
** Meta object code from reading C++ file 'kfileitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/kitemviews/kfileitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfileitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KFileItemModel_t {
    QByteArrayData data[29];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileItemModel_t qt_meta_stringdata_KFileItemModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "KFileItemModel"
QT_MOC_LITERAL(1, 15, 23), // "directoryLoadingStarted"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "directoryLoadingCompleted"
QT_MOC_LITERAL(4, 66, 24), // "directoryLoadingCanceled"
QT_MOC_LITERAL(5, 91, 24), // "directoryLoadingProgress"
QT_MOC_LITERAL(6, 116, 7), // "percent"
QT_MOC_LITERAL(7, 124, 24), // "directorySortingProgress"
QT_MOC_LITERAL(8, 149, 11), // "infoMessage"
QT_MOC_LITERAL(9, 161, 7), // "message"
QT_MOC_LITERAL(10, 169, 12), // "errorMessage"
QT_MOC_LITERAL(11, 182, 20), // "directoryRedirection"
QT_MOC_LITERAL(12, 203, 6), // "oldUrl"
QT_MOC_LITERAL(13, 210, 6), // "newUrl"
QT_MOC_LITERAL(14, 217, 14), // "urlIsFileError"
QT_MOC_LITERAL(15, 232, 3), // "url"
QT_MOC_LITERAL(16, 236, 14), // "resortAllItems"
QT_MOC_LITERAL(17, 251, 13), // "slotCompleted"
QT_MOC_LITERAL(18, 265, 12), // "slotCanceled"
QT_MOC_LITERAL(19, 278, 14), // "slotItemsAdded"
QT_MOC_LITERAL(20, 293, 12), // "directoryUrl"
QT_MOC_LITERAL(21, 306, 13), // "KFileItemList"
QT_MOC_LITERAL(22, 320, 5), // "items"
QT_MOC_LITERAL(23, 326, 16), // "slotItemsDeleted"
QT_MOC_LITERAL(24, 343, 16), // "slotRefreshItems"
QT_MOC_LITERAL(25, 360, 34), // "QList<QPair<KFileItem,KFileIt..."
QT_MOC_LITERAL(26, 395, 9), // "slotClear"
QT_MOC_LITERAL(27, 405, 24), // "slotSortingChoiceChanged"
QT_MOC_LITERAL(28, 430, 28) // "dispatchPendingItemsToInsert"

    },
    "KFileItemModel\0directoryLoadingStarted\0"
    "\0directoryLoadingCompleted\0"
    "directoryLoadingCanceled\0"
    "directoryLoadingProgress\0percent\0"
    "directorySortingProgress\0infoMessage\0"
    "message\0errorMessage\0directoryRedirection\0"
    "oldUrl\0newUrl\0urlIsFileError\0url\0"
    "resortAllItems\0slotCompleted\0slotCanceled\0"
    "slotItemsAdded\0directoryUrl\0KFileItemList\0"
    "items\0slotItemsDeleted\0slotRefreshItems\0"
    "QList<QPair<KFileItem,KFileItem> >\0"
    "slotClear\0slotSortingChoiceChanged\0"
    "dispatchPendingItemsToInsert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       7,    1,  110,    2, 0x06 /* Public */,
       8,    1,  113,    2, 0x06 /* Public */,
      10,    1,  116,    2, 0x06 /* Public */,
      11,    2,  119,    2, 0x06 /* Public */,
      14,    1,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  127,    2, 0x08 /* Private */,
      17,    0,  128,    2, 0x08 /* Private */,
      18,    0,  129,    2, 0x08 /* Private */,
      19,    2,  130,    2, 0x08 /* Private */,
      23,    1,  135,    2, 0x08 /* Private */,
      24,    1,  138,    2, 0x08 /* Private */,
      26,    0,  141,    2, 0x08 /* Private */,
      27,    0,  142,    2, 0x08 /* Private */,
      28,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,   12,   13,
    QMetaType::Void, QMetaType::QUrl,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 21,   20,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 25,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KFileItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KFileItemModel *_t = static_cast<KFileItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directoryLoadingStarted(); break;
        case 1: _t->directoryLoadingCompleted(); break;
        case 2: _t->directoryLoadingCanceled(); break;
        case 3: _t->directoryLoadingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->directorySortingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->directoryRedirection((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 8: _t->urlIsFileError((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->resortAllItems(); break;
        case 10: _t->slotCompleted(); break;
        case 11: _t->slotCanceled(); break;
        case 12: _t->slotItemsAdded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KFileItemList(*)>(_a[2]))); break;
        case 13: _t->slotItemsDeleted((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 14: _t->slotRefreshItems((*reinterpret_cast< const QList<QPair<KFileItem,KFileItem> >(*)>(_a[1]))); break;
        case 15: _t->slotClear(); break;
        case 16: _t->slotSortingChoiceChanged(); break;
        case 17: _t->dispatchPendingItemsToInsert(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KFileItemModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directoryLoadingStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directoryLoadingCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directoryLoadingCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directoryLoadingProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directorySortingProgress)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::infoMessage)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::errorMessage)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::directoryRedirection)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (KFileItemModel::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KFileItemModel::urlIsFileError)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject KFileItemModel::staticMetaObject = {
    { &KItemModelBase::staticMetaObject, qt_meta_stringdata_KFileItemModel.data,
      qt_meta_data_KFileItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KFileItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KFileItemModel.stringdata0))
        return static_cast<void*>(const_cast< KFileItemModel*>(this));
    return KItemModelBase::qt_metacast(_clname);
}

int KFileItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KItemModelBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void KFileItemModel::directoryLoadingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KFileItemModel::directoryLoadingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void KFileItemModel::directoryLoadingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void KFileItemModel::directoryLoadingProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KFileItemModel::directorySortingProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KFileItemModel::infoMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KFileItemModel::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KFileItemModel::directoryRedirection(const QUrl & _t1, const QUrl & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KFileItemModel::urlIsFileError(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
