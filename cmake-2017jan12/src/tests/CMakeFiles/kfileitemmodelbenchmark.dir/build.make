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
include src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/depend.make

# Include the progress variables for this target.
include src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/progress.make

# Include the compile flags for this target's objects.
include src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/flags.make

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/flags.make
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o: ../src/tests/kfileitemmodelbenchmark.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/kfileitemmodelbenchmark.cpp"

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/kfileitemmodelbenchmark.cpp" > CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.i

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/kfileitemmodelbenchmark.cpp" -o CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.s

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.requires:

.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.requires

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.provides: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.requires
	$(MAKE) -f src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build.make src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.provides.build
.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.provides

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.provides.build: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o


src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/flags.make
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o: ../src/tests/testdir.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/testdir.cpp"

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/testdir.cpp" > CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.i

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests/testdir.cpp" -o CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.s

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.requires:

.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.requires

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.provides: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.requires
	$(MAKE) -f src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build.make src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.provides.build
.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.provides

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.provides.build: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o


src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/flags.make
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o: src/tests/kfileitemmodelbenchmark_autogen/moc_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o -c "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests/kfileitemmodelbenchmark_autogen/moc_compilation.cpp"

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.i"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests/kfileitemmodelbenchmark_autogen/moc_compilation.cpp" > CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.i

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.s"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests/kfileitemmodelbenchmark_autogen/moc_compilation.cpp" -o CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.s

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.requires:

.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.requires

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.provides: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.requires
	$(MAKE) -f src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build.make src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.provides.build
.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.provides

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.provides.build: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o


# Object files for target kfileitemmodelbenchmark
kfileitemmodelbenchmark_OBJECTS = \
"CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o" \
"CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o" \
"CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o"

# External object files for target kfileitemmodelbenchmark
kfileitemmodelbenchmark_EXTERNAL_OBJECTS =

src/tests/kfileitemmodelbenchmark: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o
src/tests/kfileitemmodelbenchmark: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o
src/tests/kfileitemmodelbenchmark: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o
src/tests/kfileitemmodelbenchmark: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build.make
src/tests/kfileitemmodelbenchmark: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable kfileitemmodelbenchmark"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kfileitemmodelbenchmark.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build: src/tests/kfileitemmodelbenchmark

.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/build

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/requires: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark.cpp.o.requires
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/requires: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/testdir.cpp.o.requires
src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/requires: src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/kfileitemmodelbenchmark_autogen/moc_compilation.cpp.o.requires

.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/requires

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/clean:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" && $(CMAKE_COMMAND) -P CMakeFiles/kfileitemmodelbenchmark.dir/cmake_clean.cmake
.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/clean

src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/depend:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src/tests" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/tests/CMakeFiles/kfileitemmodelbenchmark.dir/depend

