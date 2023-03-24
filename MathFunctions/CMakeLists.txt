# Create a library target
add_library(MathFunctions MathFunctions.cpp)

target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
