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
include chap-02/CMakeFiles/c2-5-polygon.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include chap-02/CMakeFiles/c2-5-polygon.dir/compiler_depend.make

# Include the progress variables for this target.
include chap-02/CMakeFiles/c2-5-polygon.dir/progress.make

# Include the compile flags for this target's objects.
include chap-02/CMakeFiles/c2-5-polygon.dir/flags.make

chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o: chap-02/CMakeFiles/c2-5-polygon.dir/flags.make
chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o: chap-02/5-polygon/main.cpp
chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o: chap-02/CMakeFiles/c2-5-polygon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o"
	cd /workspace/CPP/chap-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o -MF CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o.d -o CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o -c /workspace/CPP/chap-02/5-polygon/main.cpp

chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.i"
	cd /workspace/CPP/chap-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/CPP/chap-02/5-polygon/main.cpp > CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.i

chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.s"
	cd /workspace/CPP/chap-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/CPP/chap-02/5-polygon/main.cpp -o CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.s

# Object files for target c2-5-polygon
c2__5__polygon_OBJECTS = \
"CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o"

# External object files for target c2-5-polygon
c2__5__polygon_EXTERNAL_OBJECTS =

chap-02/c2-5-polygon: chap-02/CMakeFiles/c2-5-polygon.dir/5-polygon/main.cpp.o
chap-02/c2-5-polygon: chap-02/CMakeFiles/c2-5-polygon.dir/build.make
chap-02/c2-5-polygon: chap-02/CMakeFiles/c2-5-polygon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c2-5-polygon"
	cd /workspace/CPP/chap-02 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c2-5-polygon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chap-02/CMakeFiles/c2-5-polygon.dir/build: chap-02/c2-5-polygon
.PHONY : chap-02/CMakeFiles/c2-5-polygon.dir/build

chap-02/CMakeFiles/c2-5-polygon.dir/clean:
	cd /workspace/CPP/chap-02 && $(CMAKE_COMMAND) -P CMakeFiles/c2-5-polygon.dir/cmake_clean.cmake
.PHONY : chap-02/CMakeFiles/c2-5-polygon.dir/clean

chap-02/CMakeFiles/c2-5-polygon.dir/depend:
	cd /workspace/CPP && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/CPP /workspace/CPP/chap-02 /workspace/CPP /workspace/CPP/chap-02 /workspace/CPP/chap-02/CMakeFiles/c2-5-polygon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chap-02/CMakeFiles/c2-5-polygon.dir/depend

