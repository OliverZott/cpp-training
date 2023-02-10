cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# Always set these standard variables
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # gcc compiler extensions

# variables in cmake file
set(EXE_NAME Executable)
set(LIB_NAME Library)

# custom option
option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

add_subdirectory(src) # first because its used in app
if(COMPILE_EXECUTABLE) # only use 
    add_subdirectory(app)
endif()