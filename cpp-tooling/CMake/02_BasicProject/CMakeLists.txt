# 0. Create Code and CMake File
# 1. mkdir build
# 2. cd build
# 3. cmake ..
# 4a. cmake --build .
# 4b. make

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_executable(main main.cc)