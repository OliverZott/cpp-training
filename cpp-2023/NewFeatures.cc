// template lambdas
//     lambda with a template parameter, allowing the lambda to accept arguments of any type.This feature, known as template lambdas, was introduced in C++ 20
// template parameter list
//     <typename T> inside the lambda is a template parameter list. The feature allowing lambdas to have template parameters with auto is known as deducing this, which is available in C++23.

#include <iostream>

int main()
{
    // Define a lambda that can take any type of argument
    auto print = []<typename T>(T value)
    { std::cout << value << std::endl; };
    print("Hello, C++23!");
    return 0;
}
