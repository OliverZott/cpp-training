#include <iostream>
/*
https://en.cppreference.com/w/cpp/string/basic_string
*/

#include <string>

int main()
{
    // lhs: std:: string
    // rhs: const char[]
    std::string s = "Hello there :)";
    std::cout << s << "\n";

    const auto index = s.find("lo");

    if (index != std::string::npos)
    {
        std::cout << index << "\n";
    }

    std::cout << std::boolalpha << s.empty() << " \n";
    std::cout << s.length() << " \n";

    return 0;
}