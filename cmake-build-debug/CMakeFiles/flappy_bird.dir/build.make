# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/flappy_bird.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/flappy_bird.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/flappy_bird.dir/flags.make

CMakeFiles/flappy_bird.dir/src/model.cxx.o: CMakeFiles/flappy_bird.dir/flags.make
CMakeFiles/flappy_bird.dir/src/model.cxx.o: ../src/model.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/flappy_bird.dir/src/model.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flappy_bird.dir/src/model.cxx.o -c "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/model.cxx"

CMakeFiles/flappy_bird.dir/src/model.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flappy_bird.dir/src/model.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/model.cxx" > CMakeFiles/flappy_bird.dir/src/model.cxx.i

CMakeFiles/flappy_bird.dir/src/model.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flappy_bird.dir/src/model.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/model.cxx" -o CMakeFiles/flappy_bird.dir/src/model.cxx.s

CMakeFiles/flappy_bird.dir/src/bird.cxx.o: CMakeFiles/flappy_bird.dir/flags.make
CMakeFiles/flappy_bird.dir/src/bird.cxx.o: ../src/bird.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/flappy_bird.dir/src/bird.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flappy_bird.dir/src/bird.cxx.o -c "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/bird.cxx"

CMakeFiles/flappy_bird.dir/src/bird.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flappy_bird.dir/src/bird.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/bird.cxx" > CMakeFiles/flappy_bird.dir/src/bird.cxx.i

CMakeFiles/flappy_bird.dir/src/bird.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flappy_bird.dir/src/bird.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/bird.cxx" -o CMakeFiles/flappy_bird.dir/src/bird.cxx.s

CMakeFiles/flappy_bird.dir/src/view.cxx.o: CMakeFiles/flappy_bird.dir/flags.make
CMakeFiles/flappy_bird.dir/src/view.cxx.o: ../src/view.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/flappy_bird.dir/src/view.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flappy_bird.dir/src/view.cxx.o -c "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/view.cxx"

CMakeFiles/flappy_bird.dir/src/view.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flappy_bird.dir/src/view.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/view.cxx" > CMakeFiles/flappy_bird.dir/src/view.cxx.i

CMakeFiles/flappy_bird.dir/src/view.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flappy_bird.dir/src/view.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/view.cxx" -o CMakeFiles/flappy_bird.dir/src/view.cxx.s

CMakeFiles/flappy_bird.dir/src/controller.cxx.o: CMakeFiles/flappy_bird.dir/flags.make
CMakeFiles/flappy_bird.dir/src/controller.cxx.o: ../src/controller.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/flappy_bird.dir/src/controller.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flappy_bird.dir/src/controller.cxx.o -c "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/controller.cxx"

CMakeFiles/flappy_bird.dir/src/controller.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flappy_bird.dir/src/controller.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/controller.cxx" > CMakeFiles/flappy_bird.dir/src/controller.cxx.i

CMakeFiles/flappy_bird.dir/src/controller.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flappy_bird.dir/src/controller.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/controller.cxx" -o CMakeFiles/flappy_bird.dir/src/controller.cxx.s

CMakeFiles/flappy_bird.dir/src/main.cxx.o: CMakeFiles/flappy_bird.dir/flags.make
CMakeFiles/flappy_bird.dir/src/main.cxx.o: ../src/main.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/flappy_bird.dir/src/main.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flappy_bird.dir/src/main.cxx.o -c "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/main.cxx"

CMakeFiles/flappy_bird.dir/src/main.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flappy_bird.dir/src/main.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/main.cxx" > CMakeFiles/flappy_bird.dir/src/main.cxx.i

CMakeFiles/flappy_bird.dir/src/main.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flappy_bird.dir/src/main.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/src/main.cxx" -o CMakeFiles/flappy_bird.dir/src/main.cxx.s

# Object files for target flappy_bird
flappy_bird_OBJECTS = \
"CMakeFiles/flappy_bird.dir/src/model.cxx.o" \
"CMakeFiles/flappy_bird.dir/src/bird.cxx.o" \
"CMakeFiles/flappy_bird.dir/src/view.cxx.o" \
"CMakeFiles/flappy_bird.dir/src/controller.cxx.o" \
"CMakeFiles/flappy_bird.dir/src/main.cxx.o"

# External object files for target flappy_bird
flappy_bird_EXTERNAL_OBJECTS =

flappy_bird: CMakeFiles/flappy_bird.dir/src/model.cxx.o
flappy_bird: CMakeFiles/flappy_bird.dir/src/bird.cxx.o
flappy_bird: CMakeFiles/flappy_bird.dir/src/view.cxx.o
flappy_bird: CMakeFiles/flappy_bird.dir/src/controller.cxx.o
flappy_bird: CMakeFiles/flappy_bird.dir/src/main.cxx.o
flappy_bird: CMakeFiles/flappy_bird.dir/build.make
flappy_bird: .cs211/lib/ge211/src/libge211.a
flappy_bird: /usr/local/lib/libSDL2.dylib
flappy_bird: /usr/local/lib/libSDL2_image.dylib
flappy_bird: /usr/local/lib/libSDL2_mixer.dylib
flappy_bird: /usr/local/lib/libSDL2_ttf.dylib
flappy_bird: CMakeFiles/flappy_bird.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable flappy_bird"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flappy_bird.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/flappy_bird.dir/build: flappy_bird
.PHONY : CMakeFiles/flappy_bird.dir/build

CMakeFiles/flappy_bird.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/flappy_bird.dir/cmake_clean.cmake
.PHONY : CMakeFiles/flappy_bird.dir/clean

CMakeFiles/flappy_bird.dir/depend:
	cd "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project" "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project" "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug" "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug" "/Users/kevinsu/Desktop/Northwestern/Second year resources/CS 211/final_project/cmake-build-debug/CMakeFiles/flappy_bird.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/flappy_bird.dir/depend

