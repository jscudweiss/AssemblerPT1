# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /cygdrive/c/Users/jscud/AppData/Local/JetBrains/CLion2021.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/jscud/AppData/Local/JetBrains/CLion2021.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assembler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/assembler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/assembler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assembler.dir/flags.make

CMakeFiles/assembler.dir/unused/mystrcopy.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/unused/mystrcopy.c.o: ../unused/mystrcopy.c
CMakeFiles/assembler.dir/unused/mystrcopy.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assembler.dir/unused/mystrcopy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/unused/mystrcopy.c.o -MF CMakeFiles/assembler.dir/unused/mystrcopy.c.o.d -o CMakeFiles/assembler.dir/unused/mystrcopy.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/mystrcopy.c

CMakeFiles/assembler.dir/unused/mystrcopy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/unused/mystrcopy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/mystrcopy.c > CMakeFiles/assembler.dir/unused/mystrcopy.c.i

CMakeFiles/assembler.dir/unused/mystrcopy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/unused/mystrcopy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/mystrcopy.c -o CMakeFiles/assembler.dir/unused/mystrcopy.c.s

CMakeFiles/assembler.dir/Main.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/Main.c.o: ../Main.c
CMakeFiles/assembler.dir/Main.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/assembler.dir/Main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/Main.c.o -MF CMakeFiles/assembler.dir/Main.c.o.d -o CMakeFiles/assembler.dir/Main.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/Main.c

CMakeFiles/assembler.dir/Main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/Main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/Main.c > CMakeFiles/assembler.dir/Main.c.i

CMakeFiles/assembler.dir/Main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/Main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/Main.c -o CMakeFiles/assembler.dir/Main.c.s

CMakeFiles/assembler.dir/map.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/map.c.o: ../map.c
CMakeFiles/assembler.dir/map.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/assembler.dir/map.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/map.c.o -MF CMakeFiles/assembler.dir/map.c.o.d -o CMakeFiles/assembler.dir/map.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/map.c

CMakeFiles/assembler.dir/map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/map.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/map.c > CMakeFiles/assembler.dir/map.c.i

CMakeFiles/assembler.dir/map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/map.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/map.c -o CMakeFiles/assembler.dir/map.c.s

CMakeFiles/assembler.dir/unused/maptest.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/unused/maptest.c.o: ../unused/maptest.c
CMakeFiles/assembler.dir/unused/maptest.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/assembler.dir/unused/maptest.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/unused/maptest.c.o -MF CMakeFiles/assembler.dir/unused/maptest.c.o.d -o CMakeFiles/assembler.dir/unused/maptest.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/maptest.c

CMakeFiles/assembler.dir/unused/maptest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/unused/maptest.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/maptest.c > CMakeFiles/assembler.dir/unused/maptest.c.i

CMakeFiles/assembler.dir/unused/maptest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/unused/maptest.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/unused/maptest.c -o CMakeFiles/assembler.dir/unused/maptest.c.s

CMakeFiles/assembler.dir/IO.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/IO.c.o: ../IO.c
CMakeFiles/assembler.dir/IO.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/assembler.dir/IO.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/IO.c.o -MF CMakeFiles/assembler.dir/IO.c.o.d -o CMakeFiles/assembler.dir/IO.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/IO.c

CMakeFiles/assembler.dir/IO.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/IO.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/IO.c > CMakeFiles/assembler.dir/IO.c.i

CMakeFiles/assembler.dir/IO.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/IO.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/IO.c -o CMakeFiles/assembler.dir/IO.c.s

CMakeFiles/assembler.dir/mappings.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/mappings.c.o: ../mappings.c
CMakeFiles/assembler.dir/mappings.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/assembler.dir/mappings.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/mappings.c.o -MF CMakeFiles/assembler.dir/mappings.c.o.d -o CMakeFiles/assembler.dir/mappings.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/mappings.c

CMakeFiles/assembler.dir/mappings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/mappings.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/mappings.c > CMakeFiles/assembler.dir/mappings.c.i

CMakeFiles/assembler.dir/mappings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/mappings.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/mappings.c -o CMakeFiles/assembler.dir/mappings.c.s

CMakeFiles/assembler.dir/codemake.c.o: CMakeFiles/assembler.dir/flags.make
CMakeFiles/assembler.dir/codemake.c.o: ../codemake.c
CMakeFiles/assembler.dir/codemake.c.o: CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/assembler.dir/codemake.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assembler.dir/codemake.c.o -MF CMakeFiles/assembler.dir/codemake.c.o.d -o CMakeFiles/assembler.dir/codemake.c.o -c /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/codemake.c

CMakeFiles/assembler.dir/codemake.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assembler.dir/codemake.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/codemake.c > CMakeFiles/assembler.dir/codemake.c.i

CMakeFiles/assembler.dir/codemake.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assembler.dir/codemake.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/codemake.c -o CMakeFiles/assembler.dir/codemake.c.s

# Object files for target assembler
assembler_OBJECTS = \
"CMakeFiles/assembler.dir/unused/mystrcopy.c.o" \
"CMakeFiles/assembler.dir/Main.c.o" \
"CMakeFiles/assembler.dir/map.c.o" \
"CMakeFiles/assembler.dir/unused/maptest.c.o" \
"CMakeFiles/assembler.dir/IO.c.o" \
"CMakeFiles/assembler.dir/mappings.c.o" \
"CMakeFiles/assembler.dir/codemake.c.o"

# External object files for target assembler
assembler_EXTERNAL_OBJECTS =

assembler.exe: CMakeFiles/assembler.dir/unused/mystrcopy.c.o
assembler.exe: CMakeFiles/assembler.dir/Main.c.o
assembler.exe: CMakeFiles/assembler.dir/map.c.o
assembler.exe: CMakeFiles/assembler.dir/unused/maptest.c.o
assembler.exe: CMakeFiles/assembler.dir/IO.c.o
assembler.exe: CMakeFiles/assembler.dir/mappings.c.o
assembler.exe: CMakeFiles/assembler.dir/codemake.c.o
assembler.exe: CMakeFiles/assembler.dir/build.make
assembler.exe: CMakeFiles/assembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable assembler.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assembler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assembler.dir/build: assembler.exe
.PHONY : CMakeFiles/assembler.dir/build

CMakeFiles/assembler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assembler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assembler.dir/clean

CMakeFiles/assembler.dir/depend:
	cd /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1 /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1 /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug /cygdrive/c/Users/jscud/CLionProjects/AssemblerPT1/cmake-build-debug/CMakeFiles/assembler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assembler.dir/depend

