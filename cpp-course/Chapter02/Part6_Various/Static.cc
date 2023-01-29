/*
Static keyword / static memory

global static vars:
  - constexpr static
  - forces compiler to create variable during compiletime

local static vars:
  - static ...gives variable "memory"
  - variable created once during compiletime with "memory"

3 memory types:
  - stack
  - heap
  - static ...memory where variables created during compiletime

*/

#include <iostream>

// global static
constexpr static int VAL = 12;

int func(const int val)
{
    // local static ...variable has memory which can be used for repeated function-calls
    static int counter = 0;
    counter++;

    if (counter <= 3)
    {
        const int temp = val * 2;
        return temp / 3;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::cout << func(VAL) << '\n';
    std::cout << func(VAL) << '\n';
    std::cout << func(VAL) << '\n';
    std::cout << func(VAL) << '\n';
    return 0;
}