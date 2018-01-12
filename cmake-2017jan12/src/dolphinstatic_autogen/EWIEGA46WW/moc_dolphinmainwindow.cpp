/****************************************************************************
** Meta object code from reading C++ file 'dolphinmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/dolphinmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinMainWindow_t {
    QByteArrayData data[101];
    char stringdata0[1444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinMainWindow_t qt_meta_stringdata_DolphinMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DolphinMainWindow"
QT_MOC_LITERAL(1, 18, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 34, 26), // "org.kde.dolphin.MainWindow"
QT_MOC_LITERAL(3, 61, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 78, 0), // ""
QT_MOC_LITERAL(5, 79, 13), // "KFileItemList"
QT_MOC_LITERAL(6, 93, 9), // "selection"
QT_MOC_LITERAL(7, 103, 10), // "urlChanged"
QT_MOC_LITERAL(8, 114, 3), // "url"
QT_MOC_LITERAL(9, 118, 15), // "requestItemInfo"
QT_MOC_LITERAL(10, 134, 9), // "KFileItem"
QT_MOC_LITERAL(11, 144, 4), // "item"
QT_MOC_LITERAL(12, 149, 15), // "settingsChanged"
QT_MOC_LITERAL(13, 165, 15), // "pasteIntoFolder"
QT_MOC_LITERAL(14, 181, 5), // "getId"
QT_MOC_LITERAL(15, 187, 9), // "changeUrl"
QT_MOC_LITERAL(16, 197, 28), // "slotTerminalDirectoryChanged"
QT_MOC_LITERAL(17, 226, 4), // "quit"
QT_MOC_LITERAL(18, 231, 12), // "refreshViews"
QT_MOC_LITERAL(19, 244, 14), // "clearStatusBar"
QT_MOC_LITERAL(20, 259, 13), // "updateNewMenu"
QT_MOC_LITERAL(21, 273, 15), // "createDirectory"
QT_MOC_LITERAL(22, 289, 16), // "showErrorMessage"
QT_MOC_LITERAL(23, 306, 7), // "message"
QT_MOC_LITERAL(24, 314, 17), // "slotUndoAvailable"
QT_MOC_LITERAL(25, 332, 9), // "available"
QT_MOC_LITERAL(26, 342, 19), // "slotUndoTextChanged"
QT_MOC_LITERAL(27, 362, 4), // "text"
QT_MOC_LITERAL(28, 367, 4), // "undo"
QT_MOC_LITERAL(29, 372, 3), // "cut"
QT_MOC_LITERAL(30, 376, 4), // "copy"
QT_MOC_LITERAL(31, 381, 5), // "paste"
QT_MOC_LITERAL(32, 387, 4), // "find"
QT_MOC_LITERAL(33, 392, 17), // "updatePasteAction"
QT_MOC_LITERAL(34, 410, 9), // "selectAll"
QT_MOC_LITERAL(35, 420, 15), // "invertSelection"
QT_MOC_LITERAL(36, 436, 15), // "toggleSplitView"
QT_MOC_LITERAL(37, 452, 16), // "toggleSplitStash"
QT_MOC_LITERAL(38, 469, 10), // "reloadView"
QT_MOC_LITERAL(39, 480, 11), // "stopLoading"
QT_MOC_LITERAL(40, 492, 16), // "enableStopAction"
QT_MOC_LITERAL(41, 509, 17), // "disableStopAction"
QT_MOC_LITERAL(42, 527, 13), // "showFilterBar"
QT_MOC_LITERAL(43, 541, 18), // "toggleEditLocation"
QT_MOC_LITERAL(44, 560, 15), // "replaceLocation"
QT_MOC_LITERAL(45, 576, 20), // "togglePanelLockState"
QT_MOC_LITERAL(46, 597, 6), // "goBack"
QT_MOC_LITERAL(47, 604, 9), // "goForward"
QT_MOC_LITERAL(48, 614, 4), // "goUp"
QT_MOC_LITERAL(49, 619, 6), // "goHome"
QT_MOC_LITERAL(50, 626, 14), // "goBackInNewTab"
QT_MOC_LITERAL(51, 641, 17), // "goForwardInNewTab"
QT_MOC_LITERAL(52, 659, 12), // "goUpInNewTab"
QT_MOC_LITERAL(53, 672, 14), // "goHomeInNewTab"
QT_MOC_LITERAL(54, 687, 12), // "compareFiles"
QT_MOC_LITERAL(55, 700, 17), // "toggleShowMenuBar"
QT_MOC_LITERAL(56, 718, 12), // "openTerminal"
QT_MOC_LITERAL(57, 731, 12), // "editSettings"
QT_MOC_LITERAL(58, 744, 24), // "slotEditableStateChanged"
QT_MOC_LITERAL(59, 769, 8), // "editable"
QT_MOC_LITERAL(60, 778, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(61, 799, 13), // "updateHistory"
QT_MOC_LITERAL(62, 813, 21), // "updateFilterBarAction"
QT_MOC_LITERAL(63, 835, 4), // "show"
QT_MOC_LITERAL(64, 840, 17), // "openNewMainWindow"
QT_MOC_LITERAL(65, 858, 19), // "openNewActivatedTab"
QT_MOC_LITERAL(66, 878, 10), // "openNewTab"
QT_MOC_LITERAL(67, 889, 12), // "openInNewTab"
QT_MOC_LITERAL(68, 902, 15), // "openInNewWindow"
QT_MOC_LITERAL(69, 918, 11), // "showCommand"
QT_MOC_LITERAL(70, 930, 11), // "CommandType"
QT_MOC_LITERAL(71, 942, 7), // "command"
QT_MOC_LITERAL(72, 950, 9), // "handleUrl"
QT_MOC_LITERAL(73, 960, 25), // "slotHandleUrlStatFinished"
QT_MOC_LITERAL(74, 986, 5), // "KJob*"
QT_MOC_LITERAL(75, 992, 3), // "job"
QT_MOC_LITERAL(76, 996, 21), // "slotWriteStateChanged"
QT_MOC_LITERAL(77, 1018, 16), // "isFolderWritable"
QT_MOC_LITERAL(78, 1035, 15), // "openContextMenu"
QT_MOC_LITERAL(79, 1051, 3), // "pos"
QT_MOC_LITERAL(80, 1055, 15), // "QList<QAction*>"
QT_MOC_LITERAL(81, 1071, 13), // "customActions"
QT_MOC_LITERAL(82, 1085, 17), // "updateControlMenu"
QT_MOC_LITERAL(83, 1103, 13), // "updateToolBar"
QT_MOC_LITERAL(84, 1117, 24), // "slotControlButtonDeleted"
QT_MOC_LITERAL(85, 1142, 18), // "slotPlaceActivated"
QT_MOC_LITERAL(86, 1161, 17), // "activeViewChanged"
QT_MOC_LITERAL(87, 1179, 21), // "DolphinViewContainer*"
QT_MOC_LITERAL(88, 1201, 13), // "viewContainer"
QT_MOC_LITERAL(89, 1215, 22), // "closedTabsCountChanged"
QT_MOC_LITERAL(90, 1238, 5), // "count"
QT_MOC_LITERAL(91, 1244, 15), // "tabCountChanged"
QT_MOC_LITERAL(92, 1260, 15), // "setUrlAsCaption"
QT_MOC_LITERAL(93, 1276, 38), // "slotStorageTearDownFromPlaces..."
QT_MOC_LITERAL(94, 1315, 9), // "mountPath"
QT_MOC_LITERAL(95, 1325, 38), // "slotStorageTearDownExternally..."
QT_MOC_LITERAL(96, 1364, 29), // "slotDirectoryLoadingCompleted"
QT_MOC_LITERAL(97, 1394, 30), // "slotToolBarActionMiddleClicked"
QT_MOC_LITERAL(98, 1425, 8), // "QAction*"
QT_MOC_LITERAL(99, 1434, 6), // "action"
QT_MOC_LITERAL(100, 1441, 2) // "id"

    },
    "DolphinMainWindow\0D-Bus Interface\0"
    "org.kde.dolphin.MainWindow\0selectionChanged\0"
    "\0KFileItemList\0selection\0urlChanged\0"
    "url\0requestItemInfo\0KFileItem\0item\0"
    "settingsChanged\0pasteIntoFolder\0getId\0"
    "changeUrl\0slotTerminalDirectoryChanged\0"
    "quit\0refreshViews\0clearStatusBar\0"
    "updateNewMenu\0createDirectory\0"
    "showErrorMessage\0message\0slotUndoAvailable\0"
    "available\0slotUndoTextChanged\0text\0"
    "undo\0cut\0copy\0paste\0find\0updatePasteAction\0"
    "selectAll\0invertSelection\0toggleSplitView\0"
    "toggleSplitStash\0reloadView\0stopLoading\0"
    "enableStopAction\0disableStopAction\0"
    "showFilterBar\0toggleEditLocation\0"
    "replaceLocation\0togglePanelLockState\0"
    "goBack\0goForward\0goUp\0goHome\0"
    "goBackInNewTab\0goForwardInNewTab\0"
    "goUpInNewTab\0goHomeInNewTab\0compareFiles\0"
    "toggleShowMenuBar\0openTerminal\0"
    "editSettings\0slotEditableStateChanged\0"
    "editable\0slotSelectionChanged\0"
    "updateHistory\0updateFilterBarAction\0"
    "show\0openNewMainWindow\0openNewActivatedTab\0"
    "openNewTab\0openInNewTab\0openInNewWindow\0"
    "showCommand\0CommandType\0command\0"
    "handleUrl\0slotHandleUrlStatFinished\0"
    "KJob*\0job\0slotWriteStateChanged\0"
    "isFolderWritable\0openContextMenu\0pos\0"
    "QList<QAction*>\0customActions\0"
    "updateControlMenu\0updateToolBar\0"
    "slotControlButtonDeleted\0slotPlaceActivated\0"
    "activeViewChanged\0DolphinViewContainer*\0"
    "viewContainer\0closedTabsCountChanged\0"
    "count\0tabCountChanged\0setUrlAsCaption\0"
    "slotStorageTearDownFromPlacesRequested\0"
    "mountPath\0slotStorageTearDownExternallyRequested\0"
    "slotDirectoryLoadingCompleted\0"
    "slotToolBarActionMiddleClicked\0QAction*\0"
    "action\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      72,   16, // methods
       1,  504, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  376,    4, 0x06 /* Public */,
       7,    1,  379,    4, 0x06 /* Public */,
       9,    1,  382,    4, 0x06 /* Public */,
      12,    0,  385,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  386,    4, 0x0a /* Public */,
      14,    0,  387,    4, 0x0a /* Public */,
      15,    1,  388,    4, 0x0a /* Public */,
      16,    1,  391,    4, 0x0a /* Public */,
      17,    0,  394,    4, 0x0a /* Public */,
      18,    0,  395,    4, 0x08 /* Private */,
      19,    0,  396,    4, 0x08 /* Private */,
      20,    0,  397,    4, 0x08 /* Private */,
      21,    0,  398,    4, 0x08 /* Private */,
      22,    1,  399,    4, 0x08 /* Private */,
      24,    1,  402,    4, 0x08 /* Private */,
      26,    1,  405,    4, 0x08 /* Private */,
      28,    0,  408,    4, 0x08 /* Private */,
      29,    0,  409,    4, 0x08 /* Private */,
      30,    0,  410,    4, 0x08 /* Private */,
      31,    0,  411,    4, 0x08 /* Private */,
      32,    0,  412,    4, 0x08 /* Private */,
      33,    0,  413,    4, 0x08 /* Private */,
      34,    0,  414,    4, 0x08 /* Private */,
      35,    0,  415,    4, 0x08 /* Private */,
      36,    0,  416,    4, 0x08 /* Private */,
      37,    0,  417,    4, 0x08 /* Private */,
      38,    0,  418,    4, 0x08 /* Private */,
      39,    0,  419,    4, 0x08 /* Private */,
      40,    0,  420,    4, 0x08 /* Private */,
      41,    0,  421,    4, 0x08 /* Private */,
      42,    0,  422,    4, 0x08 /* Private */,
      43,    0,  423,    4, 0x08 /* Private */,
      44,    0,  424,    4, 0x08 /* Private */,
      45,    0,  425,    4, 0x08 /* Private */,
      46,    0,  426,    4, 0x08 /* Private */,
      47,    0,  427,    4, 0x08 /* Private */,
      48,    0,  428,    4, 0x08 /* Private */,
      49,    0,  429,    4, 0x08 /* Private */,
      50,    0,  430,    4, 0x08 /* Private */,
      51,    0,  431,    4, 0x08 /* Private */,
      52,    0,  432,    4, 0x08 /* Private */,
      53,    0,  433,    4, 0x08 /* Private */,
      54,    0,  434,    4, 0x08 /* Private */,
      55,    0,  435,    4, 0x08 /* Private */,
      56,    0,  436,    4, 0x08 /* Private */,
      57,    0,  437,    4, 0x08 /* Private */,
      58,    1,  438,    4, 0x08 /* Private */,
      60,    1,  441,    4, 0x08 /* Private */,
      61,    0,  444,    4, 0x08 /* Private */,
      62,    1,  445,    4, 0x08 /* Private */,
      64,    0,  448,    4, 0x08 /* Private */,
      65,    0,  449,    4, 0x08 /* Private */,
      66,    1,  450,    4, 0x08 /* Private */,
      67,    0,  453,    4, 0x08 /* Private */,
      68,    0,  454,    4, 0x08 /* Private */,
      69,    1,  455,    4, 0x08 /* Private */,
      72,    1,  458,    4, 0x08 /* Private */,
      73,    1,  461,    4, 0x08 /* Private */,
      76,    1,  464,    4, 0x08 /* Private */,
      78,    4,  467,    4, 0x08 /* Private */,
      82,    0,  476,    4, 0x08 /* Private */,
      83,    0,  477,    4, 0x08 /* Private */,
      84,    0,  478,    4, 0x08 /* Private */,
      85,    1,  479,    4, 0x08 /* Private */,
      86,    1,  482,    4, 0x08 /* Private */,
      89,    1,  485,    4, 0x08 /* Private */,
      91,    1,  488,    4, 0x08 /* Private */,
      92,    1,  491,    4, 0x08 /* Private */,
      93,    1,  494,    4, 0x08 /* Private */,
      95,    1,  497,    4, 0x08 /* Private */,
      96,    0,  500,    4, 0x08 /* Private */,
      97,    1,  501,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 10, QMetaType::QUrl, 0x80000000 | 80,   79,   11,    8,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, 0x80000000 | 87,   88,
    QMetaType::Void, QMetaType::UInt,   90,
    QMetaType::Void, QMetaType::Int,   90,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98,   99,

 // properties: name, type, flags
     100, QMetaType::Int, 0x00095001,

       0        // eod
};

void DolphinMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinMainWindow *_t = static_cast<DolphinMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 1: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->requestItemInfo((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 3: _t->settingsChanged(); break;
        case 4: _t->pasteIntoFolder(); break;
        case 5: { int _r = _t->getId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->changeUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->slotTerminalDirectoryChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->quit(); break;
        case 9: _t->refreshViews(); break;
        case 10: _t->clearStatusBar(); break;
        case 11: _t->updateNewMenu(); break;
        case 12: _t->createDirectory(); break;
        case 13: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->slotUndoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slotUndoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->undo(); break;
        case 17: _t->cut(); break;
        case 18: _t->copy(); break;
        case 19: _t->paste(); break;
        case 20: _t->find(); break;
        case 21: _t->updatePasteAction(); break;
        case 22: _t->selectAll(); break;
        case 23: _t->invertSelection(); break;
        case 24: _t->toggleSplitView(); break;
        case 25: _t->toggleSplitStash(); break;
        case 26: _t->reloadView(); break;
        case 27: _t->stopLoading(); break;
        case 28: _t->enableStopAction(); break;
        case 29: _t->disableStopAction(); break;
        case 30: _t->showFilterBar(); break;
        case 31: _t->toggleEditLocation(); break;
        case 32: _t->replaceLocation(); break;
        case 33: _t->togglePanelLockState(); break;
        case 34: _t->goBack(); break;
        case 35: _t->goForward(); break;
        case 36: _t->goUp(); break;
        case 37: _t->goHome(); break;
        case 38: _t->goBackInNewTab(); break;
        case 39: _t->goForwardInNewTab(); break;
        case 40: _t->goUpInNewTab(); break;
        case 41: _t->goHomeInNewTab(); break;
        case 42: _t->compareFiles(); break;
        case 43: _t->toggleShowMenuBar(); break;
        case 44: _t->openTerminal(); break;
        case 45: _t->editSettings(); break;
        case 46: _t->slotEditableStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->slotSelectionChanged((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 48: _t->updateHistory(); break;
        case 49: _t->updateFilterBarAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->openNewMainWindow(); break;
        case 51: _t->openNewActivatedTab(); break;
        case 52: _t->openNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 53: _t->openInNewTab(); break;
        case 54: _t->openInNewWindow(); break;
        case 55: _t->showCommand((*reinterpret_cast< CommandType(*)>(_a[1]))); break;
        case 56: _t->handleUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 57: _t->slotHandleUrlStatFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 58: _t->slotWriteStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->openContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItem(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QList<QAction*>(*)>(_a[4]))); break;
        case 60: _t->updateControlMenu(); break;
        case 61: _t->updateToolBar(); break;
        case 62: _t->slotControlButtonDeleted(); break;
        case 63: _t->slotPlaceActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 64: _t->activeViewChanged((*reinterpret_cast< DolphinViewContainer*(*)>(_a[1]))); break;
        case 65: _t->closedTabsCountChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 66: _t->tabCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->setUrlAsCaption((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 68: _t->slotStorageTearDownFromPlacesRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->slotStorageTearDownExternallyRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 70: _t->slotDirectoryLoadingCompleted(); break;
        case 71: _t->slotToolBarActionMiddleClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DolphinMainWindow::*_t)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinMainWindow::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinMainWindow::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinMainWindow::urlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DolphinMainWindow::*_t)(const KFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinMainWindow::requestItemInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DolphinMainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinMainWindow::settingsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DolphinMainWindow *_t = static_cast<DolphinMainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DolphinMainWindow::staticMetaObject = {
    { &KXmlGuiWindow::staticMetaObject, qt_meta_stringdata_DolphinMainWindow.data,
      qt_meta_data_DolphinMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinMainWindow.stringdata0))
        return static_cast<void*>(const_cast< DolphinMainWindow*>(this));
    return KXmlGuiWindow::qt_metacast(_clname);
}

int DolphinMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KXmlGuiWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DolphinMainWindow::selectionChanged(const KFileItemList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DolphinMainWindow::urlChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DolphinMainWindow::requestItemInfo(const KFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DolphinMainWindow::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
