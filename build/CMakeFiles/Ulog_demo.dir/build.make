# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\chWorkSpace\code\auto_generate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\chWorkSpace\code\auto_generate\build

# Include any dependencies generated for this target.
include CMakeFiles/Ulog_demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ulog_demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ulog_demo.dir/flags.make

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj: CMakeFiles/Ulog_demo.dir/flags.make
CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj: CMakeFiles/Ulog_demo.dir/includes_CXX.rsp
CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj: ../msg_pyutils/ulog_demo/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\chWorkSpace\code\auto_generate\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj"
	F:\cgwin64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\main.cpp.obj -c D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\main.cpp

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.i"
	F:\cgwin64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\main.cpp > CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\main.cpp.i

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.s"
	F:\cgwin64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\main.cpp -o CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\main.cpp.s

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj: CMakeFiles/Ulog_demo.dir/flags.make
CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj: CMakeFiles/Ulog_demo.dir/includes_CXX.rsp
CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj: ../msg_pyutils/ulog_demo/msg_logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\chWorkSpace\code\auto_generate\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj"
	F:\cgwin64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\msg_logger.cpp.obj -c D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\msg_logger.cpp

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.i"
	F:\cgwin64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\msg_logger.cpp > CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\msg_logger.cpp.i

CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.s"
	F:\cgwin64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\chWorkSpace\code\auto_generate\msg_pyutils\ulog_demo\msg_logger.cpp -o CMakeFiles\Ulog_demo.dir\msg_pyutils\ulog_demo\msg_logger.cpp.s

# Object files for target Ulog_demo
Ulog_demo_OBJECTS = \
"CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj" \
"CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj"

# External object files for target Ulog_demo
Ulog_demo_EXTERNAL_OBJECTS =

Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/main.cpp.obj
Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/msg_pyutils/ulog_demo/msg_logger.cpp.obj
Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/build.make
Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/linklibs.rsp
Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/objects1.rsp
Ulog_demo.exe: CMakeFiles/Ulog_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\chWorkSpace\code\auto_generate\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Ulog_demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ulog_demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ulog_demo.dir/build: Ulog_demo.exe

.PHONY : CMakeFiles/Ulog_demo.dir/build

CMakeFiles/Ulog_demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ulog_demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ulog_demo.dir/clean

CMakeFiles/Ulog_demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\chWorkSpace\code\auto_generate D:\chWorkSpace\code\auto_generate D:\chWorkSpace\code\auto_generate\build D:\chWorkSpace\code\auto_generate\build D:\chWorkSpace\code\auto_generate\build\CMakeFiles\Ulog_demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ulog_demo.dir/depend

