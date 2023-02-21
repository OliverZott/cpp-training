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

set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/") 
include(AddGitSubmodule)
include(FetchContent)

# Json converter library
FetchContent_Declare(
    nlohmann_json   # name of library... in cmake file of rep: project(...)
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.2
    GIT_SHALLOW TRUE
)
FETCHCONTENT_MAKEAVAILABLE(nlohmann_json)  # same as add_library()

# String format library
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 9.1.0
    GIT_SHALLOW TRUE
)
FETCHCONTENT_MAKEAVAILABLE(fmt)

# Logging library
FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog
    GIT_TAG v1.11.0
    GIT_SHALLOW TRUE
)
FETCHCONTENT_MAKEAVAILABLE(spdlog)

# CMD args (option parser library)
FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY https://github.com/jarro2783/cxxopts
    GIT_TAG v3.1.1
    GIT_SHALLOW TRUE
)
FETCHCONTENT_MAKEAVAILABLE(cxxopts)

# Unit Testing
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v3.3.1 # if problemsd: v2.13.9
    GIT_SHALLOW TRUE
)
FETCHCONTENT_MAKEAVAILABLE(Catch2)

add_subdirectory(configured)
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)
