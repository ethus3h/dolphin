/****************************************************************************
** Meta object code from reading C++ file 'dolphinview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../library/Ember satellite projects/wreathe-file-manager/src/views/dolphinview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dolphinview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DolphinView_t {
    QByteArrayData data[137];
    char stringdata0[2180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DolphinView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DolphinView_t qt_meta_stringdata_DolphinView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DolphinView"
QT_MOC_LITERAL(1, 12, 9), // "activated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "urlChanged"
QT_MOC_LITERAL(4, 34, 3), // "url"
QT_MOC_LITERAL(5, 38, 13), // "itemActivated"
QT_MOC_LITERAL(6, 52, 9), // "KFileItem"
QT_MOC_LITERAL(7, 62, 4), // "item"
QT_MOC_LITERAL(8, 67, 14), // "itemsActivated"
QT_MOC_LITERAL(9, 82, 13), // "KFileItemList"
QT_MOC_LITERAL(10, 96, 5), // "items"
QT_MOC_LITERAL(11, 102, 16), // "itemCountChanged"
QT_MOC_LITERAL(12, 119, 12), // "tabRequested"
QT_MOC_LITERAL(13, 132, 11), // "modeChanged"
QT_MOC_LITERAL(14, 144, 17), // "DolphinView::Mode"
QT_MOC_LITERAL(15, 162, 7), // "current"
QT_MOC_LITERAL(16, 170, 8), // "previous"
QT_MOC_LITERAL(17, 179, 20), // "previewsShownChanged"
QT_MOC_LITERAL(18, 200, 5), // "shown"
QT_MOC_LITERAL(19, 206, 23), // "hiddenFilesShownChanged"
QT_MOC_LITERAL(20, 230, 21), // "groupedSortingChanged"
QT_MOC_LITERAL(21, 252, 14), // "groupedSorting"
QT_MOC_LITERAL(22, 267, 15), // "sortRoleChanged"
QT_MOC_LITERAL(23, 283, 4), // "role"
QT_MOC_LITERAL(24, 288, 16), // "sortOrderChanged"
QT_MOC_LITERAL(25, 305, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(26, 319, 5), // "order"
QT_MOC_LITERAL(27, 325, 23), // "sortFoldersFirstChanged"
QT_MOC_LITERAL(28, 349, 12), // "foldersFirst"
QT_MOC_LITERAL(29, 362, 19), // "visibleRolesChanged"
QT_MOC_LITERAL(30, 382, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(31, 399, 15), // "requestItemInfo"
QT_MOC_LITERAL(32, 415, 16), // "selectionChanged"
QT_MOC_LITERAL(33, 432, 9), // "selection"
QT_MOC_LITERAL(34, 442, 18), // "requestContextMenu"
QT_MOC_LITERAL(35, 461, 3), // "pos"
QT_MOC_LITERAL(36, 465, 15), // "QList<QAction*>"
QT_MOC_LITERAL(37, 481, 13), // "customActions"
QT_MOC_LITERAL(38, 495, 11), // "infoMessage"
QT_MOC_LITERAL(39, 507, 3), // "msg"
QT_MOC_LITERAL(40, 511, 12), // "errorMessage"
QT_MOC_LITERAL(41, 524, 25), // "operationCompletedMessage"
QT_MOC_LITERAL(42, 550, 23), // "directoryLoadingStarted"
QT_MOC_LITERAL(43, 574, 25), // "directoryLoadingCompleted"
QT_MOC_LITERAL(44, 600, 24), // "directoryLoadingCanceled"
QT_MOC_LITERAL(45, 625, 24), // "directoryLoadingProgress"
QT_MOC_LITERAL(46, 650, 7), // "percent"
QT_MOC_LITERAL(47, 658, 24), // "directorySortingProgress"
QT_MOC_LITERAL(48, 683, 11), // "redirection"
QT_MOC_LITERAL(49, 695, 6), // "oldUrl"
QT_MOC_LITERAL(50, 702, 6), // "newUrl"
QT_MOC_LITERAL(51, 709, 14), // "urlIsFileError"
QT_MOC_LITERAL(52, 724, 17), // "writeStateChanged"
QT_MOC_LITERAL(53, 742, 16), // "isFolderWritable"
QT_MOC_LITERAL(54, 759, 15), // "goBackRequested"
QT_MOC_LITERAL(55, 775, 18), // "goForwardRequested"
QT_MOC_LITERAL(56, 794, 25), // "toggleActiveViewRequested"
QT_MOC_LITERAL(57, 820, 12), // "urlActivated"
QT_MOC_LITERAL(58, 833, 6), // "setUrl"
QT_MOC_LITERAL(59, 840, 9), // "selectAll"
QT_MOC_LITERAL(60, 850, 15), // "invertSelection"
QT_MOC_LITERAL(61, 866, 14), // "clearSelection"
QT_MOC_LITERAL(62, 881, 19), // "renameSelectedItems"
QT_MOC_LITERAL(63, 901, 18), // "trashSelectedItems"
QT_MOC_LITERAL(64, 920, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(65, 940, 16), // "cutSelectedItems"
QT_MOC_LITERAL(66, 957, 17), // "copySelectedItems"
QT_MOC_LITERAL(67, 975, 5), // "paste"
QT_MOC_LITERAL(68, 981, 15), // "pasteIntoFolder"
QT_MOC_LITERAL(69, 997, 8), // "dropUrls"
QT_MOC_LITERAL(70, 1006, 7), // "destUrl"
QT_MOC_LITERAL(71, 1014, 11), // "QDropEvent*"
QT_MOC_LITERAL(72, 1026, 9), // "dropEvent"
QT_MOC_LITERAL(73, 1036, 8), // "QWidget*"
QT_MOC_LITERAL(74, 1045, 10), // "dropWidget"
QT_MOC_LITERAL(75, 1056, 11), // "stopLoading"
QT_MOC_LITERAL(76, 1068, 11), // "eventFilter"
QT_MOC_LITERAL(77, 1080, 7), // "watched"
QT_MOC_LITERAL(78, 1088, 7), // "QEvent*"
QT_MOC_LITERAL(79, 1096, 5), // "event"
QT_MOC_LITERAL(80, 1102, 8), // "activate"
QT_MOC_LITERAL(81, 1111, 17), // "slotItemActivated"
QT_MOC_LITERAL(82, 1129, 5), // "index"
QT_MOC_LITERAL(83, 1135, 18), // "slotItemsActivated"
QT_MOC_LITERAL(84, 1154, 8), // "KItemSet"
QT_MOC_LITERAL(85, 1163, 7), // "indexes"
QT_MOC_LITERAL(86, 1171, 21), // "slotItemMiddleClicked"
QT_MOC_LITERAL(87, 1193, 28), // "slotItemContextMenuRequested"
QT_MOC_LITERAL(88, 1222, 28), // "slotViewContextMenuRequested"
QT_MOC_LITERAL(89, 1251, 30), // "slotHeaderContextMenuRequested"
QT_MOC_LITERAL(90, 1282, 35), // "slotHeaderColumnWidthChangeFi..."
QT_MOC_LITERAL(91, 1318, 15), // "slotItemHovered"
QT_MOC_LITERAL(92, 1334, 17), // "slotItemUnhovered"
QT_MOC_LITERAL(93, 1352, 17), // "slotItemDropEvent"
QT_MOC_LITERAL(94, 1370, 28), // "QGraphicsSceneDragDropEvent*"
QT_MOC_LITERAL(95, 1399, 16), // "slotModelChanged"
QT_MOC_LITERAL(96, 1416, 15), // "KItemModelBase*"
QT_MOC_LITERAL(97, 1432, 22), // "slotMouseButtonPressed"
QT_MOC_LITERAL(98, 1455, 9), // "itemIndex"
QT_MOC_LITERAL(99, 1465, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(100, 1482, 7), // "buttons"
QT_MOC_LITERAL(101, 1490, 32), // "slotRenameDialogRenamingFinished"
QT_MOC_LITERAL(102, 1523, 11), // "QList<QUrl>"
QT_MOC_LITERAL(103, 1535, 4), // "urls"
QT_MOC_LITERAL(104, 1540, 27), // "slotSelectedItemTextPressed"
QT_MOC_LITERAL(105, 1568, 15), // "slotItemCreated"
QT_MOC_LITERAL(106, 1584, 18), // "slotPasteJobResult"
QT_MOC_LITERAL(107, 1603, 5), // "KJob*"
QT_MOC_LITERAL(108, 1609, 3), // "job"
QT_MOC_LITERAL(109, 1613, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(110, 1634, 26), // "emitSelectionChangedSignal"
QT_MOC_LITERAL(111, 1661, 14), // "updateSortRole"
QT_MOC_LITERAL(112, 1676, 15), // "updateSortOrder"
QT_MOC_LITERAL(113, 1692, 22), // "updateSortFoldersFirst"
QT_MOC_LITERAL(114, 1715, 22), // "slotDeleteFileFinished"
QT_MOC_LITERAL(115, 1738, 21), // "slotTrashFileFinished"
QT_MOC_LITERAL(116, 1760, 18), // "slotRenamingResult"
QT_MOC_LITERAL(117, 1779, 27), // "slotDirectoryLoadingStarted"
QT_MOC_LITERAL(118, 1807, 29), // "slotDirectoryLoadingCompleted"
QT_MOC_LITERAL(119, 1837, 16), // "slotItemsChanged"
QT_MOC_LITERAL(120, 1854, 28), // "slotSortOrderChangedByHeader"
QT_MOC_LITERAL(121, 1883, 27), // "slotSortRoleChangedByHeader"
QT_MOC_LITERAL(122, 1911, 31), // "slotVisibleRolesChangedByHeader"
QT_MOC_LITERAL(123, 1943, 23), // "slotRoleEditingCanceled"
QT_MOC_LITERAL(124, 1967, 23), // "slotRoleEditingFinished"
QT_MOC_LITERAL(125, 1991, 5), // "value"
QT_MOC_LITERAL(126, 1997, 18), // "observeCreatedItem"
QT_MOC_LITERAL(127, 2016, 24), // "slotDirectoryRedirection"
QT_MOC_LITERAL(128, 2041, 15), // "updateViewState"
QT_MOC_LITERAL(129, 2057, 11), // "hideToolTip"
QT_MOC_LITERAL(130, 2069, 18), // "calculateItemCount"
QT_MOC_LITERAL(131, 2088, 4), // "int&"
QT_MOC_LITERAL(132, 2093, 9), // "fileCount"
QT_MOC_LITERAL(133, 2103, 11), // "folderCount"
QT_MOC_LITERAL(134, 2115, 16), // "KIO::filesize_t&"
QT_MOC_LITERAL(135, 2132, 13), // "totalFileSize"
QT_MOC_LITERAL(136, 2146, 33) // "slotTwoClicksRenamingTimerTim..."

    },
    "DolphinView\0activated\0\0urlChanged\0url\0"
    "itemActivated\0KFileItem\0item\0"
    "itemsActivated\0KFileItemList\0items\0"
    "itemCountChanged\0tabRequested\0modeChanged\0"
    "DolphinView::Mode\0current\0previous\0"
    "previewsShownChanged\0shown\0"
    "hiddenFilesShownChanged\0groupedSortingChanged\0"
    "groupedSorting\0sortRoleChanged\0role\0"
    "sortOrderChanged\0Qt::SortOrder\0order\0"
    "sortFoldersFirstChanged\0foldersFirst\0"
    "visibleRolesChanged\0zoomLevelChanged\0"
    "requestItemInfo\0selectionChanged\0"
    "selection\0requestContextMenu\0pos\0"
    "QList<QAction*>\0customActions\0infoMessage\0"
    "msg\0errorMessage\0operationCompletedMessage\0"
    "directoryLoadingStarted\0"
    "directoryLoadingCompleted\0"
    "directoryLoadingCanceled\0"
    "directoryLoadingProgress\0percent\0"
    "directorySortingProgress\0redirection\0"
    "oldUrl\0newUrl\0urlIsFileError\0"
    "writeStateChanged\0isFolderWritable\0"
    "goBackRequested\0goForwardRequested\0"
    "toggleActiveViewRequested\0urlActivated\0"
    "setUrl\0selectAll\0invertSelection\0"
    "clearSelection\0renameSelectedItems\0"
    "trashSelectedItems\0deleteSelectedItems\0"
    "cutSelectedItems\0copySelectedItems\0"
    "paste\0pasteIntoFolder\0dropUrls\0destUrl\0"
    "QDropEvent*\0dropEvent\0QWidget*\0"
    "dropWidget\0stopLoading\0eventFilter\0"
    "watched\0QEvent*\0event\0activate\0"
    "slotItemActivated\0index\0slotItemsActivated\0"
    "KItemSet\0indexes\0slotItemMiddleClicked\0"
    "slotItemContextMenuRequested\0"
    "slotViewContextMenuRequested\0"
    "slotHeaderContextMenuRequested\0"
    "slotHeaderColumnWidthChangeFinished\0"
    "slotItemHovered\0slotItemUnhovered\0"
    "slotItemDropEvent\0QGraphicsSceneDragDropEvent*\0"
    "slotModelChanged\0KItemModelBase*\0"
    "slotMouseButtonPressed\0itemIndex\0"
    "Qt::MouseButtons\0buttons\0"
    "slotRenameDialogRenamingFinished\0"
    "QList<QUrl>\0urls\0slotSelectedItemTextPressed\0"
    "slotItemCreated\0slotPasteJobResult\0"
    "KJob*\0job\0slotSelectionChanged\0"
    "emitSelectionChangedSignal\0updateSortRole\0"
    "updateSortOrder\0updateSortFoldersFirst\0"
    "slotDeleteFileFinished\0slotTrashFileFinished\0"
    "slotRenamingResult\0slotDirectoryLoadingStarted\0"
    "slotDirectoryLoadingCompleted\0"
    "slotItemsChanged\0slotSortOrderChangedByHeader\0"
    "slotSortRoleChangedByHeader\0"
    "slotVisibleRolesChangedByHeader\0"
    "slotRoleEditingCanceled\0slotRoleEditingFinished\0"
    "value\0observeCreatedItem\0"
    "slotDirectoryRedirection\0updateViewState\0"
    "hideToolTip\0calculateItemCount\0int&\0"
    "fileCount\0folderCount\0KIO::filesize_t&\0"
    "totalFileSize\0slotTwoClicksRenamingTimerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      33,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  444,    2, 0x06 /* Public */,
       3,    1,  445,    2, 0x06 /* Public */,
       5,    1,  448,    2, 0x06 /* Public */,
       8,    1,  451,    2, 0x06 /* Public */,
      11,    0,  454,    2, 0x06 /* Public */,
      12,    1,  455,    2, 0x06 /* Public */,
      13,    2,  458,    2, 0x06 /* Public */,
      17,    1,  463,    2, 0x06 /* Public */,
      19,    1,  466,    2, 0x06 /* Public */,
      20,    1,  469,    2, 0x06 /* Public */,
      22,    1,  472,    2, 0x06 /* Public */,
      24,    1,  475,    2, 0x06 /* Public */,
      27,    1,  478,    2, 0x06 /* Public */,
      29,    2,  481,    2, 0x06 /* Public */,
      30,    2,  486,    2, 0x06 /* Public */,
      31,    1,  491,    2, 0x06 /* Public */,
      32,    1,  494,    2, 0x06 /* Public */,
      34,    4,  497,    2, 0x06 /* Public */,
      38,    1,  506,    2, 0x06 /* Public */,
      40,    1,  509,    2, 0x06 /* Public */,
      41,    1,  512,    2, 0x06 /* Public */,
      42,    0,  515,    2, 0x06 /* Public */,
      43,    0,  516,    2, 0x06 /* Public */,
      44,    0,  517,    2, 0x06 /* Public */,
      45,    1,  518,    2, 0x06 /* Public */,
      47,    1,  521,    2, 0x06 /* Public */,
      48,    2,  524,    2, 0x06 /* Public */,
      51,    1,  529,    2, 0x06 /* Public */,
      52,    1,  532,    2, 0x06 /* Public */,
      54,    0,  535,    2, 0x06 /* Public */,
      55,    0,  536,    2, 0x06 /* Public */,
      56,    0,  537,    2, 0x06 /* Public */,
      57,    1,  538,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      58,    1,  541,    2, 0x0a /* Public */,
      59,    0,  544,    2, 0x0a /* Public */,
      60,    0,  545,    2, 0x0a /* Public */,
      61,    0,  546,    2, 0x0a /* Public */,
      62,    0,  547,    2, 0x0a /* Public */,
      63,    0,  548,    2, 0x0a /* Public */,
      64,    0,  549,    2, 0x0a /* Public */,
      65,    0,  550,    2, 0x0a /* Public */,
      66,    0,  551,    2, 0x0a /* Public */,
      67,    0,  552,    2, 0x0a /* Public */,
      68,    0,  553,    2, 0x0a /* Public */,
      69,    3,  554,    2, 0x0a /* Public */,
      75,    0,  561,    2, 0x0a /* Public */,
      76,    2,  562,    2, 0x0a /* Public */,
      80,    0,  567,    2, 0x08 /* Private */,
      81,    1,  568,    2, 0x08 /* Private */,
      83,    1,  571,    2, 0x08 /* Private */,
      86,    1,  574,    2, 0x08 /* Private */,
      87,    2,  577,    2, 0x08 /* Private */,
      88,    1,  582,    2, 0x08 /* Private */,
      89,    1,  585,    2, 0x08 /* Private */,
      90,    2,  588,    2, 0x08 /* Private */,
      91,    1,  593,    2, 0x08 /* Private */,
      92,    1,  596,    2, 0x08 /* Private */,
      93,    2,  599,    2, 0x08 /* Private */,
      95,    2,  604,    2, 0x08 /* Private */,
      97,    2,  609,    2, 0x08 /* Private */,
     101,    1,  614,    2, 0x08 /* Private */,
     104,    1,  617,    2, 0x08 /* Private */,
     105,    1,  620,    2, 0x08 /* Private */,
     106,    1,  623,    2, 0x08 /* Private */,
     109,    2,  626,    2, 0x08 /* Private */,
     110,    0,  631,    2, 0x08 /* Private */,
     111,    1,  632,    2, 0x08 /* Private */,
     112,    1,  635,    2, 0x08 /* Private */,
     113,    1,  638,    2, 0x08 /* Private */,
     114,    1,  641,    2, 0x08 /* Private */,
     115,    1,  644,    2, 0x08 /* Private */,
     116,    1,  647,    2, 0x08 /* Private */,
     117,    0,  650,    2, 0x08 /* Private */,
     118,    0,  651,    2, 0x08 /* Private */,
     119,    0,  652,    2, 0x08 /* Private */,
     120,    2,  653,    2, 0x08 /* Private */,
     121,    2,  658,    2, 0x08 /* Private */,
     122,    2,  663,    2, 0x08 /* Private */,
     123,    0,  668,    2, 0x08 /* Private */,
     124,    3,  669,    2, 0x08 /* Private */,
     126,    1,  676,    2, 0x08 /* Private */,
     127,    2,  679,    2, 0x08 /* Private */,
     128,    0,  684,    2, 0x08 /* Private */,
     129,    0,  685,    2, 0x08 /* Private */,
     130,    3,  686,    2, 0x08 /* Private */,
     136,    0,  693,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::QByteArrayList, QMetaType::QByteArrayList,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   33,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 6, QMetaType::QUrl, 0x80000000 | 36,   35,    7,    4,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,   49,   50,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    4,
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
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 71, 0x80000000 | 73,   70,   72,   74,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 78,   77,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,   82,   35,
    QMetaType::Void, QMetaType::QPointF,   35,
    QMetaType::Void, QMetaType::QPointF,   35,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QReal,   23,   15,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 94,   82,   79,
    QMetaType::Void, 0x80000000 | 96, 0x80000000 | 96,   15,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 99,   98,  100,
    QMetaType::Void, 0x80000000 | 102,  103,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 84, 0x80000000 | 84,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   15,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   15,   16,
    QMetaType::Void, QMetaType::QByteArrayList, QMetaType::QByteArrayList,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, QMetaType::QVariant,   82,   23,  125,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl,   49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 131, 0x80000000 | 131, 0x80000000 | 134,  132,  133,  135,
    QMetaType::Void,

       0        // eod
};

void DolphinView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinView *_t = static_cast<DolphinView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->itemActivated((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 3: _t->itemsActivated((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 4: _t->itemCountChanged(); break;
        case 5: _t->tabRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->modeChanged((*reinterpret_cast< DolphinView::Mode(*)>(_a[1])),(*reinterpret_cast< DolphinView::Mode(*)>(_a[2]))); break;
        case 7: _t->previewsShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->hiddenFilesShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->groupedSortingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sortRoleChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->sortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 12: _t->sortFoldersFirstChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->visibleRolesChanged((*reinterpret_cast< const QList<QByteArray>(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        case 14: _t->zoomLevelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->requestItemInfo((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 16: _t->selectionChanged((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 17: _t->requestContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const KFileItem(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QList<QAction*>(*)>(_a[4]))); break;
        case 18: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->operationCompletedMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->directoryLoadingStarted(); break;
        case 22: _t->directoryLoadingCompleted(); break;
        case 23: _t->directoryLoadingCanceled(); break;
        case 24: _t->directoryLoadingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->directorySortingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->redirection((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 27: _t->urlIsFileError((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 28: _t->writeStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->goBackRequested(); break;
        case 30: _t->goForwardRequested(); break;
        case 31: _t->toggleActiveViewRequested(); break;
        case 32: _t->urlActivated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 33: _t->setUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 34: _t->selectAll(); break;
        case 35: _t->invertSelection(); break;
        case 36: _t->clearSelection(); break;
        case 37: _t->renameSelectedItems(); break;
        case 38: _t->trashSelectedItems(); break;
        case 39: _t->deleteSelectedItems(); break;
        case 40: _t->cutSelectedItems(); break;
        case 41: _t->copySelectedItems(); break;
        case 42: _t->paste(); break;
        case 43: _t->pasteIntoFolder(); break;
        case 44: _t->dropUrls((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 45: _t->stopLoading(); break;
        case 46: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: _t->activate(); break;
        case 48: _t->slotItemActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->slotItemsActivated((*reinterpret_cast< const KItemSet(*)>(_a[1]))); break;
        case 50: _t->slotItemMiddleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->slotItemContextMenuRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 52: _t->slotViewContextMenuRequested((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 53: _t->slotHeaderContextMenuRequested((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 54: _t->slotHeaderColumnWidthChangeFinished((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 55: _t->slotItemHovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->slotItemUnhovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->slotItemDropEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 58: _t->slotModelChanged((*reinterpret_cast< KItemModelBase*(*)>(_a[1])),(*reinterpret_cast< KItemModelBase*(*)>(_a[2]))); break;
        case 59: _t->slotMouseButtonPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[2]))); break;
        case 60: _t->slotRenameDialogRenamingFinished((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 61: _t->slotSelectedItemTextPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->slotItemCreated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 63: _t->slotPasteJobResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 64: _t->slotSelectionChanged((*reinterpret_cast< const KItemSet(*)>(_a[1])),(*reinterpret_cast< const KItemSet(*)>(_a[2]))); break;
        case 65: _t->emitSelectionChangedSignal(); break;
        case 66: _t->updateSortRole((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 67: _t->updateSortOrder((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 68: _t->updateSortFoldersFirst((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->slotDeleteFileFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 70: _t->slotTrashFileFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 71: _t->slotRenamingResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 72: _t->slotDirectoryLoadingStarted(); break;
        case 73: _t->slotDirectoryLoadingCompleted(); break;
        case 74: _t->slotItemsChanged(); break;
        case 75: _t->slotSortOrderChangedByHeader((*reinterpret_cast< Qt::SortOrder(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 76: _t->slotSortRoleChangedByHeader((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 77: _t->slotVisibleRolesChangedByHeader((*reinterpret_cast< const QList<QByteArray>(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        case 78: _t->slotRoleEditingCanceled(); break;
        case 79: _t->slotRoleEditingFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 80: _t->observeCreatedItem((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 81: _t->slotDirectoryRedirection((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 82: _t->updateViewState(); break;
        case 83: _t->hideToolTip(); break;
        case 84: _t->calculateItemCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< KIO::filesize_t(*)>(_a[3]))); break;
        case 85: _t->slotTwoClicksRenamingTimerTimeout(); break;
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
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DolphinView::Mode >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KJob* >(); break;
            }
            break;
        case 71:
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
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::urlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::itemActivated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::itemsActivated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::itemCountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::tabRequested)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(DolphinView::Mode , DolphinView::Mode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::modeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::previewsShownChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::hiddenFilesShownChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::groupedSortingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortRoleChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortOrderChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortFoldersFirstChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QList<QByteArray> & , const QList<QByteArray> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::visibleRolesChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::zoomLevelChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::requestItemInfo)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::selectionChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QPoint & , const KFileItem & , const QUrl & , const QList<QAction*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::requestContextMenu)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::infoMessage)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::errorMessage)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::operationCompletedMessage)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::directoryLoadingStarted)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::directoryLoadingCompleted)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::directoryLoadingCanceled)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::directoryLoadingProgress)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::directorySortingProgress)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QUrl & , const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::redirection)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::urlIsFileError)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::writeStateChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::goBackRequested)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::goForwardRequested)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::toggleActiveViewRequested)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::urlActivated)) {
                *result = 32;
                return;
            }
        }
    }
}

const QMetaObject DolphinView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DolphinView.data,
      qt_meta_data_DolphinView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DolphinView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DolphinView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DolphinView.stringdata0))
        return static_cast<void*>(const_cast< DolphinView*>(this));
    return QWidget::qt_metacast(_clname);
}

int DolphinView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    return _id;
}

// SIGNAL 0
void DolphinView::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DolphinView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DolphinView::itemActivated(const KFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DolphinView::itemsActivated(const KFileItemList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DolphinView::itemCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DolphinView::tabRequested(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DolphinView::modeChanged(DolphinView::Mode _t1, DolphinView::Mode _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DolphinView::previewsShownChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DolphinView::hiddenFilesShownChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DolphinView::groupedSortingChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DolphinView::sortRoleChanged(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DolphinView::sortOrderChanged(Qt::SortOrder _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DolphinView::sortFoldersFirstChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DolphinView::visibleRolesChanged(const QList<QByteArray> & _t1, const QList<QByteArray> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DolphinView::zoomLevelChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DolphinView::requestItemInfo(const KFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DolphinView::selectionChanged(const KFileItemList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DolphinView::requestContextMenu(const QPoint & _t1, const KFileItem & _t2, const QUrl & _t3, const QList<QAction*> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DolphinView::infoMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DolphinView::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DolphinView::operationCompletedMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DolphinView::directoryLoadingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void DolphinView::directoryLoadingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void DolphinView::directoryLoadingCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void DolphinView::directoryLoadingProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DolphinView::directorySortingProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DolphinView::redirection(const QUrl & _t1, const QUrl & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DolphinView::urlIsFileError(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DolphinView::writeStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DolphinView::goBackRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 29, Q_NULLPTR);
}

// SIGNAL 30
void DolphinView::goForwardRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 30, Q_NULLPTR);
}

// SIGNAL 31
void DolphinView::toggleActiveViewRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 31, Q_NULLPTR);
}

// SIGNAL 32
void DolphinView::urlActivated(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}
QT_END_MOC_NAMESPACE
