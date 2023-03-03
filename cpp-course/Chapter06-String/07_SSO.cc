/*
Small String Optimization

- small string (few chars) can be handled on the STACK.
- implemented by compiler

*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Empty String
    auto str = std::string{};
    auto size = sizeof(str);
    auto capacity = str.capacity();
    std::cout << "sizeof: " << size << std::endl;
    std::cout << "capacity: " << capacity << std::endl;

    // Before Threshold String
    auto str2 = std::string(2, '*');
    auto size2 = sizeof(str2);
    auto capacity2 = str2.capacity();
    std::cout << "sizeof: " << size2 << std::endl;
    std::cout << "capacity: " << capacity2 << std::endl;

    // After Threshold String
    auto str3 = std::string(43, '*');
    auto size3 = sizeof(str3);
    auto capacity3 = str3.capacity();
    std::cout << "sizeof: " << size3 << std::endl;
    std::cout << "capacity: " << capacity3 << std::endl;
    return 0;
}