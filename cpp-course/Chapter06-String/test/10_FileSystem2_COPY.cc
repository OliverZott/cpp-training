/*
Filesystem - Check files in folder/subfolder

*/
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    fs::path current_path = fs::current_path();
    fs::path current_file_path = fs::current_path();
    current_file_path /= "10_FileSystem2.cc";

    // Iterate over folder
    for (auto it = fs::directory_iterator(current_path); it != fs::directory_iterator{}; ++it)
    {
        std::cout << *it << std::endl;
    }

    // Create folder
    fs::path new_directory_path;
    new_directory_path /= fs::current_path();
    new_directory_path /= "test";

    if (!fs::exists(new_directory_path))
    {
        fs::create_directory(new_directory_path);
    }

    // Copy file
    fs::path new_file_path;
    new_file_path /= new_directory_path;
    new_file_path /= "10_FileSystem2_COPY.cc";

    if (!fs::exists(new_file_path))
    {
        fs::copy_file(current_file_path, new_file_path);
    }

    return 0;
}