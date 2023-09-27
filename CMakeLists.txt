# To find the cmake version run
cmake_minimum_required(VERSION 3.5)

# Set the project name 
project(studycpp)

# Standard cpp 
set(CMAKE_CXX_STANDARD 11)

# Add an excutable
add_executable(studycpp src/04-listExample.cpp)

# Add inlcude
target_include_directories(studycpp
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
