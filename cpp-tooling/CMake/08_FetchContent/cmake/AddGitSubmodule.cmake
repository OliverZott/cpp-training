function(add_git_submodule dir)
    find_package(Git REQUIRED)  # cmake looking for git installation (creating internal var GIT_EXECUTABLE)

    if (NOT EXISTS ${dir}/CMakeLists.txt)
        execute_process(COMMAND ${GIT_EXECUTABLE} 
            submodule update --init --recursive --${dir}
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
    endif()

    add_subdirectory(${dir})

endfunction(add_git_submodule dir)