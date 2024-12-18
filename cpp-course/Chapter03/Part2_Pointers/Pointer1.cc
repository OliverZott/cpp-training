/*

&: memory Address
*: Value of memory addres / pointer declaration?

& = Reference
* = Dereference

*/

#include <iostream>

int main()
{
    int number = 4;

    // & reference (memory adress)
    // * de-reference, shows value we are pointing to
    int *p = &number;

    std::cout << "Value of number (number): " << number << std::endl;
    std::cout << "Address of number (&number): " << &number << std::endl;
    std::cout << "Value of p, i.e. the adress p points to (p): " << p << std::endl;
    std::cout << "Address of p (&p): " << &p << std::endl;
    std::cout << "Value that the memory that p points to holds (*p): " << *p << std::endl;

    return 0;
}
