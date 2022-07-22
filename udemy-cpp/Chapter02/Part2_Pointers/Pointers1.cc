#include <iostream>

int main()
{
    int number = 4;

    // & reference
    // * de-reference
    int *p = &number;

    std::cout << "Value: 'number': " << number << std::endl;
    std::cout << "Address: '&number': " << &number << std::endl;
    std::cout << "Value: 'p': " << p << std::endl;
    std::cout << "Value of memory address 'p' points to: '*p'" << *p << std::endl;

    return 0;
}
