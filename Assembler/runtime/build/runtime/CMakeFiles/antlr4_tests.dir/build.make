# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build

# Include any dependencies generated for this target.
include runtime/CMakeFiles/antlr4_tests.dir/depend.make

# Include the progress variables for this target.
include runtime/CMakeFiles/antlr4_tests.dir/progress.make

# Include the compile flags for this target's objects.
include runtime/CMakeFiles/antlr4_tests.dir/flags.make

runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o: runtime/CMakeFiles/antlr4_tests.dir/flags.make
runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o: ../runtime/tests/Utf8Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o"
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o -c /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/runtime/tests/Utf8Test.cpp

runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.i"
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/runtime/tests/Utf8Test.cpp > CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.i

runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.s"
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/runtime/tests/Utf8Test.cpp -o CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.s

# Object files for target antlr4_tests
antlr4_tests_OBJECTS = \
"CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o"

# External object files for target antlr4_tests
antlr4_tests_EXTERNAL_OBJECTS =

runtime/antlr4_tests: runtime/CMakeFiles/antlr4_tests.dir/tests/Utf8Test.cpp.o
runtime/antlr4_tests: runtime/CMakeFiles/antlr4_tests.dir/build.make
runtime/antlr4_tests: runtime/libantlr4-runtime.a
runtime/antlr4_tests: lib/libgtest_main.a
runtime/antlr4_tests: lib/libgtest.a
runtime/antlr4_tests: runtime/CMakeFiles/antlr4_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable antlr4_tests"
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/antlr4_tests.dir/link.txt --verbose=$(VERBOSE)
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && /usr/bin/cmake -D TEST_TARGET=antlr4_tests -D TEST_EXECUTABLE=/mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime/antlr4_tests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=antlr4_tests_TESTS -D CTEST_FILE=/mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime/antlr4_tests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -P /usr/share/cmake-3.16/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
runtime/CMakeFiles/antlr4_tests.dir/build: runtime/antlr4_tests

.PHONY : runtime/CMakeFiles/antlr4_tests.dir/build

runtime/CMakeFiles/antlr4_tests.dir/clean:
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime && $(CMAKE_COMMAND) -P CMakeFiles/antlr4_tests.dir/cmake_clean.cmake
.PHONY : runtime/CMakeFiles/antlr4_tests.dir/clean

runtime/CMakeFiles/antlr4_tests.dir/depend:
	cd /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/runtime /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime /mnt/c/users/gusbr/desktop/codingshit/romulus-I/Assembler/runtime/build/runtime/CMakeFiles/antlr4_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : runtime/CMakeFiles/antlr4_tests.dir/depend

