add_library(${LIB_NAME} my_lib.cc) 
target_include_directories(
    ${LIB_NAME} PUBLIC 
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include"
)
