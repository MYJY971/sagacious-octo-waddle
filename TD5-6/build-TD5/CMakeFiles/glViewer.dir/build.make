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
include CMakeFiles/glViewer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/glViewer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/glViewer.dir/flags.make

CMakeFiles/glViewer.dir/src/Shader.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Shader.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Shader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Shader.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Shader.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Shader.cpp

CMakeFiles/glViewer.dir/src/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Shader.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Shader.cpp > CMakeFiles/glViewer.dir/src/Shader.cpp.i

CMakeFiles/glViewer.dir/src/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Shader.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Shader.cpp -o CMakeFiles/glViewer.dir/src/Shader.cpp.s

CMakeFiles/glViewer.dir/src/Shader.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Shader.cpp.o.requires

CMakeFiles/glViewer.dir/src/Shader.cpp.o.provides: CMakeFiles/glViewer.dir/src/Shader.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Shader.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Shader.cpp.o.provides

CMakeFiles/glViewer.dir/src/Shader.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Shader.cpp.o

CMakeFiles/glViewer.dir/src/WireCube.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/WireCube.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/WireCube.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/WireCube.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/WireCube.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/WireCube.cpp

CMakeFiles/glViewer.dir/src/WireCube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/WireCube.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/WireCube.cpp > CMakeFiles/glViewer.dir/src/WireCube.cpp.i

CMakeFiles/glViewer.dir/src/WireCube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/WireCube.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/WireCube.cpp -o CMakeFiles/glViewer.dir/src/WireCube.cpp.s

CMakeFiles/glViewer.dir/src/WireCube.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/WireCube.cpp.o.requires

CMakeFiles/glViewer.dir/src/WireCube.cpp.o.provides: CMakeFiles/glViewer.dir/src/WireCube.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/WireCube.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/WireCube.cpp.o.provides

CMakeFiles/glViewer.dir/src/WireCube.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/WireCube.cpp.o

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Pointcloud.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Pointcloud.cpp

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Pointcloud.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Pointcloud.cpp > CMakeFiles/glViewer.dir/src/Pointcloud.cpp.i

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Pointcloud.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Pointcloud.cpp -o CMakeFiles/glViewer.dir/src/Pointcloud.cpp.s

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.requires

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.provides: CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.provides

CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o

CMakeFiles/glViewer.dir/src/Mesh.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Mesh.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Mesh.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Mesh.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Mesh.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Mesh.cpp

CMakeFiles/glViewer.dir/src/Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Mesh.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Mesh.cpp > CMakeFiles/glViewer.dir/src/Mesh.cpp.i

CMakeFiles/glViewer.dir/src/Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Mesh.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Mesh.cpp -o CMakeFiles/glViewer.dir/src/Mesh.cpp.s

CMakeFiles/glViewer.dir/src/Mesh.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Mesh.cpp.o.requires

CMakeFiles/glViewer.dir/src/Mesh.cpp.o.provides: CMakeFiles/glViewer.dir/src/Mesh.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Mesh.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Mesh.cpp.o.provides

CMakeFiles/glViewer.dir/src/Mesh.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Mesh.cpp.o

CMakeFiles/glViewer.dir/src/Meshloader.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Meshloader.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Meshloader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Meshloader.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Meshloader.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Meshloader.cpp

CMakeFiles/glViewer.dir/src/Meshloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Meshloader.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Meshloader.cpp > CMakeFiles/glViewer.dir/src/Meshloader.cpp.i

CMakeFiles/glViewer.dir/src/Meshloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Meshloader.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Meshloader.cpp -o CMakeFiles/glViewer.dir/src/Meshloader.cpp.s

CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.requires

CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.provides: CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.provides

CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Meshloader.cpp.o

CMakeFiles/glViewer.dir/src/Trackball.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Trackball.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Trackball.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Trackball.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Trackball.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Trackball.cpp

CMakeFiles/glViewer.dir/src/Trackball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Trackball.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Trackball.cpp > CMakeFiles/glViewer.dir/src/Trackball.cpp.i

CMakeFiles/glViewer.dir/src/Trackball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Trackball.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Trackball.cpp -o CMakeFiles/glViewer.dir/src/Trackball.cpp.s

CMakeFiles/glViewer.dir/src/Trackball.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Trackball.cpp.o.requires

CMakeFiles/glViewer.dir/src/Trackball.cpp.o.provides: CMakeFiles/glViewer.dir/src/Trackball.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Trackball.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Trackball.cpp.o.provides

CMakeFiles/glViewer.dir/src/Trackball.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Trackball.cpp.o

CMakeFiles/glViewer.dir/src/Octree.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/Octree.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Octree.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/Octree.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/Octree.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Octree.cpp

CMakeFiles/glViewer.dir/src/Octree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/Octree.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Octree.cpp > CMakeFiles/glViewer.dir/src/Octree.cpp.i

CMakeFiles/glViewer.dir/src/Octree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/Octree.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/Octree.cpp -o CMakeFiles/glViewer.dir/src/Octree.cpp.s

CMakeFiles/glViewer.dir/src/Octree.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/Octree.cpp.o.requires

CMakeFiles/glViewer.dir/src/Octree.cpp.o.provides: CMakeFiles/glViewer.dir/src/Octree.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/Octree.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/Octree.cpp.o.provides

CMakeFiles/glViewer.dir/src/Octree.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/Octree.cpp.o

CMakeFiles/glViewer.dir/src/main.cpp.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/src/main.cpp.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/glViewer.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/glViewer.dir/src/main.cpp.o -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/main.cpp

CMakeFiles/glViewer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glViewer.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/main.cpp > CMakeFiles/glViewer.dir/src/main.cpp.i

CMakeFiles/glViewer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glViewer.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/src/main.cpp -o CMakeFiles/glViewer.dir/src/main.cpp.s

CMakeFiles/glViewer.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/glViewer.dir/src/main.cpp.o.requires

CMakeFiles/glViewer.dir/src/main.cpp.o.provides: CMakeFiles/glViewer.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/src/main.cpp.o.provides

CMakeFiles/glViewer.dir/src/main.cpp.o.provides.build: CMakeFiles/glViewer.dir/src/main.cpp.o

CMakeFiles/glViewer.dir/glfw/deps/glad.c.o: CMakeFiles/glViewer.dir/flags.make
CMakeFiles/glViewer.dir/glfw/deps/glad.c.o: /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/glfw/deps/glad.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/glViewer.dir/glfw/deps/glad.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/glViewer.dir/glfw/deps/glad.c.o   -c /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/glfw/deps/glad.c

CMakeFiles/glViewer.dir/glfw/deps/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glViewer.dir/glfw/deps/glad.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/glfw/deps/glad.c > CMakeFiles/glViewer.dir/glfw/deps/glad.c.i

CMakeFiles/glViewer.dir/glfw/deps/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glViewer.dir/glfw/deps/glad.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5/glfw/deps/glad.c -o CMakeFiles/glViewer.dir/glfw/deps/glad.c.s

CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.requires:
.PHONY : CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.requires

CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.provides: CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.requires
	$(MAKE) -f CMakeFiles/glViewer.dir/build.make CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.provides.build
.PHONY : CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.provides

CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.provides.build: CMakeFiles/glViewer.dir/glfw/deps/glad.c.o

# Object files for target glViewer
glViewer_OBJECTS = \
"CMakeFiles/glViewer.dir/src/Shader.cpp.o" \
"CMakeFiles/glViewer.dir/src/WireCube.cpp.o" \
"CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o" \
"CMakeFiles/glViewer.dir/src/Mesh.cpp.o" \
"CMakeFiles/glViewer.dir/src/Meshloader.cpp.o" \
"CMakeFiles/glViewer.dir/src/Trackball.cpp.o" \
"CMakeFiles/glViewer.dir/src/Octree.cpp.o" \
"CMakeFiles/glViewer.dir/src/main.cpp.o" \
"CMakeFiles/glViewer.dir/glfw/deps/glad.c.o"

# External object files for target glViewer
glViewer_EXTERNAL_OBJECTS =

glViewer: CMakeFiles/glViewer.dir/src/Shader.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/WireCube.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/Mesh.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/Meshloader.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/Trackball.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/Octree.cpp.o
glViewer: CMakeFiles/glViewer.dir/src/main.cpp.o
glViewer: CMakeFiles/glViewer.dir/glfw/deps/glad.c.o
glViewer: CMakeFiles/glViewer.dir/build.make
glViewer: glfw/src/libglfw3.a
glViewer: SOIL/libSOIL.a
glViewer: /usr/lib/x86_64-linux-gnu/libX11.so
glViewer: /usr/lib/x86_64-linux-gnu/libXrandr.so
glViewer: /usr/lib/x86_64-linux-gnu/libXi.so
glViewer: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
glViewer: /usr/lib/x86_64-linux-gnu/librt.so
glViewer: /usr/lib/x86_64-linux-gnu/libm.so
glViewer: /usr/lib/x86_64-linux-gnu/libGL.so
glViewer: /usr/lib/x86_64-linux-gnu/libGLU.so
glViewer: /usr/lib/x86_64-linux-gnu/libGL.so
glViewer: /usr/lib/x86_64-linux-gnu/libSM.so
glViewer: /usr/lib/x86_64-linux-gnu/libICE.so
glViewer: /usr/lib/x86_64-linux-gnu/libX11.so
glViewer: /usr/lib/x86_64-linux-gnu/libXext.so
glViewer: CMakeFiles/glViewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable glViewer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glViewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/glViewer.dir/build: glViewer
.PHONY : CMakeFiles/glViewer.dir/build

CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Shader.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/WireCube.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Pointcloud.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Mesh.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Meshloader.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Trackball.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/Octree.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/src/main.cpp.o.requires
CMakeFiles/glViewer.dir/requires: CMakeFiles/glViewer.dir/glfw/deps/glad.c.o.requires
.PHONY : CMakeFiles/glViewer.dir/requires

CMakeFiles/glViewer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/glViewer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/glViewer.dir/clean

CMakeFiles/glViewer.dir/depend:
	cd /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5 /home/myjy/work/modelGeo/sagacious-octo-waddle/TD5-6/build-TD5/CMakeFiles/glViewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/glViewer.dir/depend

