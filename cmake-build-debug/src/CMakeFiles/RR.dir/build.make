# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/meynaert/RR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/meynaert/RR/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/RR.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/RR.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/RR.dir/flags.make

src/CMakeFiles/RR.dir/main.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/RR.dir/main.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/main.cpp.o -c /home/meynaert/RR/src/main.cpp

src/CMakeFiles/RR.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/main.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/main.cpp > CMakeFiles/RR.dir/main.cpp.i

src/CMakeFiles/RR.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/main.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/main.cpp -o CMakeFiles/RR.dir/main.cpp.s

src/CMakeFiles/RR.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/main.cpp.o.requires

src/CMakeFiles/RR.dir/main.cpp.o.provides: src/CMakeFiles/RR.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/main.cpp.o.provides

src/CMakeFiles/RR.dir/main.cpp.o.provides.build: src/CMakeFiles/RR.dir/main.cpp.o


src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o: ../src/exception/InvalidMagicNumber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o -c /home/meynaert/RR/src/exception/InvalidMagicNumber.cpp

src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/exception/InvalidMagicNumber.cpp > CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.i

src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/exception/InvalidMagicNumber.cpp -o CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.s

src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.requires

src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.provides: src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.provides

src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.provides.build: src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o


src/CMakeFiles/RR.dir/ogre/Application.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/ogre/Application.cpp.o: ../src/ogre/Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/RR.dir/ogre/Application.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/ogre/Application.cpp.o -c /home/meynaert/RR/src/ogre/Application.cpp

src/CMakeFiles/RR.dir/ogre/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/ogre/Application.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/ogre/Application.cpp > CMakeFiles/RR.dir/ogre/Application.cpp.i

src/CMakeFiles/RR.dir/ogre/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/ogre/Application.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/ogre/Application.cpp -o CMakeFiles/RR.dir/ogre/Application.cpp.s

src/CMakeFiles/RR.dir/ogre/Application.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/ogre/Application.cpp.o.requires

src/CMakeFiles/RR.dir/ogre/Application.cpp.o.provides: src/CMakeFiles/RR.dir/ogre/Application.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/ogre/Application.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/ogre/Application.cpp.o.provides

src/CMakeFiles/RR.dir/ogre/Application.cpp.o.provides.build: src/CMakeFiles/RR.dir/ogre/Application.cpp.o


src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o: ../src/ogre/MeshConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o -c /home/meynaert/RR/src/ogre/MeshConverter.cpp

src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/ogre/MeshConverter.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/ogre/MeshConverter.cpp > CMakeFiles/RR.dir/ogre/MeshConverter.cpp.i

src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/ogre/MeshConverter.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/ogre/MeshConverter.cpp -o CMakeFiles/RR.dir/ogre/MeshConverter.cpp.s

src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.requires

src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.provides: src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.provides

src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.provides.build: src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o


src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o: ../src/ogre/SDLWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o -c /home/meynaert/RR/src/ogre/SDLWindow.cpp

src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/ogre/SDLWindow.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/ogre/SDLWindow.cpp > CMakeFiles/RR.dir/ogre/SDLWindow.cpp.i

src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/ogre/SDLWindow.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/ogre/SDLWindow.cpp -o CMakeFiles/RR.dir/ogre/SDLWindow.cpp.s

src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.requires

src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.provides: src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.provides

src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.provides.build: src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o


src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o: ../src/util/BinaryReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/util/BinaryReader.cpp.o -c /home/meynaert/RR/src/util/BinaryReader.cpp

src/CMakeFiles/RR.dir/util/BinaryReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/util/BinaryReader.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/util/BinaryReader.cpp > CMakeFiles/RR.dir/util/BinaryReader.cpp.i

src/CMakeFiles/RR.dir/util/BinaryReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/util/BinaryReader.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/util/BinaryReader.cpp -o CMakeFiles/RR.dir/util/BinaryReader.cpp.s

src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.requires

src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.provides: src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.provides

src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.provides.build: src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o


src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o: ../src/loaders/lwo/LwoLoader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o -c /home/meynaert/RR/src/loaders/lwo/LwoLoader.cpp

src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/loaders/lwo/LwoLoader.cpp > CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.i

src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/loaders/lwo/LwoLoader.cpp -o CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.s

src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.requires

src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.provides: src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.provides

src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.provides.build: src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o


src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o: ../src/loaders/wad/WadFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o -c /home/meynaert/RR/src/loaders/wad/WadFile.cpp

src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/loaders/wad/WadFile.cpp > CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.i

src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/loaders/wad/WadFile.cpp -o CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.s

src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.requires

src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.provides: src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.provides

src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.provides.build: src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o


src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o: src/CMakeFiles/RR.dir/flags.make
src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o: ../src/loaders/wad/WadObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o -c /home/meynaert/RR/src/loaders/wad/WadObject.cpp

src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.i"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/meynaert/RR/src/loaders/wad/WadObject.cpp > CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.i

src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.s"
	cd /home/meynaert/RR/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/meynaert/RR/src/loaders/wad/WadObject.cpp -o CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.s

src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.requires:

.PHONY : src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.requires

src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.provides: src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/RR.dir/build.make src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.provides.build
.PHONY : src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.provides

src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.provides.build: src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o


# Object files for target RR
RR_OBJECTS = \
"CMakeFiles/RR.dir/main.cpp.o" \
"CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o" \
"CMakeFiles/RR.dir/ogre/Application.cpp.o" \
"CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o" \
"CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o" \
"CMakeFiles/RR.dir/util/BinaryReader.cpp.o" \
"CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o" \
"CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o" \
"CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o"

# External object files for target RR
RR_EXTERNAL_OBJECTS =

src/RR: src/CMakeFiles/RR.dir/main.cpp.o
src/RR: src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o
src/RR: src/CMakeFiles/RR.dir/ogre/Application.cpp.o
src/RR: src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o
src/RR: src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o
src/RR: src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o
src/RR: src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o
src/RR: src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o
src/RR: src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o
src/RR: src/CMakeFiles/RR.dir/build.make
src/RR: /usr/local/lib/libOgreMain.so
src/RR: /usr/lib/libSDL2.so
src/RR: src/CMakeFiles/RR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/meynaert/RR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable RR"
	cd /home/meynaert/RR/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/RR.dir/build: src/RR

.PHONY : src/CMakeFiles/RR.dir/build

src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/main.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/exception/InvalidMagicNumber.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/ogre/Application.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/ogre/MeshConverter.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/ogre/SDLWindow.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/util/BinaryReader.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/loaders/lwo/LwoLoader.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/loaders/wad/WadFile.cpp.o.requires
src/CMakeFiles/RR.dir/requires: src/CMakeFiles/RR.dir/loaders/wad/WadObject.cpp.o.requires

.PHONY : src/CMakeFiles/RR.dir/requires

src/CMakeFiles/RR.dir/clean:
	cd /home/meynaert/RR/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/RR.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/RR.dir/clean

src/CMakeFiles/RR.dir/depend:
	cd /home/meynaert/RR/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/meynaert/RR /home/meynaert/RR/src /home/meynaert/RR/cmake-build-debug /home/meynaert/RR/cmake-build-debug/src /home/meynaert/RR/cmake-build-debug/src/CMakeFiles/RR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/RR.dir/depend
