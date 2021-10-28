cmake_minimum_required(VERSION 3.15)

project(PogChessOS VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} tests/test.cpp)

message("Processing CMakeLists.txt")
