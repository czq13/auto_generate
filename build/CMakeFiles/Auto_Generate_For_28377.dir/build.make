# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = G:/cmake/bin/cmake.EXE

# The command to remove a file.
RM = G:/cmake/bin/cmake.EXE -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/restart/autogenerate/auto_generate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/restart/autogenerate/auto_generate/build

# Include any dependencies generated for this target.
include CMakeFiles/Auto_Generate_For_28377.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Auto_Generate_For_28377.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Auto_Generate_For_28377.dir/flags.make

CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj: CMakeFiles/Auto_Generate_For_28377.dir/flags.make
CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj: CMakeFiles/Auto_Generate_For_28377.dir/includes_C.rsp
CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj: ../c_test/mavlink_testsuit_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/restart/autogenerate/auto_generate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj"
	G:/cgwin64/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj   -c E:/restart/autogenerate/auto_generate/c_test/mavlink_testsuit_main.c

CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.i"
	G:/cgwin64/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:/restart/autogenerate/auto_generate/c_test/mavlink_testsuit_main.c > CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.i

CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.s"
	G:/cgwin64/mingw64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:/restart/autogenerate/auto_generate/c_test/mavlink_testsuit_main.c -o CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.s

# Object files for target Auto_Generate_For_28377
Auto_Generate_For_28377_OBJECTS = \
"CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj"

# External object files for target Auto_Generate_For_28377
Auto_Generate_For_28377_EXTERNAL_OBJECTS =

Auto_Generate_For_28377.exe: CMakeFiles/Auto_Generate_For_28377.dir/c_test/mavlink_testsuit_main.c.obj
Auto_Generate_For_28377.exe: CMakeFiles/Auto_Generate_For_28377.dir/build.make
Auto_Generate_For_28377.exe: CMakeFiles/Auto_Generate_For_28377.dir/linklibs.rsp
Auto_Generate_For_28377.exe: CMakeFiles/Auto_Generate_For_28377.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/restart/autogenerate/auto_generate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Auto_Generate_For_28377.exe"
	G:/cmake/bin/cmake.EXE -E remove -f CMakeFiles/Auto_Generate_For_28377.dir/objects.a
	G:/cgwin64/mingw64/bin/ar.exe cr CMakeFiles/Auto_Generate_For_28377.dir/objects.a @CMakeFiles/Auto_Generate_For_28377.dir/objects1.rsp
	G:/cgwin64/mingw64/bin/gcc.exe -g   -Wl,--whole-archive CMakeFiles/Auto_Generate_For_28377.dir/objects.a -Wl,--no-whole-archive  -o Auto_Generate_For_28377.exe -Wl,--out-implib,libAuto_Generate_For_28377.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Auto_Generate_For_28377.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Auto_Generate_For_28377.dir/build: Auto_Generate_For_28377.exe

.PHONY : CMakeFiles/Auto_Generate_For_28377.dir/build

CMakeFiles/Auto_Generate_For_28377.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Auto_Generate_For_28377.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Auto_Generate_For_28377.dir/clean

CMakeFiles/Auto_Generate_For_28377.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/restart/autogenerate/auto_generate E:/restart/autogenerate/auto_generate E:/restart/autogenerate/auto_generate/build E:/restart/autogenerate/auto_generate/build E:/restart/autogenerate/auto_generate/build/CMakeFiles/Auto_Generate_For_28377.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Auto_Generate_For_28377.dir/depend

