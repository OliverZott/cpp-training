#include <iostream>

void print_int_pointer(int *p)
{
    std::cout << "Deref (*p): " << *p << std::endl;
    std::cout << "Ref (p): " << p << std::endl;
    std::cout << "Pointer address (&p): " << &p << std::endl;
}

int main()
{
    int a = 123;
    double b = -13.31;

    int *c = &a;

    print_int_pointer(c);

    --*c;
    print_int_pointer(c);


    int *d = &a;
    // showing same Pointer address, because call-by-value!
    // Inside function a copy is used!
    print_int_pointer(d);

    return 0;
}
