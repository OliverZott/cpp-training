#include <iostream>
#include <string>

void print_found_index(const std::size_t index, const std::string $func_name)
{
    std::cout << "Function: " << $func_name << std::endl;

    if (index != std::string::npos)
        std::cout << "Found at index: " << index << std::endl;
    else
        std::cout << "Not found" << std::endl;
}

int main()
{
    const auto text = std::string{"One Two Three"};

    const auto search_string = "Two";
    const auto index1 = text.find(search_string);
    print_found_index(index1, ".find()");

    const auto search_string2 = "T";
    const auto index2 = text.rfind(search_string2);
    print_found_index(index2, ".rfind(T)");

    const auto search_string3 = "TO";
    const auto index3 = text.find_first_of(search_string3);
    print_found_index(index3, ".find_first_of(TO)");

    return 0;
}