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
include CMakeFiles/tdcr_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tdcr_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tdcr_test.dir/flags.make

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o: CMakeFiles/tdcr_test.dir/flags.make
CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o: ../tests/tdcr_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jerluen/tdcr-crt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o -c /home/jerluen/tdcr-crt/tests/tdcr_test.cpp

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jerluen/tdcr-crt/tests/tdcr_test.cpp > CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.i

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jerluen/tdcr-crt/tests/tdcr_test.cpp -o CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.s

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.requires:

.PHONY : CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.requires

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.provides: CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/tdcr_test.dir/build.make CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.provides.build
.PHONY : CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.provides

CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.provides.build: CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o


# Object files for target tdcr_test
tdcr_test_OBJECTS = \
"CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o"

# External object files for target tdcr_test
tdcr_test_EXTERNAL_OBJECTS =

../bin/tdcr_test: CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o
../bin/tdcr_test: CMakeFiles/tdcr_test.dir/build.make
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libpython3.7m.so
../bin/tdcr_test: ../lib/static/libMultistageTDCR_Solver.a
../bin/tdcr_test: ../../acados/lib/libacados.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_integrator1.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_integrator2.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_step_integrator1.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_step_integrator2.so
../bin/tdcr_test: ../lib/static/libIntegrator.a
../bin/tdcr_test: ../lib/static/libIntegratorInterface.a
../bin/tdcr_test: ../lib/static/libLevenbergMarquardt.a
../bin/tdcr_test: ../lib/static/libMathUtils.a
../bin/tdcr_test: ../lib/static/libMultistageTDCR_Solver.a
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_log.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libpython3.7m.so
../bin/tdcr_test: ../../acados/lib/libacados.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_integrator1.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_integrator2.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_step_integrator1.so
../bin/tdcr_test: ../lib/shared/libacados_sim_solver_multistage_straight_step_integrator2.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_thread.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/tdcr_test: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
../bin/tdcr_test: CMakeFiles/tdcr_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jerluen/tdcr-crt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/tdcr_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tdcr_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tdcr_test.dir/build: ../bin/tdcr_test

.PHONY : CMakeFiles/tdcr_test.dir/build

CMakeFiles/tdcr_test.dir/requires: CMakeFiles/tdcr_test.dir/tests/tdcr_test.cpp.o.requires

.PHONY : CMakeFiles/tdcr_test.dir/requires

CMakeFiles/tdcr_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tdcr_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tdcr_test.dir/clean

CMakeFiles/tdcr_test.dir/depend:
	cd /home/jerluen/tdcr-crt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jerluen/tdcr-crt /home/jerluen/tdcr-crt /home/jerluen/tdcr-crt/build /home/jerluen/tdcr-crt/build /home/jerluen/tdcr-crt/build/CMakeFiles/tdcr_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tdcr_test.dir/depend

