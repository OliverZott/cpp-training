/*
- use std::string::view instead of "cnst std::string ref"
- std::string_view is small wrapper with pointer and length
*/
#include <iostream>
#include <string>
#include <string_view>

// overloading of "new" operator to show allocation process
void *operator new(std::size_t count)
{
    std::cout << "allocating" << std::endl;
    return malloc(count);
}

void do_something1(const std::string &s)
{
    std::cout << s << std::endl;
}

void do_something2(const std::string_view sv)
{
    std::cout << sv << std::endl;
}

int main()
{
    auto s = std::string{"Hi there, resistance is futile!"};
    auto sub_s = std::string{s.substr(4, 12)};
    do_something1(sub_s);

    // allocation output shows, thta a temporary string object is created!
    do_something1("Blub"); // char array will be casted to string first! even if function param is adress
    do_something2("Blub"); // std::string_view is small wrapper with pointer and length

    return 0;
}