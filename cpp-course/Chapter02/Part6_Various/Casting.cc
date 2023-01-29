/*
Type Casting

two styles of casting:
  - c++: static_cast<new_dtype>(variable)
  - c: (new_dtype)(variable)

c++ cast easier to read, more explicit!
c cast can cast everything, so more prone to errors
*/

#include <iostream>

int main()
{
    // C++
    int a = 12;
    float b = static_cast<float>(a);

    double c = 17.32;
    float d = static_cast<float>(c);

    // C
    short e = 256;
    char f = (char)e;

    return 0;
}