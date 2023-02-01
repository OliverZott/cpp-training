/*
Pointer live on stack
Pointer can point to stack OR heap
*/
#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    *p_a = (2 * (*p_b)) + (3 * (*p_c)); // a = 13
    p_a = &b;                           // 2
    p_c = &a;                           // 13

    *p_b = *p_a + *p_c; // b = 2 + 13

    std::cout << a << std::endl;    // 13
    std::cout << *p_a << std::endl; // 15
    std::cout << *p_b << std::endl; // 15 (=b)
    std::cout << *p_c << std::endl; // 13
}