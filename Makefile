# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/masoud/Desktop/UT/4002/AP1401/Project/part2/chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/masoud/Desktop/UT/4002/AP1401/Project/part2/chess

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/masoud/Desktop/UT/4002/AP1401/Project/part2/chess/CMakeFiles /home/masoud/Desktop/UT/4002/AP1401/Project/part2/chess/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/masoud/Desktop/UT/4002/AP1401/Project/part2/chess/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named thirdstep

# Build rule for target.
thirdstep: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 thirdstep
.PHONY : thirdstep

# fast build rule for target.
thirdstep/fast:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/build
.PHONY : thirdstep/fast

cppFiles/Bishop.o: cppFiles/Bishop.cpp.o

.PHONY : cppFiles/Bishop.o

# target to build an object file
cppFiles/Bishop.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Bishop.cpp.o
.PHONY : cppFiles/Bishop.cpp.o

cppFiles/Bishop.i: cppFiles/Bishop.cpp.i

.PHONY : cppFiles/Bishop.i

# target to preprocess a source file
cppFiles/Bishop.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Bishop.cpp.i
.PHONY : cppFiles/Bishop.cpp.i

cppFiles/Bishop.s: cppFiles/Bishop.cpp.s

.PHONY : cppFiles/Bishop.s

# target to generate assembly for a file
cppFiles/Bishop.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Bishop.cpp.s
.PHONY : cppFiles/Bishop.cpp.s

cppFiles/Board.o: cppFiles/Board.cpp.o

.PHONY : cppFiles/Board.o

# target to build an object file
cppFiles/Board.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Board.cpp.o
.PHONY : cppFiles/Board.cpp.o

cppFiles/Board.i: cppFiles/Board.cpp.i

.PHONY : cppFiles/Board.i

# target to preprocess a source file
cppFiles/Board.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Board.cpp.i
.PHONY : cppFiles/Board.cpp.i

cppFiles/Board.s: cppFiles/Board.cpp.s

.PHONY : cppFiles/Board.s

# target to generate assembly for a file
cppFiles/Board.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Board.cpp.s
.PHONY : cppFiles/Board.cpp.s

cppFiles/King.o: cppFiles/King.cpp.o

.PHONY : cppFiles/King.o

# target to build an object file
cppFiles/King.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/King.cpp.o
.PHONY : cppFiles/King.cpp.o

cppFiles/King.i: cppFiles/King.cpp.i

.PHONY : cppFiles/King.i

# target to preprocess a source file
cppFiles/King.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/King.cpp.i
.PHONY : cppFiles/King.cpp.i

cppFiles/King.s: cppFiles/King.cpp.s

.PHONY : cppFiles/King.s

# target to generate assembly for a file
cppFiles/King.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/King.cpp.s
.PHONY : cppFiles/King.cpp.s

cppFiles/Knight.o: cppFiles/Knight.cpp.o

.PHONY : cppFiles/Knight.o

# target to build an object file
cppFiles/Knight.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Knight.cpp.o
.PHONY : cppFiles/Knight.cpp.o

cppFiles/Knight.i: cppFiles/Knight.cpp.i

.PHONY : cppFiles/Knight.i

# target to preprocess a source file
cppFiles/Knight.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Knight.cpp.i
.PHONY : cppFiles/Knight.cpp.i

cppFiles/Knight.s: cppFiles/Knight.cpp.s

.PHONY : cppFiles/Knight.s

# target to generate assembly for a file
cppFiles/Knight.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Knight.cpp.s
.PHONY : cppFiles/Knight.cpp.s

cppFiles/Pawn.o: cppFiles/Pawn.cpp.o

.PHONY : cppFiles/Pawn.o

# target to build an object file
cppFiles/Pawn.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Pawn.cpp.o
.PHONY : cppFiles/Pawn.cpp.o

cppFiles/Pawn.i: cppFiles/Pawn.cpp.i

.PHONY : cppFiles/Pawn.i

# target to preprocess a source file
cppFiles/Pawn.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Pawn.cpp.i
.PHONY : cppFiles/Pawn.cpp.i

cppFiles/Pawn.s: cppFiles/Pawn.cpp.s

.PHONY : cppFiles/Pawn.s

# target to generate assembly for a file
cppFiles/Pawn.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Pawn.cpp.s
.PHONY : cppFiles/Pawn.cpp.s

cppFiles/PiecesClass.o: cppFiles/PiecesClass.cpp.o

.PHONY : cppFiles/PiecesClass.o

# target to build an object file
cppFiles/PiecesClass.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/PiecesClass.cpp.o
.PHONY : cppFiles/PiecesClass.cpp.o

cppFiles/PiecesClass.i: cppFiles/PiecesClass.cpp.i

.PHONY : cppFiles/PiecesClass.i

# target to preprocess a source file
cppFiles/PiecesClass.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/PiecesClass.cpp.i
.PHONY : cppFiles/PiecesClass.cpp.i

cppFiles/PiecesClass.s: cppFiles/PiecesClass.cpp.s

.PHONY : cppFiles/PiecesClass.s

# target to generate assembly for a file
cppFiles/PiecesClass.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/PiecesClass.cpp.s
.PHONY : cppFiles/PiecesClass.cpp.s

cppFiles/Queen.o: cppFiles/Queen.cpp.o

.PHONY : cppFiles/Queen.o

# target to build an object file
cppFiles/Queen.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Queen.cpp.o
.PHONY : cppFiles/Queen.cpp.o

cppFiles/Queen.i: cppFiles/Queen.cpp.i

.PHONY : cppFiles/Queen.i

# target to preprocess a source file
cppFiles/Queen.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Queen.cpp.i
.PHONY : cppFiles/Queen.cpp.i

cppFiles/Queen.s: cppFiles/Queen.cpp.s

.PHONY : cppFiles/Queen.s

# target to generate assembly for a file
cppFiles/Queen.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Queen.cpp.s
.PHONY : cppFiles/Queen.cpp.s

cppFiles/Rook.o: cppFiles/Rook.cpp.o

.PHONY : cppFiles/Rook.o

# target to build an object file
cppFiles/Rook.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Rook.cpp.o
.PHONY : cppFiles/Rook.cpp.o

cppFiles/Rook.i: cppFiles/Rook.cpp.i

.PHONY : cppFiles/Rook.i

# target to preprocess a source file
cppFiles/Rook.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Rook.cpp.i
.PHONY : cppFiles/Rook.cpp.i

cppFiles/Rook.s: cppFiles/Rook.cpp.s

.PHONY : cppFiles/Rook.s

# target to generate assembly for a file
cppFiles/Rook.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/Rook.cpp.s
.PHONY : cppFiles/Rook.cpp.s

cppFiles/main.o: cppFiles/main.cpp.o

.PHONY : cppFiles/main.o

# target to build an object file
cppFiles/main.cpp.o:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/main.cpp.o
.PHONY : cppFiles/main.cpp.o

cppFiles/main.i: cppFiles/main.cpp.i

.PHONY : cppFiles/main.i

# target to preprocess a source file
cppFiles/main.cpp.i:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/main.cpp.i
.PHONY : cppFiles/main.cpp.i

cppFiles/main.s: cppFiles/main.cpp.s

.PHONY : cppFiles/main.s

# target to generate assembly for a file
cppFiles/main.cpp.s:
	$(MAKE) -f CMakeFiles/thirdstep.dir/build.make CMakeFiles/thirdstep.dir/cppFiles/main.cpp.s
.PHONY : cppFiles/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... thirdstep"
	@echo "... cppFiles/Bishop.o"
	@echo "... cppFiles/Bishop.i"
	@echo "... cppFiles/Bishop.s"
	@echo "... cppFiles/Board.o"
	@echo "... cppFiles/Board.i"
	@echo "... cppFiles/Board.s"
	@echo "... cppFiles/King.o"
	@echo "... cppFiles/King.i"
	@echo "... cppFiles/King.s"
	@echo "... cppFiles/Knight.o"
	@echo "... cppFiles/Knight.i"
	@echo "... cppFiles/Knight.s"
	@echo "... cppFiles/Pawn.o"
	@echo "... cppFiles/Pawn.i"
	@echo "... cppFiles/Pawn.s"
	@echo "... cppFiles/PiecesClass.o"
	@echo "... cppFiles/PiecesClass.i"
	@echo "... cppFiles/PiecesClass.s"
	@echo "... cppFiles/Queen.o"
	@echo "... cppFiles/Queen.i"
	@echo "... cppFiles/Queen.s"
	@echo "... cppFiles/Rook.o"
	@echo "... cppFiles/Rook.i"
	@echo "... cppFiles/Rook.s"
	@echo "... cppFiles/main.o"
	@echo "... cppFiles/main.i"
	@echo "... cppFiles/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

