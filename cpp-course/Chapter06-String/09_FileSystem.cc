/*
Filesystem STL

- ::path
- ::current_path()
- .relative_path()
*/
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    // /home/ozott/training/cpp-training/cpp-course/Chapter06-String/09_FileSystem.cc

    fs::path workspace_path = "/home/ozott/training/cpp-training/cpp-course";

    fs::path chapter_path;
    chapter_path = workspace_path;
    chapter_path /= "Chapter06-String";

    fs::path current_file_path = fs::current_path();
    current_file_path /= "09_FileSystem.cc";

    std::cout << workspace_path << std::endl;
    std::cout << chapter_path << std::endl;
    std::cout << current_file_path << std::endl
              << std::endl;

    std::cout << ".relative_path() " << current_file_path.relative_path() << std::endl;
    std::cout << ".parent_path() " << current_file_path.parent_path() << std::endl;
    std::cout << ".filename() " << current_file_path.filename() << std::endl;
    std::cout << ".stem() " << current_file_path.stem() << std::endl;
    std::cout << ".extension() " << current_file_path.extension() << std::endl
              << std::endl;

    std::cout << "fs::exists() " << std::boolalpha << fs::exists(current_file_path) << std::endl;
    std::cout << "fs::is_regular_file() " << std::boolalpha << fs::is_regular_file(current_file_path) << std::endl;
    std::cout << "fs::is_directory() " << std::boolalpha << fs::is_directory(current_file_path) << std::endl;

    return 0;
}