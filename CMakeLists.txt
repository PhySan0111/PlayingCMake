# Minimum required version
cmake_minimum_required(VERSION 3.22.1)

# set the project name and version
project(MyMain VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(MainConfig.h.in MainConfig.h)

# creates the output with the given project name
add_executable(${PROJECT_NAME} main.cpp)

# add the MathFunctions library to get built
add_subdirectory(MathFunctions)

#link the target library to the executable
target_link_libraries(MyMain PUBLIC MathFunctions)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(MyMain PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/MathFunctions"
                           )