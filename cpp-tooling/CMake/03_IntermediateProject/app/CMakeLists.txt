add_executable(${EXE_NAME} main.cc)
target_link_libraries(${EXE_NAME} PUBLIC ${LIB_NAME}) # link o-file (from add_library) to executable