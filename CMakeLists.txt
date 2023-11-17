# To find the cmake version run
cmake_minimum_required(VERSION 3.5)

# Set the project name 
project(studycpp)

# Standard cpp 
set(CMAKE_CXX_STANDARD 11)

# Create a sources variable with a link to all cpp files to compile
file(GLOB SOURCES "src/06-testenum.cpp")

# Add an excutable
add_executable(studycpp ${SOURCES})

# Add inlcude
# target_include_directories(studycpp
#     PRIVATE
#         ${PROJECT_SOURCE_DIR}/src/05-speech
# )
