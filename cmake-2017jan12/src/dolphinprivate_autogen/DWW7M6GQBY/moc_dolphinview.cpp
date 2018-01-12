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
    QByteArrayData data[101];
    char stringdata0[1488];
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
QT_MOC_LITERAL(4, 34, 4), // "KUrl"
QT_MOC_LITERAL(5, 39, 3), // "url"
QT_MOC_LITERAL(6, 43, 13), // "itemTriggered"
QT_MOC_LITERAL(7, 57, 9), // "KFileItem"
QT_MOC_LITERAL(8, 67, 4), // "item"
QT_MOC_LITERAL(9, 72, 16), // "itemCountChanged"
QT_MOC_LITERAL(10, 89, 12), // "tabRequested"
QT_MOC_LITERAL(11, 102, 11), // "modeChanged"
QT_MOC_LITERAL(12, 114, 18), // "showPreviewChanged"
QT_MOC_LITERAL(13, 133, 22), // "showHiddenFilesChanged"
QT_MOC_LITERAL(14, 156, 25), // "categorizedSortingChanged"
QT_MOC_LITERAL(15, 182, 14), // "sortingChanged"
QT_MOC_LITERAL(16, 197, 20), // "DolphinView::Sorting"
QT_MOC_LITERAL(17, 218, 7), // "sorting"
QT_MOC_LITERAL(18, 226, 16), // "sortOrderChanged"
QT_MOC_LITERAL(19, 243, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(20, 257, 5), // "order"
QT_MOC_LITERAL(21, 263, 23), // "sortFoldersFirstChanged"
QT_MOC_LITERAL(22, 287, 12), // "foldersFirst"
QT_MOC_LITERAL(23, 300, 21), // "additionalInfoChanged"
QT_MOC_LITERAL(24, 322, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(25, 339, 5), // "level"
QT_MOC_LITERAL(26, 345, 15), // "requestItemInfo"
QT_MOC_LITERAL(27, 361, 16), // "selectionChanged"
QT_MOC_LITERAL(28, 378, 13), // "KFileItemList"
QT_MOC_LITERAL(29, 392, 9), // "selection"
QT_MOC_LITERAL(30, 402, 18), // "requestContextMenu"
QT_MOC_LITERAL(31, 421, 15), // "QList<QAction*>"
QT_MOC_LITERAL(32, 437, 13), // "customActions"
QT_MOC_LITERAL(33, 451, 11), // "infoMessage"
QT_MOC_LITERAL(34, 463, 3), // "msg"
QT_MOC_LITERAL(35, 467, 12), // "errorMessage"
QT_MOC_LITERAL(36, 480, 25), // "operationCompletedMessage"
QT_MOC_LITERAL(37, 506, 18), // "startedPathLoading"
QT_MOC_LITERAL(38, 525, 19), // "finishedPathLoading"
QT_MOC_LITERAL(39, 545, 19), // "pathLoadingProgress"
QT_MOC_LITERAL(40, 565, 7), // "percent"
QT_MOC_LITERAL(41, 573, 14), // "urlIsFileError"
QT_MOC_LITERAL(42, 588, 4), // "file"
QT_MOC_LITERAL(43, 593, 11), // "redirection"
QT_MOC_LITERAL(44, 605, 6), // "oldUrl"
QT_MOC_LITERAL(45, 612, 6), // "newUrl"
QT_MOC_LITERAL(46, 619, 17), // "writeStateChanged"
QT_MOC_LITERAL(47, 637, 16), // "isFolderWritable"
QT_MOC_LITERAL(48, 654, 6), // "setUrl"
QT_MOC_LITERAL(49, 661, 9), // "selectAll"
QT_MOC_LITERAL(50, 671, 15), // "invertSelection"
QT_MOC_LITERAL(51, 687, 14), // "clearSelection"
QT_MOC_LITERAL(52, 702, 19), // "renameSelectedItems"
QT_MOC_LITERAL(53, 722, 18), // "trashSelectedItems"
QT_MOC_LITERAL(54, 741, 18), // "qlookSelectedItems"
QT_MOC_LITERAL(55, 760, 19), // "searchSelectedItems"
QT_MOC_LITERAL(56, 780, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(57, 800, 16), // "cutSelectedItems"
QT_MOC_LITERAL(58, 817, 17), // "copySelectedItems"
QT_MOC_LITERAL(59, 835, 5), // "paste"
QT_MOC_LITERAL(60, 841, 15), // "pasteIntoFolder"
QT_MOC_LITERAL(61, 857, 14), // "setShowPreview"
QT_MOC_LITERAL(62, 872, 4), // "show"
QT_MOC_LITERAL(63, 877, 18), // "setShowHiddenFiles"
QT_MOC_LITERAL(64, 896, 21), // "setCategorizedSorting"
QT_MOC_LITERAL(65, 918, 11), // "categorized"
QT_MOC_LITERAL(66, 930, 8), // "activate"
QT_MOC_LITERAL(67, 939, 11), // "triggerItem"
QT_MOC_LITERAL(68, 951, 5), // "index"
QT_MOC_LITERAL(69, 957, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(70, 978, 14), // "QItemSelection"
QT_MOC_LITERAL(71, 993, 8), // "selected"
QT_MOC_LITERAL(72, 1002, 10), // "deselected"
QT_MOC_LITERAL(73, 1013, 26), // "emitSelectionChangedSignal"
QT_MOC_LITERAL(74, 1040, 15), // "openContextMenu"
QT_MOC_LITERAL(75, 1056, 3), // "pos"
QT_MOC_LITERAL(76, 1060, 8), // "dropUrls"
QT_MOC_LITERAL(77, 1069, 8), // "destItem"
QT_MOC_LITERAL(78, 1078, 8), // "destPath"
QT_MOC_LITERAL(79, 1087, 11), // "QDropEvent*"
QT_MOC_LITERAL(80, 1099, 5), // "event"
QT_MOC_LITERAL(81, 1105, 13), // "updateSorting"
QT_MOC_LITERAL(82, 1119, 15), // "updateSortOrder"
QT_MOC_LITERAL(83, 1135, 22), // "updateSortFoldersFirst"
QT_MOC_LITERAL(84, 1158, 20), // "updateAdditionalInfo"
QT_MOC_LITERAL(85, 1179, 34), // "KFileItemDelegate::Informatio..."
QT_MOC_LITERAL(86, 1214, 4), // "info"
QT_MOC_LITERAL(87, 1219, 20), // "showHoverInformation"
QT_MOC_LITERAL(88, 1240, 21), // "clearHoverInformation"
QT_MOC_LITERAL(89, 1262, 22), // "slotDeleteFileFinished"
QT_MOC_LITERAL(90, 1285, 5), // "KJob*"
QT_MOC_LITERAL(91, 1291, 3), // "job"
QT_MOC_LITERAL(92, 1295, 20), // "slotDirListerStarted"
QT_MOC_LITERAL(93, 1316, 22), // "slotDirListerCompleted"
QT_MOC_LITERAL(94, 1339, 20), // "slotLoadingCompleted"
QT_MOC_LITERAL(95, 1360, 16), // "slotRefreshItems"
QT_MOC_LITERAL(96, 1377, 18), // "observeCreatedItem"
QT_MOC_LITERAL(97, 1396, 28), // "selectAndScrollToCreatedItem"
QT_MOC_LITERAL(98, 1425, 15), // "slotRedirection"
QT_MOC_LITERAL(99, 1441, 23), // "restoreContentsPosition"
QT_MOC_LITERAL(100, 1465, 22) // "slotUrlChangeRequested"

    },
    "DolphinView\0activated\0\0urlChanged\0"
    "KUrl\0url\0itemTriggered\0KFileItem\0item\0"
    "itemCountChanged\0tabRequested\0modeChanged\0"
    "showPreviewChanged\0showHiddenFilesChanged\0"
    "categorizedSortingChanged\0sortingChanged\0"
    "DolphinView::Sorting\0sorting\0"
    "sortOrderChanged\0Qt::SortOrder\0order\0"
    "sortFoldersFirstChanged\0foldersFirst\0"
    "additionalInfoChanged\0zoomLevelChanged\0"
    "level\0requestItemInfo\0selectionChanged\0"
    "KFileItemList\0selection\0requestContextMenu\0"
    "QList<QAction*>\0customActions\0infoMessage\0"
    "msg\0errorMessage\0operationCompletedMessage\0"
    "startedPathLoading\0finishedPathLoading\0"
    "pathLoadingProgress\0percent\0urlIsFileError\0"
    "file\0redirection\0oldUrl\0newUrl\0"
    "writeStateChanged\0isFolderWritable\0"
    "setUrl\0selectAll\0invertSelection\0"
    "clearSelection\0renameSelectedItems\0"
    "trashSelectedItems\0qlookSelectedItems\0"
    "searchSelectedItems\0deleteSelectedItems\0"
    "cutSelectedItems\0copySelectedItems\0"
    "paste\0pasteIntoFolder\0setShowPreview\0"
    "show\0setShowHiddenFiles\0setCategorizedSorting\0"
    "categorized\0activate\0triggerItem\0index\0"
    "slotSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0emitSelectionChangedSignal\0"
    "openContextMenu\0pos\0dropUrls\0destItem\0"
    "destPath\0QDropEvent*\0event\0updateSorting\0"
    "updateSortOrder\0updateSortFoldersFirst\0"
    "updateAdditionalInfo\0"
    "KFileItemDelegate::InformationList\0"
    "info\0showHoverInformation\0"
    "clearHoverInformation\0slotDeleteFileFinished\0"
    "KJob*\0job\0slotDirListerStarted\0"
    "slotDirListerCompleted\0slotLoadingCompleted\0"
    "slotRefreshItems\0observeCreatedItem\0"
    "selectAndScrollToCreatedItem\0"
    "slotRedirection\0restoreContentsPosition\0"
    "slotUrlChangeRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DolphinView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,
       3,    1,  335,    2, 0x06 /* Public */,
       6,    1,  338,    2, 0x06 /* Public */,
       9,    0,  341,    2, 0x06 /* Public */,
      10,    1,  342,    2, 0x06 /* Public */,
      11,    0,  345,    2, 0x06 /* Public */,
      12,    0,  346,    2, 0x06 /* Public */,
      13,    0,  347,    2, 0x06 /* Public */,
      14,    0,  348,    2, 0x06 /* Public */,
      15,    1,  349,    2, 0x06 /* Public */,
      18,    1,  352,    2, 0x06 /* Public */,
      21,    1,  355,    2, 0x06 /* Public */,
      23,    0,  358,    2, 0x06 /* Public */,
      24,    1,  359,    2, 0x06 /* Public */,
      26,    1,  362,    2, 0x06 /* Public */,
      27,    1,  365,    2, 0x06 /* Public */,
      30,    3,  368,    2, 0x06 /* Public */,
      33,    1,  375,    2, 0x06 /* Public */,
      35,    1,  378,    2, 0x06 /* Public */,
      36,    1,  381,    2, 0x06 /* Public */,
      37,    1,  384,    2, 0x06 /* Public */,
      38,    1,  387,    2, 0x06 /* Public */,
      39,    1,  390,    2, 0x06 /* Public */,
      41,    1,  393,    2, 0x06 /* Public */,
      43,    2,  396,    2, 0x06 /* Public */,
      46,    1,  401,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      48,    1,  404,    2, 0x0a /* Public */,
      49,    0,  407,    2, 0x0a /* Public */,
      50,    0,  408,    2, 0x0a /* Public */,
      51,    0,  409,    2, 0x0a /* Public */,
      52,    0,  410,    2, 0x0a /* Public */,
      53,    0,  411,    2, 0x0a /* Public */,
      54,    0,  412,    2, 0x0a /* Public */,
      55,    0,  413,    2, 0x0a /* Public */,
      56,    0,  414,    2, 0x0a /* Public */,
      57,    0,  415,    2, 0x0a /* Public */,
      58,    0,  416,    2, 0x0a /* Public */,
      59,    0,  417,    2, 0x0a /* Public */,
      60,    0,  418,    2, 0x0a /* Public */,
      61,    1,  419,    2, 0x0a /* Public */,
      63,    1,  422,    2, 0x0a /* Public */,
      64,    1,  425,    2, 0x0a /* Public */,
      66,    0,  428,    2, 0x08 /* Private */,
      67,    1,  429,    2, 0x08 /* Private */,
      69,    2,  432,    2, 0x08 /* Private */,
      73,    0,  437,    2, 0x08 /* Private */,
      74,    2,  438,    2, 0x08 /* Private */,
      76,    3,  443,    2, 0x08 /* Private */,
      81,    1,  450,    2, 0x08 /* Private */,
      82,    1,  453,    2, 0x08 /* Private */,
      83,    1,  456,    2, 0x08 /* Private */,
      84,    1,  459,    2, 0x08 /* Private */,
      87,    1,  462,    2, 0x08 /* Private */,
      88,    0,  465,    2, 0x08 /* Private */,
      89,    1,  466,    2, 0x08 /* Private */,
      92,    1,  469,    2, 0x08 /* Private */,
      93,    0,  472,    2, 0x08 /* Private */,
      94,    0,  473,    2, 0x08 /* Private */,
      95,    0,  474,    2, 0x08 /* Private */,
      96,    1,  475,    2, 0x08 /* Private */,
      97,    0,  478,    2, 0x08 /* Private */,
      98,    2,  479,    2, 0x08 /* Private */,
      99,    0,  484,    2, 0x08 /* Private */,
     100,    1,  485,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 4, 0x80000000 | 31,    8,    5,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, 0x80000000 | 4,   42,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   44,   45,
    QMetaType::Void, QMetaType::Bool,   47,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
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
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   68,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 70,   71,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 31,   75,   32,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 4, 0x80000000 | 79,   77,   78,   80,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   44,   45,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void DolphinView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DolphinView *_t = static_cast<DolphinView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->urlChanged((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 2: _t->itemTriggered((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 3: _t->itemCountChanged(); break;
        case 4: _t->tabRequested((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 5: _t->modeChanged(); break;
        case 6: _t->showPreviewChanged(); break;
        case 7: _t->showHiddenFilesChanged(); break;
        case 8: _t->categorizedSortingChanged(); break;
        case 9: _t->sortingChanged((*reinterpret_cast< DolphinView::Sorting(*)>(_a[1]))); break;
        case 10: _t->sortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 11: _t->sortFoldersFirstChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->additionalInfoChanged(); break;
        case 13: _t->zoomLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->requestItemInfo((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 15: _t->selectionChanged((*reinterpret_cast< const KFileItemList(*)>(_a[1]))); break;
        case 16: _t->requestContextMenu((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const KUrl(*)>(_a[2])),(*reinterpret_cast< const QList<QAction*>(*)>(_a[3]))); break;
        case 17: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->operationCompletedMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->startedPathLoading((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 21: _t->finishedPathLoading((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 22: _t->pathLoadingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->urlIsFileError((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 24: _t->redirection((*reinterpret_cast< const KUrl(*)>(_a[1])),(*reinterpret_cast< const KUrl(*)>(_a[2]))); break;
        case 25: _t->writeStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setUrl((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 27: _t->selectAll(); break;
        case 28: _t->invertSelection(); break;
        case 29: _t->clearSelection(); break;
        case 30: _t->renameSelectedItems(); break;
        case 31: _t->trashSelectedItems(); break;
        case 32: _t->qlookSelectedItems(); break;
        case 33: _t->searchSelectedItems(); break;
        case 34: _t->deleteSelectedItems(); break;
        case 35: _t->cutSelectedItems(); break;
        case 36: _t->copySelectedItems(); break;
        case 37: _t->paste(); break;
        case 38: _t->pasteIntoFolder(); break;
        case 39: _t->setShowPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setShowHiddenFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setCategorizedSorting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->activate(); break;
        case 43: _t->triggerItem((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 44: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 45: _t->emitSelectionChangedSignal(); break;
        case 46: _t->openContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QList<QAction*>(*)>(_a[2]))); break;
        case 47: _t->dropUrls((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const KUrl(*)>(_a[2])),(*reinterpret_cast< QDropEvent*(*)>(_a[3]))); break;
        case 48: _t->updateSorting((*reinterpret_cast< DolphinView::Sorting(*)>(_a[1]))); break;
        case 49: _t->updateSortOrder((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 50: _t->updateSortFoldersFirst((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->updateAdditionalInfo((*reinterpret_cast< const KFileItemDelegate::InformationList(*)>(_a[1]))); break;
        case 52: _t->showHoverInformation((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 53: _t->clearHoverInformation(); break;
        case 54: _t->slotDeleteFileFinished((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 55: _t->slotDirListerStarted((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 56: _t->slotDirListerCompleted(); break;
        case 57: _t->slotLoadingCompleted(); break;
        case 58: _t->slotRefreshItems(); break;
        case 59: _t->observeCreatedItem((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
        case 60: _t->selectAndScrollToCreatedItem(); break;
        case 61: _t->slotRedirection((*reinterpret_cast< const KUrl(*)>(_a[1])),(*reinterpret_cast< const KUrl(*)>(_a[2]))); break;
        case 62: _t->restoreContentsPosition(); break;
        case 63: _t->slotUrlChangeRequested((*reinterpret_cast< const KUrl(*)>(_a[1]))); break;
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
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KFileItem >(); break;
            }
            break;
        case 54:
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
            typedef void (DolphinView::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::urlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::itemTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::itemCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::tabRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::modeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::showPreviewChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::showHiddenFilesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::categorizedSortingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(DolphinView::Sorting );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortingChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortOrderChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::sortFoldersFirstChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::additionalInfoChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::zoomLevelChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::requestItemInfo)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItemList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::selectionChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KFileItem & , const KUrl & , const QList<QAction*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::requestContextMenu)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::infoMessage)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::errorMessage)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::operationCompletedMessage)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::startedPathLoading)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::finishedPathLoading)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::pathLoadingProgress)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::urlIsFileError)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(const KUrl & , const KUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::redirection)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (DolphinView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DolphinView::writeStateChanged)) {
                *result = 25;
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
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    }
    return _id;
}

// SIGNAL 0
void DolphinView::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DolphinView::urlChanged(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DolphinView::itemTriggered(const KFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DolphinView::itemCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DolphinView::tabRequested(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DolphinView::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DolphinView::showPreviewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void DolphinView::showHiddenFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void DolphinView::categorizedSortingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void DolphinView::sortingChanged(DolphinView::Sorting _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DolphinView::sortOrderChanged(Qt::SortOrder _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DolphinView::sortFoldersFirstChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DolphinView::additionalInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void DolphinView::zoomLevelChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DolphinView::requestItemInfo(const KFileItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DolphinView::selectionChanged(const KFileItemList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DolphinView::requestContextMenu(const KFileItem & _t1, const KUrl & _t2, const QList<QAction*> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DolphinView::infoMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DolphinView::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DolphinView::operationCompletedMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DolphinView::startedPathLoading(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DolphinView::finishedPathLoading(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DolphinView::pathLoadingProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DolphinView::urlIsFileError(const KUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DolphinView::redirection(const KUrl & _t1, const KUrl & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DolphinView::writeStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
