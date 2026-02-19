cmake_minimum_required(VERSION 3.5)
project(ChessProject)

set(CMAKE_CXX_STANDARD 11)

set(SRC_DIRECTORY cppFiles)
set(INCLUDE_DIRECTORY headers)

set(SOURCES
	${SRC_DIRECTORY}/Board.cpp
	${SRC_DIRECTORY}/PiecesClass.cpp
	${SRC_DIRECTORY}/King.cpp
	${SRC_DIRECTORY}/Queen.cpp
	${SRC_DIRECTORY}/Bishop.cpp
	${SRC_DIRECTORY}/Knight.cpp
	${SRC_DIRECTORY}/Rook.cpp
	${SRC_DIRECTORY}/Pawn.cpp
)

include_directories(${INCLUDE_DIRECTORY})
add_executable(${PROJECT_NAME}
	${SRC_DIRECTORY}/main.cpp
	${SOURCES})
	
target_link_libraries(${PROJECT_NAME}
    sfml-system
    sfml-window
    sfml-graphics)

