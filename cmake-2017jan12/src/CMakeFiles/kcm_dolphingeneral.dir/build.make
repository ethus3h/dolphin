# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12"

# Include any dependencies generated for this target.
include src/CMakeFiles/kcm_dolphingeneral.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/kcm_dolphingeneral.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/kcm_dolphingeneral.dir/flags.make

src/dolphin_generalsettings.moc: src/dolphin_generalsettings.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating dolphin_generalsettings.moc"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/lib64/qt5/bin/moc "@/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin_generalsettings.moc_parameters"

src/dolphin_generalsettings.h: ../src/settings/dolphin_generalsettings.kcfg
src/dolphin_generalsettings.h: ../src/settings/dolphin_generalsettings.kcfgc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Generating dolphin_generalsettings.h, dolphin_generalsettings.cpp"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/lib64/libexec/kf5/kconfig_compiler_kf5 /home/kyan/Ember\ Library/Ember\ satellite\ projects/wreathe-file-manager/src/settings/dolphin_generalsettings.kcfg /home/kyan/Ember\ Library/Ember\ satellite\ projects/wreathe-file-manager/src/settings/dolphin_generalsettings.kcfgc -d /home/kyan/Ember\ Library/Ember\ satellite\ projects/wreathe-file-manager/cmake-2017jan12/src/

src/dolphin_generalsettings.cpp: src/dolphin_generalsettings.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/dolphin_generalsettings.cpp

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o: ../src/settings/kcm/kcmdolphingeneral.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphingeneral.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphingeneral.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/kcm/kcmdolphingeneral.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o: ../src/settings/general/behaviorsettingspage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/behaviorsettingspage.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/behaviorsettingspage.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/behaviorsettingspage.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o: ../src/settings/general/previewssettingspage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/previewssettingspage.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/previewssettingspage.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/previewssettingspage.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o: ../src/settings/general/configurepreviewplugindialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/configurepreviewplugindialog.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/configurepreviewplugindialog.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/configurepreviewplugindialog.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o: ../src/settings/general/confirmationssettingspage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/confirmationssettingspage.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/confirmationssettingspage.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/general/confirmationssettingspage.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o: ../src/settings/settingspagebase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/settingspagebase.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/settingspagebase.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/settingspagebase.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o: ../src/settings/serviceitemdelegate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/serviceitemdelegate.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/serviceitemdelegate.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/serviceitemdelegate.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o: ../src/settings/servicemodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/servicemodel.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/servicemodel.cpp" > CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/settings/servicemodel.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o: src/dolphin_generalsettings.cpp
src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o: src/dolphin_generalsettings.moc
src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o: src/dolphin_generalsettings.moc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin_generalsettings.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin_generalsettings.cpp" > CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphin_generalsettings.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o


src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o: src/CMakeFiles/kcm_dolphingeneral.dir/flags.make
src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o: src/kcm_dolphingeneral_autogen/moc_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphingeneral_autogen/moc_compilation.cpp"

src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphingeneral_autogen/moc_compilation.cpp" > CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.i

src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/kcm_dolphingeneral_autogen/moc_compilation.cpp" -o CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.s

src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.requires:

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.requires

src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.provides: src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/kcm_dolphingeneral.dir/build.make src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.provides.build
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.provides

src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.provides.build: src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o


# Object files for target kcm_dolphingeneral
kcm_dolphingeneral_OBJECTS = \
"CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o" \
"CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o"

# External object files for target kcm_dolphingeneral
kcm_dolphingeneral_EXTERNAL_OBJECTS =

src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/build.make
src/kcm_dolphingeneral.so: src/CMakeFiles/kcm_dolphingeneral.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared module kcm_dolphingeneral.so"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcm_dolphingeneral.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/kcm_dolphingeneral.dir/build: src/kcm_dolphingeneral.so

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/build

src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/kcm/kcmdolphingeneral.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/behaviorsettingspage.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/previewssettingspage.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/configurepreviewplugindialog.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/general/confirmationssettingspage.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/settingspagebase.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/serviceitemdelegate.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/settings/servicemodel.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/dolphin_generalsettings.cpp.o.requires
src/CMakeFiles/kcm_dolphingeneral.dir/requires: src/CMakeFiles/kcm_dolphingeneral.dir/kcm_dolphingeneral_autogen/moc_compilation.cpp.o.requires

.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/requires

src/CMakeFiles/kcm_dolphingeneral.dir/clean:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && $(CMAKE_COMMAND) -P CMakeFiles/kcm_dolphingeneral.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/clean

src/CMakeFiles/kcm_dolphingeneral.dir/depend: src/dolphin_generalsettings.moc
src/CMakeFiles/kcm_dolphingeneral.dir/depend: src/dolphin_generalsettings.h
src/CMakeFiles/kcm_dolphingeneral.dir/depend: src/dolphin_generalsettings.cpp
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/CMakeFiles/kcm_dolphingeneral.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/kcm_dolphingeneral.dir/depend

