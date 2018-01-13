# Install script for directory: /home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so.5.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/local/lib64")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/libdolphinvcs.so.5.0.0"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/libdolphinvcs.so.5"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/libdolphinvcs.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so.5.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinvcs.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::::"
           NEW_RPATH "/usr/local/lib64")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservicetypes5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/views/versioncontrol/fileviewversioncontrolplugin.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphinvcs_export.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Dolphin" TYPE FILE FILES
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/KVersionControlPlugin"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/views/versioncontrol/kversioncontrolplugin.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/libdolphinprivate.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinprivate.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinprivate.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libdolphinprivate.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin_export.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/plugins" TYPE MODULE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphinpart.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/dolphinpart.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/org.freedesktop.FileManager1.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/libkdeinit5_dolphin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkdeinit5_dolphin.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dolphin")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/plugins" TYPE MODULE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphinviewmodes.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinviewmodes.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/plugins" TYPE MODULE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphinnavigation.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinnavigation.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/plugins" TYPE MODULE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphinservices.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphinservices.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/plugins" TYPE MODULE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphingeneral.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so"
         OLD_RPATH "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src:"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/plugins/kcm_dolphingeneral.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE PROGRAM FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/org.kde.dolphin.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_directoryviewpropertysettings.kcfg"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_generalsettings.kcfg"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_columnmodesettings.kcfg"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_iconsmodesettings.kcfg"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_detailsmodesettings.kcfg"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/dolphin_versioncontrolsettings.kcfg"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/org.kde.dolphin.appdata.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dolphin" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinui.rc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/search/filenamesearch.protocol")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphinviewmodes.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphinnavigation.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphinservices.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphingeneral.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg" TYPE FILE FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/services/servicemenu.knsrc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/services/servicemenuinstallation")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dolphin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/services/servicemenudeinstallation")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests/cmake_install.cmake")

endif()

