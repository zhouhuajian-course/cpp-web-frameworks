# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/cmake-3.26.3-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.26.3-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build

# Include any dependencies generated for this target.
include CMakeFiles/simple-server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simple-server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simple-server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple-server.dir/flags.make

CMakeFiles/simple-server.dir/main.cpp.o: CMakeFiles/simple-server.dir/flags.make
CMakeFiles/simple-server.dir/main.cpp.o: /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/main.cpp
CMakeFiles/simple-server.dir/main.cpp.o: CMakeFiles/simple-server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple-server.dir/main.cpp.o"
	/opt/rh/devtoolset-11/root/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simple-server.dir/main.cpp.o -MF CMakeFiles/simple-server.dir/main.cpp.o.d -o CMakeFiles/simple-server.dir/main.cpp.o -c /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/main.cpp

CMakeFiles/simple-server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple-server.dir/main.cpp.i"
	/opt/rh/devtoolset-11/root/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/main.cpp > CMakeFiles/simple-server.dir/main.cpp.i

CMakeFiles/simple-server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple-server.dir/main.cpp.s"
	/opt/rh/devtoolset-11/root/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/main.cpp -o CMakeFiles/simple-server.dir/main.cpp.s

# Object files for target simple-server
simple__server_OBJECTS = \
"CMakeFiles/simple-server.dir/main.cpp.o"

# External object files for target simple-server
simple__server_EXTERNAL_OBJECTS =

simple-server: CMakeFiles/simple-server.dir/main.cpp.o
simple-server: CMakeFiles/simple-server.dir/build.make
simple-server: CMakeFiles/simple-server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simple-server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple-server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple-server.dir/build: simple-server
.PHONY : CMakeFiles/simple-server.dir/build

CMakeFiles/simple-server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple-server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple-server.dir/clean

CMakeFiles/simple-server.dir/depend:
	cd /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build /mysql-source-code-analysis/cpp-web-frameworks/oatpp-test/build/CMakeFiles/simple-server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple-server.dir/depend

