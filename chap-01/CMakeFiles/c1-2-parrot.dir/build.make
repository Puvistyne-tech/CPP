# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.23.1_1/bin/cmake

# The command to remove a file.
RM = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.23.1_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/CPP

# Include any dependencies generated for this target.
include chap-01/CMakeFiles/c1-2-parrot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include chap-01/CMakeFiles/c1-2-parrot.dir/compiler_depend.make

# Include the progress variables for this target.
include chap-01/CMakeFiles/c1-2-parrot.dir/progress.make

# Include the compile flags for this target's objects.
include chap-01/CMakeFiles/c1-2-parrot.dir/flags.make

chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o: chap-01/CMakeFiles/c1-2-parrot.dir/flags.make
chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o: chap-01/2-parrot.cpp
chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o: chap-01/CMakeFiles/c1-2-parrot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o"
	cd /workspace/CPP/chap-01 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o -MF CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o.d -o CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o -c /workspace/CPP/chap-01/2-parrot.cpp

chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.i"
	cd /workspace/CPP/chap-01 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/CPP/chap-01/2-parrot.cpp > CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.i

chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.s"
	cd /workspace/CPP/chap-01 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/CPP/chap-01/2-parrot.cpp -o CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.s

# Object files for target c1-2-parrot
c1__2__parrot_OBJECTS = \
"CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o"

# External object files for target c1-2-parrot
c1__2__parrot_EXTERNAL_OBJECTS =

chap-01/c1-2-parrot: chap-01/CMakeFiles/c1-2-parrot.dir/2-parrot.cpp.o
chap-01/c1-2-parrot: chap-01/CMakeFiles/c1-2-parrot.dir/build.make
chap-01/c1-2-parrot: chap-01/CMakeFiles/c1-2-parrot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c1-2-parrot"
	cd /workspace/CPP/chap-01 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c1-2-parrot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chap-01/CMakeFiles/c1-2-parrot.dir/build: chap-01/c1-2-parrot
.PHONY : chap-01/CMakeFiles/c1-2-parrot.dir/build

chap-01/CMakeFiles/c1-2-parrot.dir/clean:
	cd /workspace/CPP/chap-01 && $(CMAKE_COMMAND) -P CMakeFiles/c1-2-parrot.dir/cmake_clean.cmake
.PHONY : chap-01/CMakeFiles/c1-2-parrot.dir/clean

chap-01/CMakeFiles/c1-2-parrot.dir/depend:
	cd /workspace/CPP && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/CPP /workspace/CPP/chap-01 /workspace/CPP /workspace/CPP/chap-01 /workspace/CPP/chap-01/CMakeFiles/c1-2-parrot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chap-01/CMakeFiles/c1-2-parrot.dir/depend

