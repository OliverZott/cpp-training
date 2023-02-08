/*

LValue ...left of "="; everythin having MEMORY ADRRESS
RValue ...no memory adress

*/
#include <iostream>

// void f(int v) // lvalue: all 5 examples work
// void f(const int v) // const lvalue: all 5 examples work
// void f(int &v) // lvalue reference: 2  e.g. f(2) -> 2 has no memory adress!
// void f(const int &v) // const lvalue reference: 4 ...ok for const vars and rvalues also ok

void f(const int &v)
{
    std::cout << v << std::endl;
}

int main()
{
    int a = 2;        // lvalue
    const int b = 2;  // const lvalue
    int &c = a;       // lvalue reference
    const int &d = b; // const lvalue reference

    f(a);
    f(b);
    f(c);
    f(d);
    f(2); // RValue

    return 0;
}