#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;

    std::cout << "Json Lib Version (GIT submodule): "
              << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << std::endl;

    print_hello();

    return 0;
}