/*
Heap allocation and de-allocation

Pointer is on STACK and points to memory adrres on the HEAP
    - new-keyword reserves memory on HEAP
    - pointer is living on the STACK

    Stack                   Heap
    ------------------------------------
    | int *p | ----> | [int value: 10] |
    ------------------------------------


- int *p ...This declares a pointer p that lives on the stack.
- p = new int ...This allocates memory for an int on the heap, and p now holds the address of this memory.
- *p ...This dereferences the pointer p, meaning it accesses the value stored at the memory address that p points to, which is the memory allocated on the heap.

above is the same as:
- int *p = new int; ... declares a pointer p and allocates memory for an int on the heap, assigning the address to p.

*/

#include <iostream>

int main()
{

    // Heap allocation

    int *p = new int; // pointer live on stack but dynamically allocates memory for an integer on the heap. The pointer p now holds the address of this newly allocated memory.
    *p = 4;

    std::cout << "Memory address of p (&p): " << &p << std::endl;

    // address we are pointing to
    std::cout << "Memory address pointer 'p' points to : " << p << std::endl;
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
