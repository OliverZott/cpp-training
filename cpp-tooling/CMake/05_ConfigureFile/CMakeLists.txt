# mkdir build 
# cd build
# cmake ..
# make
# cd app
# ./Executable

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# Always set these standard variables
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # gcc compiler extensions

set(EXE_NAME Executable)
set(LIB_NAME Library)

add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
