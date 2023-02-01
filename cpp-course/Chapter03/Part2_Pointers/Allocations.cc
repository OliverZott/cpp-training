/*
Heap allocation and de-allocation

Pointer is on STACK and points to memory adrres on the HEAP
    - new-keyword reserves memory on HEAP
    - pointer is living on the STACK

*/

#include <iostream>

int main()
{

    // Heap allocation

    int *p = new int; // lives on heap because of new-keyword
    *p = 4;

    // memory address of p on the STACK
    std::cout << "Memory address of p (&p): " << &p << std::endl;

    // address we are pointing to
    std::cout << "Memory address of pointed value by 'p': " << p << std::endl;
    std::cout << "Value  of memory-addres pointer 'p' points to : " << *p << std::endl;

    *p = 123;

    std::cout << "Memory address of 'p': " << &p << std::endl;
    std::cout << "Memory address of pointed value by 'p': " << p << std::endl;
    std::cout << "Value  of memory-addres pointer 'p' points to : " << *p << std::endl;

    // De-Allocation
    //   - not pointer but 4byte on heap deleted!
    delete p;

    return 0;
}
