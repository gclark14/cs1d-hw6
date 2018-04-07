cmake_minimum_required(VERSION 3.8)
project(hw6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sort.cpp InsertionSort.cpp)
add_executable(hw6 ${SOURCE_FILES})