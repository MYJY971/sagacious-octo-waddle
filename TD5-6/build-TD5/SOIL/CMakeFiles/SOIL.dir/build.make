# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5

# Include any dependencies generated for this target.
include SOIL/CMakeFiles/SOIL.dir/depend.make

# Include the progress variables for this target.
include SOIL/CMakeFiles/SOIL.dir/progress.make

# Include the compile flags for this target's objects.
include SOIL/CMakeFiles/SOIL.dir/flags.make

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/SOIL2.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/SOIL2.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/SOIL2.c

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/SOIL2.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/SOIL2.c > CMakeFiles/SOIL.dir/src/SOIL2.c.i

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/SOIL2.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/SOIL2.c -o CMakeFiles/SOIL.dir/src/SOIL2.c.s

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_DXT.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/image_DXT.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_DXT.c

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/image_DXT.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_DXT.c > CMakeFiles/SOIL.dir/src/image_DXT.c.i

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/image_DXT.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_DXT.c -o CMakeFiles/SOIL.dir/src/image_DXT.c.s

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/etc1_utils.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/etc1_utils.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/etc1_utils.c

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/etc1_utils.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/etc1_utils.c > CMakeFiles/SOIL.dir/src/etc1_utils.c.i

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/etc1_utils.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/etc1_utils.c -o CMakeFiles/SOIL.dir/src/etc1_utils.c.s

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_helper.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/image_helper.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_helper.c

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/image_helper.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_helper.c > CMakeFiles/SOIL.dir/src/image_helper.c.i

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/image_helper.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/image_helper.c -o CMakeFiles/SOIL.dir/src/image_helper.c.s

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image_write.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/stb_image_write.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image_write.c

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/stb_image_write.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image_write.c > CMakeFiles/SOIL.dir/src/stb_image_write.c.i

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/stb_image_write.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image_write.c -o CMakeFiles/SOIL.dir/src/stb_image_write.c.s

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o: SOIL/CMakeFiles/SOIL.dir/flags.make
SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/SOIL.dir/src/stb_image.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image.c

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SOIL.dir/src/stb_image.c.i"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image.c > CMakeFiles/SOIL.dir/src/stb_image.c.i

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SOIL.dir/src/stb_image.c.s"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL/src/stb_image.c -o CMakeFiles/SOIL.dir/src/stb_image.c.s

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.requires:
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.requires

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.provides: SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.requires
	$(MAKE) -f SOIL/CMakeFiles/SOIL.dir/build.make SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.provides.build
.PHONY : SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.provides

SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.provides.build: SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o

# Object files for target SOIL
SOIL_OBJECTS = \
"CMakeFiles/SOIL.dir/src/SOIL2.c.o" \
"CMakeFiles/SOIL.dir/src/image_DXT.c.o" \
"CMakeFiles/SOIL.dir/src/etc1_utils.c.o" \
"CMakeFiles/SOIL.dir/src/image_helper.c.o" \
"CMakeFiles/SOIL.dir/src/stb_image_write.c.o" \
"CMakeFiles/SOIL.dir/src/stb_image.c.o"

# External object files for target SOIL
SOIL_EXTERNAL_OBJECTS =

SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/build.make
SOIL/libSOIL.a: SOIL/CMakeFiles/SOIL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libSOIL.a"
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && $(CMAKE_COMMAND) -P CMakeFiles/SOIL.dir/cmake_clean_target.cmake
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SOIL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
SOIL/CMakeFiles/SOIL.dir/build: SOIL/libSOIL.a
.PHONY : SOIL/CMakeFiles/SOIL.dir/build

SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/SOIL2.c.o.requires
SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/image_DXT.c.o.requires
SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/etc1_utils.c.o.requires
SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/image_helper.c.o.requires
SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/stb_image_write.c.o.requires
SOIL/CMakeFiles/SOIL.dir/requires: SOIL/CMakeFiles/SOIL.dir/src/stb_image.c.o.requires
.PHONY : SOIL/CMakeFiles/SOIL.dir/requires

SOIL/CMakeFiles/SOIL.dir/clean:
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL && $(CMAKE_COMMAND) -P CMakeFiles/SOIL.dir/cmake_clean.cmake
.PHONY : SOIL/CMakeFiles/SOIL.dir/clean

SOIL/CMakeFiles/SOIL.dir/depend:
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/SOIL /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/SOIL/CMakeFiles/SOIL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : SOIL/CMakeFiles/SOIL.dir/depend

