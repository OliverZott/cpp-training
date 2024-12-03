#include <iostream>

void print_int_pointer(int *p)
{
    std::cout << "Deref (*p): " << *p << std::endl;
    std::cout << "Ref (p): " << p << std::endl;
    std::cout << "Pointer address (&p): " << &p << std::endl;
    std::cout << "" << std::endl;
}

int main()
{
    int a = 1337;
    double b = -13.37;

    int *c = &a;
    print_int_pointer(c);

    --*c; // decrement value of a
    print_int_pointer(c);

    int *d = &a;
    print_int_pointer(d);
    // showing same Pointer address, because call-by-value!
    // Inside function a local copy is used!

    *d += 10;
    print_int_pointer(d);

    return 0;
}
