# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zeqiqiu/CLionProjects/CplusplusCodeLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CplusplusCodeLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CplusplusCodeLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CplusplusCodeLib.dir/flags.make

CMakeFiles/CplusplusCodeLib.dir/main.cpp.o: CMakeFiles/CplusplusCodeLib.dir/flags.make
CMakeFiles/CplusplusCodeLib.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CplusplusCodeLib.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CplusplusCodeLib.dir/main.cpp.o -c /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/main.cpp

CMakeFiles/CplusplusCodeLib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CplusplusCodeLib.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/main.cpp > CMakeFiles/CplusplusCodeLib.dir/main.cpp.i

CMakeFiles/CplusplusCodeLib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CplusplusCodeLib.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/main.cpp -o CMakeFiles/CplusplusCodeLib.dir/main.cpp.s

# Object files for target CplusplusCodeLib
CplusplusCodeLib_OBJECTS = \
"CMakeFiles/CplusplusCodeLib.dir/main.cpp.o"

# External object files for target CplusplusCodeLib
CplusplusCodeLib_EXTERNAL_OBJECTS =

CplusplusCodeLib: CMakeFiles/CplusplusCodeLib.dir/main.cpp.o
CplusplusCodeLib: CMakeFiles/CplusplusCodeLib.dir/build.make
CplusplusCodeLib: CMakeFiles/CplusplusCodeLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CplusplusCodeLib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CplusplusCodeLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CplusplusCodeLib.dir/build: CplusplusCodeLib

.PHONY : CMakeFiles/CplusplusCodeLib.dir/build

CMakeFiles/CplusplusCodeLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CplusplusCodeLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CplusplusCodeLib.dir/clean

CMakeFiles/CplusplusCodeLib.dir/depend:
	cd /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zeqiqiu/CLionProjects/CplusplusCodeLib /Users/zeqiqiu/CLionProjects/CplusplusCodeLib /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug /Users/zeqiqiu/CLionProjects/CplusplusCodeLib/cmake-build-debug/CMakeFiles/CplusplusCodeLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CplusplusCodeLib.dir/depend

