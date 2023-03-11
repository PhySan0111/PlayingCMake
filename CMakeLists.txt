# Minimum required version
cmake_minimum_required(VERSION 3.22.1)

#project name output
project(MY_MAIN)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# creates the output with the given project name
add_executable(${PROJECT_NAME} main.cpp)