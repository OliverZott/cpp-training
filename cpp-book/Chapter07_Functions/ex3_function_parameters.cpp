/**
 * Overload functions and arbitrary parameters (chapter 7.8-7.11)
 * (page 175)
 *
 * - overloading
 * - default parameters
 * - arbitrary parameters
 */

#include <iostream>
#include <numeric>   // for accumulate
#include <algorithm> // for initializer list

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
    std::cout << "add(int, int): " << a + b << std::endl;
}

void add(double a, double b)
{
    std::cout << "add(double, double): " << a + b << std::endl;
}

/* default parameters */
double add(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0)
{
    return a + b + c + d + e;
}

/* arbitrary argument amount */
int add(std::initializer_list<int> ns)
{
    return std::accumulate(begin(ns), end(ns), 0);
}
