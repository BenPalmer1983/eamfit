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
include lib/configs/CMakeFiles/make_crystal.dev.x.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/configs/CMakeFiles/make_crystal.dev.x.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/configs/CMakeFiles/make_crystal.dev.x.dir/progress.make

# Include the compile flags for this target's objects.
include lib/configs/CMakeFiles/make_crystal.dev.x.dir/flags.make

lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o: lib/configs/CMakeFiles/make_crystal.dev.x.dir/flags.make
lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o: /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/configs/configs.Make_Crystal.dev.cpp
lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o: lib/configs/CMakeFiles/make_crystal.dev.x.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/DATA/disk3/cloud/Code/cpp/eamfit++/build_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o -MF CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o.d -o CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o -c /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/configs/configs.Make_Crystal.dev.cpp

lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.i"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/configs/configs.Make_Crystal.dev.cpp > CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.i

lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.s"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/configs/configs.Make_Crystal.dev.cpp -o CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.s

# Object files for target make_crystal.dev.x
make_crystal_dev_x_OBJECTS = \
"CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o"

# External object files for target make_crystal.dev.x
make_crystal_dev_x_EXTERNAL_OBJECTS =

/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x: lib/configs/CMakeFiles/make_crystal.dev.x.dir/configs.Make_Crystal.dev.cpp.o
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x: lib/configs/CMakeFiles/make_crystal.dev.x.dir/build.make
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x: ../lib/libconfigs.a
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x: ../lib/libcore.a
/DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x: lib/configs/CMakeFiles/make_crystal.dev.x.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/DATA/disk3/cloud/Code/cpp/eamfit++/build_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x"
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/make_crystal.dev.x.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/configs/CMakeFiles/make_crystal.dev.x.dir/build: /DATA/disk3/cloud/Code/cpp/eamfit++/tests/bin/make_crystal.dev.x
.PHONY : lib/configs/CMakeFiles/make_crystal.dev.x.dir/build

lib/configs/CMakeFiles/make_crystal.dev.x.dir/clean:
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs && $(CMAKE_COMMAND) -P CMakeFiles/make_crystal.dev.x.dir/cmake_clean.cmake
.PHONY : lib/configs/CMakeFiles/make_crystal.dev.x.dir/clean

lib/configs/CMakeFiles/make_crystal.dev.x.dir/depend:
	cd /DATA/disk3/cloud/Code/cpp/eamfit++/build_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /DATA/disk3/cloud/Code/cpp/eamfit++/src_test /DATA/disk3/cloud/Code/cpp/eamfit++/src_test/lib/configs /DATA/disk3/cloud/Code/cpp/eamfit++/build_test /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs /DATA/disk3/cloud/Code/cpp/eamfit++/build_test/lib/configs/CMakeFiles/make_crystal.dev.x.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/configs/CMakeFiles/make_crystal.dev.x.dir/depend

