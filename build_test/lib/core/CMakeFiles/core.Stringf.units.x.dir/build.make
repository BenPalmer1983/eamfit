# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /DATA/disk3/cloud/Code/cpp/eamfit++/src_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /DATA/disk3/cloud/Code/cpp/eamfit++/build_test

# Include any dependencies generated for this target.
include lib/core/CMakeFiles/core.Stringf.units.x.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/core/CMakeFiles/core.Stringf.units.x.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/core/CMakeFiles/core.Stringf.units.x.dir/progress.make

# Include the compile flags for this target's objects.
include lib/core/CMakeFiles/core.Stringf.units.x.dir/flags.make

lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o: lib/core/CMakeFiles/core.Stringf.units.x.dir/flags.make
lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o: /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/core/core.Stringf.units.cpp
lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o: lib/core/CMakeFiles/core.Stringf.units.x.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/DATA/disk3/cloud/Code/cpp/eamfit++/build_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o -MF CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o.d -o CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o -c /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/core/core.Stringf.units.cpp

lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.i"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/core/core.Stringf.units.cpp > CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.i

lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.s"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/core/core.Stringf.units.cpp -o CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.s

# Object files for target core.Stringf.units.x
core_Stringf_units_x_OBJECTS = \
"CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o"

# External object files for target core.Stringf.units.x
core_Stringf_units_x_EXTERNAL_OBJECTS =

/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x: lib/core/CMakeFiles/core.Stringf.units.x.dir/core.Stringf.units.cpp.o
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x: lib/core/CMakeFiles/core.Stringf.units.x.dir/build.make
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x: ../lib/libtester.a
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x: ../lib/libcore.a
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x: lib/core/CMakeFiles/core.Stringf.units.x.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/DATA/disk3/cloud/Code/cpp/eamfit++/build_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core.Stringf.units.x.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/core/CMakeFiles/core.Stringf.units.x.dir/build: /DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/core.Stringf.units.x
.PHONY : lib/core/CMakeFiles/core.Stringf.units.x.dir/build

lib/core/CMakeFiles/core.Stringf.units.x.dir/clean:
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core && $(CMAKE_COMMAND) -P CMakeFiles/core.Stringf.units.x.dir/cmake_clean.cmake
.PHONY : lib/core/CMakeFiles/core.Stringf.units.x.dir/clean

lib/core/CMakeFiles/core.Stringf.units.x.dir/depend:
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /DATA/disk3/cloud/Code/cpp/eamfit++/src_test /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/core /DATA/disk3/cloud/Code/cpp/eamfit++/build_test /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/core/CMakeFiles/core.Stringf.units.x.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/core/CMakeFiles/core.Stringf.units.x.dir/depend

