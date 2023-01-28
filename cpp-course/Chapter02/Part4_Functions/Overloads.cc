#include <iostream>

int max_value(int a, int b)
{
    return a > b ? a : b;
}

double max_value(double a, double b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 1.0;
    double db = 2.0;

    std::cout << "Double Maximum is " << max_value(db, da) << std::endl;

    std::int32_t ia = 19;
    std::int32_t ib = 12;

    std::cout << "Int32 Maximum is " << max_value(ia, ib) << std::endl;

    return 0;
}