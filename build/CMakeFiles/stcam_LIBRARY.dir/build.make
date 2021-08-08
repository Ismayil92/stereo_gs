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
CMAKE_SOURCE_DIR = /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build

# Include any dependencies generated for this target.
include CMakeFiles/stcam_LIBRARY.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stcam_LIBRARY.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stcam_LIBRARY.dir/flags.make

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o: CMakeFiles/stcam_LIBRARY.dir/flags.make
CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o: ../src/camera_config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o -c /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/camera_config.cpp

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/camera_config.cpp > CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.i

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/camera_config.cpp -o CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.s

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.requires:

.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.requires

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.provides: CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.requires
	$(MAKE) -f CMakeFiles/stcam_LIBRARY.dir/build.make CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.provides.build
.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.provides

CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.provides.build: CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o


CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o: CMakeFiles/stcam_LIBRARY.dir/flags.make
CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o: ../src/disparity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o -c /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/disparity.cpp

CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/disparity.cpp > CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.i

CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/disparity.cpp -o CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.s

CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.requires:

.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.requires

CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.provides: CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.requires
	$(MAKE) -f CMakeFiles/stcam_LIBRARY.dir/build.make CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.provides.build
.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.provides

CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.provides.build: CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o


CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o: CMakeFiles/stcam_LIBRARY.dir/flags.make
CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o: ../src/main_window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o -c /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/main_window.cpp

CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/main_window.cpp > CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.i

CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/src/main_window.cpp -o CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.s

CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.requires:

.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.requires

CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.provides: CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.requires
	$(MAKE) -f CMakeFiles/stcam_LIBRARY.dir/build.make CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.provides.build
.PHONY : CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.provides

CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.provides.build: CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o


CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o: CMakeFiles/stcam_LIBRARY.dir/flags.make
CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o: stcam_LIBRARY_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o -c /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/stcam_LIBRARY_autogen/mocs_compilation.cpp

CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/stcam_LIBRARY_autogen/mocs_compilation.cpp > CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.i

CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/stcam_LIBRARY_autogen/mocs_compilation.cpp -o CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.s

CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/stcam_LIBRARY.dir/build.make CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o


# Object files for target stcam_LIBRARY
stcam_LIBRARY_OBJECTS = \
"CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o" \
"CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o" \
"CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o" \
"CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o"

# External object files for target stcam_LIBRARY
stcam_LIBRARY_EXTERNAL_OBJECTS =

libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o
libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o
libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o
libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o
libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/build.make
libstcam_LIBRARY.a: CMakeFiles/stcam_LIBRARY.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libstcam_LIBRARY.a"
	$(CMAKE_COMMAND) -P CMakeFiles/stcam_LIBRARY.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stcam_LIBRARY.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stcam_LIBRARY.dir/build: libstcam_LIBRARY.a

.PHONY : CMakeFiles/stcam_LIBRARY.dir/build

CMakeFiles/stcam_LIBRARY.dir/requires: CMakeFiles/stcam_LIBRARY.dir/src/camera_config.cpp.o.requires
CMakeFiles/stcam_LIBRARY.dir/requires: CMakeFiles/stcam_LIBRARY.dir/src/disparity.cpp.o.requires
CMakeFiles/stcam_LIBRARY.dir/requires: CMakeFiles/stcam_LIBRARY.dir/src/main_window.cpp.o.requires
CMakeFiles/stcam_LIBRARY.dir/requires: CMakeFiles/stcam_LIBRARY.dir/stcam_LIBRARY_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/stcam_LIBRARY.dir/requires

CMakeFiles/stcam_LIBRARY.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stcam_LIBRARY.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stcam_LIBRARY.dir/clean

CMakeFiles/stcam_LIBRARY.dir/depend:
	cd /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build /home/jetson-ismayil/Embedded-Projects/Read_CSI_Camera/build/CMakeFiles/stcam_LIBRARY.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stcam_LIBRARY.dir/depend
