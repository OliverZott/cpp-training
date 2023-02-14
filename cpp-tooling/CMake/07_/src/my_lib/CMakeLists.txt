set(LIBRARY_SOURCES 
    "my_lib.cc")
set(LIBRARY_INCLUDES 
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")

add_library(${LIB_NAME} STATIC
    ${LIBRARY_SOURCES}) 
target_include_directories(${LIB_NAME} PUBLIC 
    ${LIBRARY_INCLUDES})
