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

# Utility rule file for kdeinit_dolphin_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/kdeinit_dolphin_autogen.dir/progress.make

src/CMakeFiles/kdeinit_dolphin_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target kdeinit_dolphin"
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && /usr/bin/cmake -E cmake_autogen "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/CMakeFiles/kdeinit_dolphin_autogen.dir/" ""

kdeinit_dolphin_autogen: src/CMakeFiles/kdeinit_dolphin_autogen
kdeinit_dolphin_autogen: src/CMakeFiles/kdeinit_dolphin_autogen.dir/build.make

.PHONY : kdeinit_dolphin_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/kdeinit_dolphin_autogen.dir/build: kdeinit_dolphin_autogen

.PHONY : src/CMakeFiles/kdeinit_dolphin_autogen.dir/build

src/CMakeFiles/kdeinit_dolphin_autogen.dir/clean:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" && $(CMAKE_COMMAND) -P CMakeFiles/kdeinit_dolphin_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/kdeinit_dolphin_autogen.dir/clean

src/CMakeFiles/kdeinit_dolphin_autogen.dir/depend:
	cd "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src" "/home/kyan/Ember Library/Ember satellite projects/wreathe-file-manager/cmake-2017jan12/src/CMakeFiles/kdeinit_dolphin_autogen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/kdeinit_dolphin_autogen.dir/depend

