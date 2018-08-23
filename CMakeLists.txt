cmake_minimum_required(VERSION 3.0)
project(DnD)

set(CMAKE_CXX_STANDARD 14)

file(GLOB UTILITIES
        util/*.cpp
        util/*.h)

file(GLOB CHAR
        DnD5eCharBuilder/*.cpp
        DnD5eCharBuilder/*.h)

add_executable(character_builder ${CHAR} ${UTILITIES})

add_executable(debug main_debug.cpp ${UTILITIES})