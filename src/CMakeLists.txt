include(ECMAddAppIcon)

configure_file(config-baloo.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config-baloo.h)

configure_file(config-dolphin.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config-dolphin.h)

add_definitions(
    -DTRANSLATION_DOMAIN=\"dolphin\"
    -DQT_USE_FAST_CONCATENATION
    -DQT_USE_FAST_OPERATOR_PLUS
)
remove_definitions(
    -DQT_NO_CAST_FROM_BYTEARRAY
    -DQT_NO_URL_CAST_FROM_STRING
    -DQT_NO_SIGNALS_SLOTS_KEYWORDS
    -DQT_NO_CAST_FROM_ASCII
    -DQT_NO_CAST_TO_ASCII
)

##########################################

# TODO: Disabling Nepomuk for the moment

# macro_optional_find_package(Nepomuk)
# macro_log_feature(Nepomuk_FOUND "Nepomuk" "Nepomuk" "http://www.kde.org" FALSE "" "For adding desktop-wide tagging support to dolphin")
# macro_bool_to_01(Nepomuk_FOUND HAVE_NEPOMUK)
# configure_file(config-nepomuk.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config-nepomuk.h )

# include_directories( ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )

# if (Nepomuk_FOUND)
#   # Yes, Soprano includes is what we need here
#   include_directories( ${SOPRANO_INCLUDE_DIR} ${NEPOMUK_INCLUDE_DIR} )
# endif (Nepomuk_FOUND)

##########################################

set(dolphinvcs_LIB_SRCS
    views/versioncontrol/kversioncontrolplugin.cpp
)

add_library(dolphinvcs ${dolphinvcs_LIB_SRCS})
generate_export_header(dolphinvcs BASE_NAME dolphinvcs)

target_link_libraries(
    dolphinvcs PUBLIC
    Qt5::Widgets
)

set_target_properties(dolphinvcs PROPERTIES
    VERSION ${DOLPHINVCS_VERSION_STRING}
    SOVERSION ${DOLPHINVCS_SOVERSION}
    EXPORT_NAME DolphinVcs
)

ecm_generate_headers(dolphinvcs_LIB_HEADERS
    HEADER_NAMES
    KVersionControlPlugin

    RELATIVE "views/versioncontrol"
    REQUIRED_HEADERS dolphinvcs_LIB_HEADERS
)

install(TARGETS dolphinvcs EXPORT DolphinVcsTargets ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})

install(FILES views/versioncontrol/fileviewversioncontrolplugin.desktop DESTINATION ${KDE_INSTALL_KSERVICETYPES5DIR})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/dolphinvcs_export.h DESTINATION ${KDE_INSTALL_INCLUDEDIR} COMPONENT Devel)
install(FILES ${dolphinvcs_LIB_HEADERS} DESTINATION "${KDE_INSTALL_INCLUDEDIR}/Dolphin" COMPONENT Devel)

########### next target ###############

set(dolphinprivate_LIB_SRCS
    settings/additionalinfodialog.cpp
    settings/applyviewpropsjob.cpp
    settings/dolphinsettings.cpp
    settings/viewpropertiesdialog.cpp
    settings/viewpropsprogressinfo.cpp
    views/additionalinfoaccessor.cpp
    views/dolphincategorydrawer.cpp
    views/dolphindirlister.cpp
    views/dolphinview.cpp
    views/dolphindetailsview.cpp
    views/dolphindetailsviewexpander.cpp
    views/dolphinfileitemdelegate.cpp
    views/dolphiniconsview.cpp
    views/dolphincolumnview.cpp
    views/dolphincolumnviewcontainer.cpp
    views/dolphinmodel.cpp
    views/dolphinnewfilemenuobserver.cpp
    views/dolphinremoteencoding.cpp
    views/dolphinsortfilterproxymodel.cpp
    views/dolphintreeview.cpp
    views/dolphinviewactionhandler.cpp
    views/dolphinviewautoscroller.cpp
    views/dolphinviewcontroller.cpp
    views/draganddrophelper.cpp
    views/folderexpander.cpp
    views/renamedialog.cpp
    views/selectiontoggle.cpp
    views/selectionmanager.cpp
    views/tooltips/filemetadatatooltip.cpp
    views/tooltips/tooltipmanager.cpp
    views/versioncontrol/pendingthreadsmaintainer.cpp
    views/versioncontrol/updateitemstatesthread.cpp
    views/versioncontrol/versioncontrolobserver.cpp
    views/viewextensionsfactory.cpp
    views/viewmodecontroller.cpp
    views/viewproperties.cpp
    views/zoomlevelinfo.cpp
)

# TODO: Disabling Baloo for the moment

# if(HAVE_BALOO)
#     set(dolphinprivate_LIB_SRCS
#         ${dolphinprivate_LIB_SRCS}
#         kitemviews/private/kbaloorolesprovider.cpp
#     )
# endif()

kconfig_add_kcfg_files(dolphinprivate_LIB_SRCS GENERATE_MOC
    settings/dolphin_columnmodesettings.kcfgc
    settings/dolphin_directoryviewpropertysettings.kcfgc
    settings/dolphin_detailsmodesettings.kcfgc
    settings/dolphin_iconsmodesettings.kcfgc
    settings/dolphin_generalsettings.kcfgc
    settings/dolphin_versioncontrolsettings.kcfgc
)

add_library(dolphinprivate ${dolphinprivate_LIB_SRCS})
generate_export_header(dolphinprivate BASE_NAME dolphin)

target_link_libraries(
    dolphinprivate PUBLIC
    dolphinvcs
    Qt5::Gui
    KF5::Crash
    KF5::I18n
    KF5::IconThemes
    KF5::KIOCore
    KF5::KIOWidgets
    KF5::KIOFileWidgets
    KF5::Completion
    KF5::TextWidgets
    KF5::ConfigCore
    KF5::NewStuff
    KF5::Parts
)

# Old from KDE4: target_link_libraries(dolphinprivate ${KDE4_KFILE_LIBS} konq ${KDE4_KNEWSTUFF3_LIBS})

# TODO: Disabling Nepomuk for the moment
# if (Nepomuk_FOUND)
#   target_link_libraries(dolphinprivate ${NEPOMUK_LIBRARIES} ${NEPOMUK_QUERY_LIBRARIES} nepomukutils ${SOPRANO_LIBRARIES})
# endif (Nepomuk_FOUND)

if(HAVE_BALOO)
    target_link_libraries(
        dolphinprivate PUBLIC
        KF5::FileMetaData
        KF5::Baloo
        KF5::BalooWidgets
    )
else()
    target_link_libraries(
        dolphinprivate PUBLIC
        KF5::KDELibs4Support # for KFileMetaDataWidget
    )
endif()

set_target_properties(dolphinprivate PROPERTIES
    VERSION ${DOLPHINPRIVATE_VERSION_STRING}
    SOVERSION ${DOLPHINPRIVATE_SOVERSION}
)

install(TARGETS dolphinprivate ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} LIBRARY NAMELINK_SKIP)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/dolphin_export.h DESTINATION ${KDE_INSTALL_INCLUDEDIR} COMPONENT Devel)

##########################################

set(dolphinpart_SRCS
   dolphinpart.cpp
#    dolphinpart_ext.cpp
#    dolphindebug.cpp
)

qt5_add_resources(dolphinpart_SRCS dolphinpart.qrc)

add_library(dolphinpart MODULE ${dolphinpart_SRCS})

target_link_libraries(dolphinpart
    dolphinprivate
)

install(TARGETS dolphinpart DESTINATION ${KDE_INSTALL_PLUGINDIR})

install(FILES dolphinpart.desktop DESTINATION ${KDE_INSTALL_KSERVICES5DIR})

##########################################

set(dolphinstatic_SRCS
    dolphinapplication.cpp
    dolphindockwidget.cpp
    dolphinmainwindow.cpp
    dolphinnewfilemenu.cpp
    dolphinviewcontainer.cpp
    dolphincontextmenu.cpp
    filterbar/filterbar.cpp
    main.cpp
    panels/information/filemetadataconfigurationdialog.cpp
    panels/information/informationpanel.cpp
    panels/information/informationpanelcontent.cpp
    panels/information/pixmapviewer.cpp
    panels/information/phononwidget.cpp
    panels/folders/ktreeview.cpp
    panels/places/placespanel.cpp
    panels/panel.cpp
    panels/folders/treeviewcontextmenu.cpp
    panels/folders/folderspanel.cpp
    panels/folders/paneltreeview.cpp
    search/dolphinsearchbox.cpp
    search/dolphinsearchinformation.cpp
    settings/general/behaviorsettingspage.cpp
    settings/general/configurepreviewplugindialog.cpp
    settings/general/contextmenusettingspage.cpp
    settings/general/generalsettingspage.cpp
    settings/general/previewssettingspage.cpp
    settings/general/statusbarsettingspage.cpp
    settings/dolphinsettingsdialog.cpp
    settings/navigation/navigationsettingspage.cpp
    settings/services/servicessettingspage.cpp
    settings/settingspagebase.cpp
    settings/serviceitemdelegate.cpp
    settings/servicemodel.cpp
    settings/startup/startupsettingspage.cpp
    settings/trash/trashsettingspage.cpp
    settings/viewmodes/columnviewsettingspage.cpp
    settings/viewmodes/detailsviewsettingspage.cpp
    settings/viewmodes/dolphinfontrequester.cpp
    settings/viewmodes/iconsizegroupbox.cpp
    settings/viewmodes/iconsviewsettingspage.cpp
    settings/viewmodes/viewsettingspage.cpp
    settings/viewmodes/viewsettingspagebase.cpp
    statusbar/dolphinstatusbar.cpp
    statusbar/statusbarspaceinfo.cpp
    views/zoomlevelinfo.cpp
)

kconfig_add_kcfg_files(dolphinstatic_SRCS GENERATE_MOC
    panels/folders/dolphin_folderspanelsettings.kcfgc
    panels/information/dolphin_informationpanelsettings.kcfgc
    search/dolphin_searchsettings.kcfgc
    settings/dolphin_versioncontrolsettings.kcfgc
)

if(Nepomuk_FOUND)
    set(dolphin_SRCS
        ${dolphin_SRCS}
        panels/search/searchpanel.cpp
    )
endif(Nepomuk_FOUND)

if(NOT WIN32)
   set(dolphin_SRCS ${dolphin_SRCS} panels/terminal/terminalpanel.cpp)
endif(NOT WIN32)

if(NOT WIN32)
   set(dolphinstatic_SRCS ${dolphinstatic_SRCS} panels/terminal/terminalpanel.cpp)
endif()

qt5_add_resources(dolphinstatic_SRCS dolphin.qrc)

add_library(dolphinstatic STATIC ${dolphinstatic_SRCS})

target_include_directories(dolphinstatic PRIVATE ${PHONON_INCLUDES})
target_link_libraries(dolphinstatic
    dolphinprivate
    KF5::KCMUtils
    KF5::DBusAddons
    KF5::Notifications
    Phonon::phonon4qt5
)

if (KF5Activities_FOUND)
    target_link_libraries(
        dolphinstatic
        KF5::Activities
    )
endif()

set(dolphin_SRCS
    dbusinterface.cpp
    main.cpp
)

# Sets the icon on Windows and OSX
file(GLOB ICONS_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/icons/*system-file-manager.png")
ecm_add_app_icon(dolphin_SRCS ICONS ${ICONS_SRCS})

kf5_add_kdeinit_executable(dolphin ${dolphin_SRCS})


target_link_libraries(kdeinit_dolphin
    dolphinstatic
    dolphinprivate
)

include(DbusInterfaceMacros)

generate_and_install_dbus_interface(
    kdeinit_dolphin
    dbusinterface.h
    org.freedesktop.FileManager1.xml
    OPTIONS -a
)

if (Nepomuk_FOUND)
    target_link_libraries(kdeinit_dolphin
        ${NEPOMUK_LIBRARIES}
        ${SOPRANO_LIBRARIES}
        ${NEPOMUK_QUERY_LIBRARIES}
        nepomukutils
    )
endif (Nepomuk_FOUND)

install(TARGETS kdeinit_dolphin ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
install(TARGETS dolphin ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})

##########################################

set(kcm_dolphinviewmodes_PART_SRCS
    settings/kcm/kcmdolphinviewmodes.cpp
    settings/viewmodes/columnviewsettingspage.cpp
    settings/viewmodes/detailsviewsettingspage.cpp
    settings/viewmodes/dolphinfontrequester.cpp
    settings/viewmodes/iconsizegroupbox.cpp
    settings/viewmodes/iconsviewsettingspage.cpp
    settings/viewmodes/viewsettingspagebase.cpp
    views/zoomlevelinfo.cpp)

set(kcm_dolphinnavigation_PART_SRCS
    settings/kcm/kcmdolphinnavigation.cpp
    settings/navigation/navigationsettingspage.cpp
    settings/settingspagebase.cpp)

set(kcm_dolphinservices_PART_SRCS
    settings/kcm/kcmdolphinservices.cpp
    settings/services/servicessettingspage.cpp
    settings/settingspagebase.cpp
    settings/serviceitemdelegate.cpp
    settings/servicemodel.cpp)

set(kcm_dolphingeneral_PART_SRCS
    settings/kcm/kcmdolphingeneral.cpp
    settings/general/behaviorsettingspage.cpp
    settings/general/previewssettingspage.cpp
    settings/general/configurepreviewplugindialog.cpp
    settings/general/contextmenusettingspage.cpp
    settings/settingspagebase.cpp
    settings/serviceitemdelegate.cpp
    settings/servicemodel.cpp)

kconfig_add_kcfg_files(kcm_dolphinviewmodes_PART_SRCS
    settings/dolphin_columnmodesettings.kcfgc
    settings/dolphin_directoryviewpropertysettings.kcfgc
    settings/dolphin_detailsmodesettings.kcfgc
    settings/dolphin_iconsmodesettings.kcfgc
    settings/dolphin_generalsettings.kcfgc
    settings/dolphin_versioncontrolsettings.kcfgc
)

kconfig_add_kcfg_files(kcm_dolphinnavigation_PART_SRCS
    settings/dolphin_generalsettings.kcfgc)

kconfig_add_kcfg_files(kcm_dolphinservices_PART_SRCS
    settings/dolphin_generalsettings.kcfgc
    settings/dolphin_versioncontrolsettings.kcfgc)

kconfig_add_kcfg_files(kcm_dolphingeneral_PART_SRCS
    settings/dolphin_generalsettings.kcfgc)

add_library(kcm_dolphinviewmodes MODULE ${kcm_dolphinviewmodes_PART_SRCS})
add_library(kcm_dolphinnavigation MODULE ${kcm_dolphinnavigation_PART_SRCS})
add_library(kcm_dolphinservices MODULE ${kcm_dolphinservices_PART_SRCS})
add_library(kcm_dolphingeneral MODULE ${kcm_dolphingeneral_PART_SRCS})

target_link_libraries(kcm_dolphinviewmodes dolphinprivate)
target_link_libraries(kcm_dolphinnavigation dolphinprivate)
target_link_libraries(kcm_dolphinservices dolphinprivate)
target_link_libraries(kcm_dolphingeneral dolphinprivate)

if (Nepomuk_FOUND)
  target_link_libraries(kcm_dolphinviewmodes dolphinprivate ${NEPOMUK_LIBRARIES})
  target_link_libraries(kcm_dolphinnavigation dolphinprivate ${NEPOMUK_LIBRARIES})
  target_link_libraries(kcm_dolphinservices dolphinprivate ${NEPOMUK_LIBRARIES})
  target_link_libraries(kcm_dolphingeneral dolphinprivate ${NEPOMUK_LIBRARIES})
endif (Nepomuk_FOUND)

install(TARGETS kcm_dolphinviewmodes DESTINATION ${KDE_INSTALL_PLUGINDIR} )
install(TARGETS kcm_dolphinnavigation DESTINATION ${KDE_INSTALL_PLUGINDIR} )
install(TARGETS kcm_dolphinservices DESTINATION ${KDE_INSTALL_PLUGINDIR} )
install(TARGETS kcm_dolphingeneral DESTINATION ${KDE_INSTALL_PLUGINDIR} )

#########################################

# TODO: disabled for now
# set(kio_search_PART_SRCS
#     search/filenamesearchprotocol.cpp)
# kde4_add_plugin(kio_filenamesearch ${kio_search_PART_SRCS})
# target_link_libraries(kio_filenamesearch ${KDE4_KIO_LIBS})
# install(TARGETS kio_filenamesearch DESTINATION ${PLUGIN_INSTALL_DIR})

########### install files ###############

install( PROGRAMS org.kde.dolphin.desktop DESTINATION ${KDE_INSTALL_APPDIR} )
install( FILES settings/dolphin_directoryviewpropertysettings.kcfg
               settings/dolphin_generalsettings.kcfg
               settings/dolphin_columnmodesettings.kcfg
               settings/dolphin_iconsmodesettings.kcfg
               settings/dolphin_detailsmodesettings.kcfg
               settings/dolphin_versioncontrolsettings.kcfg
         DESTINATION ${KDE_INSTALL_KCFGDIR} )
install( FILES org.kde.dolphin.appdata.xml DESTINATION ${KDE_INSTALL_METAINFODIR} )
install( FILES dolphinui.rc DESTINATION ${DATA_INSTALL_DIR}/dolphin )
install( FILES search/filenamesearch.protocol DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES settings/kcm/kcmdolphinviewmodes.desktop DESTINATION
${KDE_INSTALL_KSERVICES5DIR} )
install( FILES settings/kcm/kcmdolphinnavigation.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES settings/kcm/kcmdolphinservices.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES settings/kcm/kcmdolphingeneral.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES settings/services/servicemenu.knsrc DESTINATION ${CONFIG_INSTALL_DIR} )
install( PROGRAMS settings/services/servicemenuinstallation DESTINATION ${BIN_INSTALL_DIR} )
install( PROGRAMS settings/services/servicemenudeinstallation DESTINATION ${BIN_INSTALL_DIR} )
