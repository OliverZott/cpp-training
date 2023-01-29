/*
const keyword (run time constant)

const keyword:
  - variable cannot changed during runtime
  - for local constants

Advantages of const keyword
- clearer to reader/programmer that value wont change
- compiler my optimize code better

Compiletime vs Runtime
- Compiletime ...informations when building/compiling
- Runtime ...information when running/executing the programm

*/
#include <iostream>

int func(const int val)
{
    const int temp = val * 2;
    return temp / 3;
}

int main()
{
    const int v = 2;
    std::cout << func(v) << '\n';
    return 0;
}