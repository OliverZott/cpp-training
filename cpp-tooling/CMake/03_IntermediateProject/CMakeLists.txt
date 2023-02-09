cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# variables in cmake file
set(EXE_NAME Executable)
set(LIB_NAME Library)

add_subdirectory(src) # first because its used in app
add_subdirectory(app)