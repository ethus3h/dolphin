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
include src/CMakeFiles/dolphinpart.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/dolphinpart.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/dolphinpart.dir/flags.make

src/qrc_dolphinpart.cpp: ../src/dolphinpart.rc
src/qrc_dolphinpart.cpp: ../src/dolphinpart.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_dolphinpart.cpp"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/lib64/qt5/bin/rcc --name dolphinpart --output "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/qrc_dolphinpart.cpp" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart.qrc"

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o: src/CMakeFiles/dolphinpart.dir/flags.make
src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o: ../src/dolphinpart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart.cpp"

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dolphinpart.dir/dolphinpart.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart.cpp" > CMakeFiles/dolphinpart.dir/dolphinpart.cpp.i

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dolphinpart.dir/dolphinpart.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart.cpp" -o CMakeFiles/dolphinpart.dir/dolphinpart.cpp.s

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.requires:

.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.requires

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.provides: src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/dolphinpart.dir/build.make src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.provides.build
.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.provides

src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.provides.build: src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o


src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o: src/CMakeFiles/dolphinpart.dir/flags.make
src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o: ../src/dolphinpart_ext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart_ext.cpp"

src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart_ext.cpp" > CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.i

src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphinpart_ext.cpp" -o CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.s

src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.requires:

.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.requires

src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.provides: src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/dolphinpart.dir/build.make src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.provides.build
.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.provides

src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.provides.build: src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o


src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o: src/CMakeFiles/dolphinpart.dir/flags.make
src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o: ../src/dolphindebug.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphindebug.cpp"

src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dolphinpart.dir/dolphindebug.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphindebug.cpp" > CMakeFiles/dolphinpart.dir/dolphindebug.cpp.i

src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dolphinpart.dir/dolphindebug.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/dolphindebug.cpp" -o CMakeFiles/dolphinpart.dir/dolphindebug.cpp.s

src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.requires:

.PHONY : src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.requires

src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.provides: src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/dolphinpart.dir/build.make src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.provides.build
.PHONY : src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.provides

src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.provides.build: src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o


src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o: src/CMakeFiles/dolphinpart.dir/flags.make
src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o: src/qrc_dolphinpart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/qrc_dolphinpart.cpp"

src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/qrc_dolphinpart.cpp" > CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.i

src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/qrc_dolphinpart.cpp" -o CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.s

src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.requires:

.PHONY : src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.requires

src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.provides: src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/dolphinpart.dir/build.make src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.provides.build
.PHONY : src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.provides

src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.provides.build: src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o


src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o: src/CMakeFiles/dolphinpart.dir/flags.make
src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o: src/dolphinpart_autogen/moc_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphinpart_autogen/moc_compilation.cpp"

src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphinpart_autogen/moc_compilation.cpp" > CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.i

src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/dolphinpart_autogen/moc_compilation.cpp" -o CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.s

src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.requires:

.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.requires

src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.provides: src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/dolphinpart.dir/build.make src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.provides.build
.PHONY : src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.provides

src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.provides.build: src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o


# Object files for target dolphinpart
dolphinpart_OBJECTS = \
"CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o" \
"CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o" \
"CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o" \
"CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o" \
"CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o"

# External object files for target dolphinpart
dolphinpart_EXTERNAL_OBJECTS =

src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/build.make
src/dolphinpart.so: src/CMakeFiles/dolphinpart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared module dolphinpart.so"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dolphinpart.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/dolphinpart.dir/build: src/dolphinpart.so

.PHONY : src/CMakeFiles/dolphinpart.dir/build

src/CMakeFiles/dolphinpart.dir/requires: src/CMakeFiles/dolphinpart.dir/dolphinpart.cpp.o.requires
src/CMakeFiles/dolphinpart.dir/requires: src/CMakeFiles/dolphinpart.dir/dolphinpart_ext.cpp.o.requires
src/CMakeFiles/dolphinpart.dir/requires: src/CMakeFiles/dolphinpart.dir/dolphindebug.cpp.o.requires
src/CMakeFiles/dolphinpart.dir/requires: src/CMakeFiles/dolphinpart.dir/qrc_dolphinpart.cpp.o.requires
src/CMakeFiles/dolphinpart.dir/requires: src/CMakeFiles/dolphinpart.dir/dolphinpart_autogen/moc_compilation.cpp.o.requires

.PHONY : src/CMakeFiles/dolphinpart.dir/requires

src/CMakeFiles/dolphinpart.dir/clean:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && $(CMAKE_COMMAND) -P CMakeFiles/dolphinpart.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/dolphinpart.dir/clean

src/CMakeFiles/dolphinpart.dir/depend: src/qrc_dolphinpart.cpp
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/CMakeFiles/dolphinpart.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/dolphinpart.dir/depend

