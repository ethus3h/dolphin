# Install script for directory: /home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/dolphin" TYPE FILE FILES
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/doc//index.cache.bz2"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./index.docbook"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./default-ui.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./grouping-view.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./locationbar-breadcrumb.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./locationbar-context-menu.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./locationbar-editable.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./locationbar-kioslaves-menu.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./locationbar-places-icon.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./nepomuk-search-more-options.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./nepomuk-search.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-general-behavior.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-navigation.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-services.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-startup.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-trash.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./preferences-viewmodes-icons.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./toolbar-navigation.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./toolbar-view-appearance.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./toolbar.png"
    "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/doc/./viewproperties-dialog.png"
    )
endif()

