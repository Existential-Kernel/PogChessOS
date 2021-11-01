cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME PogChess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(${PROJECT_NAME} VERSION 1.0)
add_executable(${PROJECT_NAME}, tests/test.cpp)

message("Processing CMakeLists...")