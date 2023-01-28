#include <iostream>

int main()
{

    // Heap allocation
    //  - int value is living on the HEAP
    //  - pointer is living on the STACK
    int *p = new int;
    *p = 4;

    // memory address of p on the STACK
    std::cout << "Memory address of 'p': " << &p << std::endl;
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
