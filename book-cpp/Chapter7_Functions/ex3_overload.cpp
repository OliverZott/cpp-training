/**
 * Chapter 7.8 - overload functions
 *
 * @author Oliver
 */

#include <iostream>

void print(int value)
{
    std::cout << "Function: print(integer): " << value << std::endl;
}

void print(double value)
{
    std::cout << "Function: print(double): " << value << std::endl;
}

void print(int value1, double value2)
{
    std::cout << "Function: print(int, double): " << value1 << ", " << value2 << std::endl;
}

void add(int a, int b)
{
    std::cout << "add(int, int): " << a+b << std::endl;
}

void add(double a, double b)
{
    std::cout << "add(double, double): " << a+b << std::endl;
}
