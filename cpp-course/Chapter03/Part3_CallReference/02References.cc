/*
Two variants of call-by-ref

https://www.udemy.com/course/der-komplettkurs-zur-modernen-c-programmierung/learn/lecture/18708308#overview
*/

#include <iostream>
#include <cstdint>

// this function creates copy for variable value
void f1(int v)
{
    std::cout << "f1: " << v << std::endl;
    std::cout << "f1: " << &v << std::endl;
}

// c-style, using pointer (dont use, still copy)
//   - pointer TO the given variable
void f2(int *v)
{
    std::cout << "f2: " << *v << std::endl; // de-reference for value of pointer
    std::cout << "f2: " << v << std::endl;  // pointer itlsef (memory address)
}

// c++ -style, using reference (always use for call-by-ref)
//  - the given variable itself!!
//  - better, because no null-ptr poblem, cause no dereferencing
//  - for compiler/assembler this is the same: int &v --> int *const v
void f3(int &v)
{
    std::cout << "f3: " << v << std::endl;
    std::cout << "f3: " << &v << std::endl;
}

int main()
{
    auto a = 2;
    std::cout << &a << std::endl;

    f1(a);
    f2(&a);
    f3(a);

    return 0;
}