set(EXE_SOURCES 
    "main.cc")

add_executable(${EXE_NAME} 
    ${EXE_SOURCES})
target_link_libraries(${EXE_NAME} PUBLIC ${LIB_NAME}) # link o-file (from add_library) to executable

# message("Exe Name: " ${EXE_NAME})