cmake_minimum_required(VERSION 3.14)

project(Chess)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
add_subdirectory(src)
add_subdirectory(tests)

