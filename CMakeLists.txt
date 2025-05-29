cmake_minimum_required(VERSION 3.31)
project(Tetris)

set(CMAKE_CXX_STANDARD 20)

include_directories(lib)
link_directories(lib)

add_executable(Tetris src/main.cpp src/Game.cpp src/Board.cpp)

target_link_libraries(Tetris raylib)

if(APPLE)
    target_link_libraries(Tetris "-framework IOKit")
    target_link_libraries(Tetris "-framework Cocoa")
    target_link_libraries(Tetris "-framework OpenGL")
endif()