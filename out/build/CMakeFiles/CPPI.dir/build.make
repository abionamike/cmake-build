# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/abionamike/Documents/cpp_initial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/abionamike/Documents/cpp_initial/out/build

# Include any dependencies generated for this target.
include CMakeFiles/CPPI.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPPI.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPPI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPPI.dir/flags.make

CMakeFiles/CPPI.dir/main.cpp.o: CMakeFiles/CPPI.dir/flags.make
CMakeFiles/CPPI.dir/main.cpp.o: /Users/abionamike/Documents/cpp_initial/main.cpp
CMakeFiles/CPPI.dir/main.cpp.o: CMakeFiles/CPPI.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/abionamike/Documents/cpp_initial/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPPI.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CPPI.dir/main.cpp.o -MF CMakeFiles/CPPI.dir/main.cpp.o.d -o CMakeFiles/CPPI.dir/main.cpp.o -c /Users/abionamike/Documents/cpp_initial/main.cpp

CMakeFiles/CPPI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CPPI.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/abionamike/Documents/cpp_initial/main.cpp > CMakeFiles/CPPI.dir/main.cpp.i

CMakeFiles/CPPI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CPPI.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/abionamike/Documents/cpp_initial/main.cpp -o CMakeFiles/CPPI.dir/main.cpp.s

# Object files for target CPPI
CPPI_OBJECTS = \
"CMakeFiles/CPPI.dir/main.cpp.o"

# External object files for target CPPI
CPPI_EXTERNAL_OBJECTS =

CPPI: CMakeFiles/CPPI.dir/main.cpp.o
CPPI: CMakeFiles/CPPI.dir/build.make
CPPI: CMakeFiles/CPPI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/abionamike/Documents/cpp_initial/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPPI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPPI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPPI.dir/build: CPPI
.PHONY : CMakeFiles/CPPI.dir/build

CMakeFiles/CPPI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPPI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPPI.dir/clean

CMakeFiles/CPPI.dir/depend:
	cd /Users/abionamike/Documents/cpp_initial/out/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/abionamike/Documents/cpp_initial /Users/abionamike/Documents/cpp_initial /Users/abionamike/Documents/cpp_initial/out/build /Users/abionamike/Documents/cpp_initial/out/build /Users/abionamike/Documents/cpp_initial/out/build/CMakeFiles/CPPI.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CPPI.dir/depend

