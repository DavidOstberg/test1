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
CMAKE_SOURCE_DIR = /home/dostber1/projects/Mini_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dostber1/projects/Mini_Project/build

# Include any dependencies generated for this target.
include CMakeFiles/mini_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mini_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mini_project.dir/flags.make

CMakeFiles/mini_project.dir/main.cpp.o: CMakeFiles/mini_project.dir/flags.make
CMakeFiles/mini_project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dostber1/projects/Mini_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mini_project.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mini_project.dir/main.cpp.o -c /home/dostber1/projects/Mini_Project/main.cpp

CMakeFiles/mini_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mini_project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dostber1/projects/Mini_Project/main.cpp > CMakeFiles/mini_project.dir/main.cpp.i

CMakeFiles/mini_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mini_project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dostber1/projects/Mini_Project/main.cpp -o CMakeFiles/mini_project.dir/main.cpp.s

CMakeFiles/mini_project.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/mini_project.dir/main.cpp.o.requires

CMakeFiles/mini_project.dir/main.cpp.o.provides: CMakeFiles/mini_project.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/mini_project.dir/build.make CMakeFiles/mini_project.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/mini_project.dir/main.cpp.o.provides

CMakeFiles/mini_project.dir/main.cpp.o.provides.build: CMakeFiles/mini_project.dir/main.cpp.o


CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o: CMakeFiles/mini_project.dir/flags.make
CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o: ../src/PrintMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dostber1/projects/Mini_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o -c /home/dostber1/projects/Mini_Project/src/PrintMenu.cpp

CMakeFiles/mini_project.dir/src/PrintMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mini_project.dir/src/PrintMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dostber1/projects/Mini_Project/src/PrintMenu.cpp > CMakeFiles/mini_project.dir/src/PrintMenu.cpp.i

CMakeFiles/mini_project.dir/src/PrintMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mini_project.dir/src/PrintMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dostber1/projects/Mini_Project/src/PrintMenu.cpp -o CMakeFiles/mini_project.dir/src/PrintMenu.cpp.s

CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.requires:

.PHONY : CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.requires

CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.provides: CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.requires
	$(MAKE) -f CMakeFiles/mini_project.dir/build.make CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.provides.build
.PHONY : CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.provides

CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.provides.build: CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o


CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o: CMakeFiles/mini_project.dir/flags.make
CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o: ../src/ReadMenuInput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dostber1/projects/Mini_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o -c /home/dostber1/projects/Mini_Project/src/ReadMenuInput.cpp

CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dostber1/projects/Mini_Project/src/ReadMenuInput.cpp > CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.i

CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dostber1/projects/Mini_Project/src/ReadMenuInput.cpp -o CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.s

CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.requires:

.PHONY : CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.requires

CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.provides: CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.requires
	$(MAKE) -f CMakeFiles/mini_project.dir/build.make CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.provides.build
.PHONY : CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.provides

CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.provides.build: CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o


# Object files for target mini_project
mini_project_OBJECTS = \
"CMakeFiles/mini_project.dir/main.cpp.o" \
"CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o" \
"CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o"

# External object files for target mini_project
mini_project_EXTERNAL_OBJECTS =

mini_project: CMakeFiles/mini_project.dir/main.cpp.o
mini_project: CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o
mini_project: CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o
mini_project: CMakeFiles/mini_project.dir/build.make
mini_project: CMakeFiles/mini_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dostber1/projects/Mini_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable mini_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mini_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mini_project.dir/build: mini_project

.PHONY : CMakeFiles/mini_project.dir/build

CMakeFiles/mini_project.dir/requires: CMakeFiles/mini_project.dir/main.cpp.o.requires
CMakeFiles/mini_project.dir/requires: CMakeFiles/mini_project.dir/src/PrintMenu.cpp.o.requires
CMakeFiles/mini_project.dir/requires: CMakeFiles/mini_project.dir/src/ReadMenuInput.cpp.o.requires

.PHONY : CMakeFiles/mini_project.dir/requires

CMakeFiles/mini_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mini_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mini_project.dir/clean

CMakeFiles/mini_project.dir/depend:
	cd /home/dostber1/projects/Mini_Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dostber1/projects/Mini_Project /home/dostber1/projects/Mini_Project /home/dostber1/projects/Mini_Project/build /home/dostber1/projects/Mini_Project/build /home/dostber1/projects/Mini_Project/build/CMakeFiles/mini_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mini_project.dir/depend
