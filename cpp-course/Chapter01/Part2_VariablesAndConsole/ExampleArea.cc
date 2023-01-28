#include <iostream>

int main()
{
    double a;
    double b;

    std::cout << "Enter first number" << std::endl;
    std::cin >> a;
    std::cout << "Enter second number" << std::endl;
    std::cin >> b;

    double perimeter = 2 * a + 2 * b;
    double area = a * b;

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}
