/*
Iterator
... iterators point to a memory adress

- push_back  ...only for last string; else use append
- pop_back
- to_string

*/
#include <iostream>
#include <string>

int main()
{
    const auto text = std::string{"One Two Three"};

    // Iterator
    const auto first_char = text[0];
    std::cout << first_char << std::endl;

    for (auto it = text.begin(); it != text.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;

    for (const auto c : text) // better
    {
        std::cout << c;
    }
    std::cout << std::endl;

    for (auto it = text.rbegin(); it != text.rend(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;

    // to_string
    const auto val = 10.4F;
    const auto val_str = std::to_string(val);
    std::cout << val_str << std::endl;

    return 0;
}