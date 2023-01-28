#include <iostream>

/*
Templates correspond to generics in java/c#

 */

template <typename T>
T max_value(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 1.0;
    double db = 2.0;

    std::cout << "Double Maximum is " << max_value<double>(db, da) << std::endl; // diamond operator unnecessary

    std::int32_t ia = 19;
    std::int32_t ib = 12;

    std::cout << "Int32 Maximum is " << max_value(ia, ib) << std::endl;

    char ca = 'g';
    char cb = 'f';

    std::cout << "Char Maximum is " << max_value(ca, cb) << std::endl;

    return 0;
}