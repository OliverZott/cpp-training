/*
constexpr keyword (compile time constant)

constexpr keyword:
  - used if value of variable already fixed during compiletime
  - used for global variables
*/

#include <iostream>

constexpr int VAL = 2;

int func(const int val)
{
    const int temp = val * 2;
    return temp / 3;
}

int main()
{
    std::cout << func(VAL) << '\n';
    return 0;
}