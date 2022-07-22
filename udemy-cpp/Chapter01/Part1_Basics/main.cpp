#include <iostream>

#include "Exercise_1_square.h"


int main()
{
    double a;
    double b;

    std::cout << "Enter first number" << std::endl;
    std::cin >> a;
    std::cout << "Enter second number" << std::endl;
    std::cin >> b;

    std::cout << "Result: " << calculateSquare(a, b) << std::endl;

    return 0;
}
