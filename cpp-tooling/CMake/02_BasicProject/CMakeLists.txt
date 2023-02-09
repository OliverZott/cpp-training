# 0. Create Code and CMake File
# 1. mkdir build
# 2. cd build
# 3. cmake ..
# 4a. cmake --build .
# 4b. make

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# variables in cmake file
set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)

# add libraries, gets compiled to o-file
add_library(${LIBRARY_NAME} my_lib.cc) 

add_executable(${EXECUTABLE_NAME} main.cc)

# link o-file (from add_library) to executable
target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})