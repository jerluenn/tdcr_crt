# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/jerluen/tdcr-crt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jerluen/tdcr-crt/build

# Include any dependencies generated for this target.
include CMakeFiles/MathUtils.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MathUtils.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MathUtils.dir/flags.make

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o: CMakeFiles/MathUtils.dir/flags.make
CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o: ../utils/MathUtils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jerluen/tdcr-crt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o -c /home/jerluen/tdcr-crt/utils/MathUtils.cpp

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jerluen/tdcr-crt/utils/MathUtils.cpp > CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.i

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jerluen/tdcr-crt/utils/MathUtils.cpp -o CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.s

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.requires:

.PHONY : CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.requires

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.provides: CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.requires
	$(MAKE) -f CMakeFiles/MathUtils.dir/build.make CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.provides.build
.PHONY : CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.provides

CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.provides.build: CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o


# Object files for target MathUtils
MathUtils_OBJECTS = \
"CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o"

# External object files for target MathUtils
MathUtils_EXTERNAL_OBJECTS =

../lib/static/libMathUtils.a: CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o
../lib/static/libMathUtils.a: CMakeFiles/MathUtils.dir/build.make
../lib/static/libMathUtils.a: CMakeFiles/MathUtils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jerluen/tdcr-crt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../lib/static/libMathUtils.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MathUtils.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathUtils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MathUtils.dir/build: ../lib/static/libMathUtils.a

.PHONY : CMakeFiles/MathUtils.dir/build

CMakeFiles/MathUtils.dir/requires: CMakeFiles/MathUtils.dir/utils/MathUtils.cpp.o.requires

.PHONY : CMakeFiles/MathUtils.dir/requires

CMakeFiles/MathUtils.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MathUtils.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MathUtils.dir/clean

CMakeFiles/MathUtils.dir/depend:
	cd /home/jerluen/tdcr-crt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jerluen/tdcr-crt /home/jerluen/tdcr-crt /home/jerluen/tdcr-crt/build /home/jerluen/tdcr-crt/build /home/jerluen/tdcr-crt/build/CMakeFiles/MathUtils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MathUtils.dir/depend

