#include <iostream>

int main()
{
    // HEAP allocation
    int *p_zahl = new int{4};
    // *p_zahl = 4;

    std::cout << "p_zahl: " << p_zahl << std::endl;
    std::cout << "*p_zahl: " << *p_zahl << std::endl;
    std::cout << "&p_zahl: " << &p_zahl << std::endl;

    // Heap de-allocation
    delete p_zahl;

    std::cout << "p_zahl: " << p_zahl << std::endl;
    std::cout << "*p_zahl: " << *p_zahl << std::endl;
    std::cout << "&p_zahl: " << &p_zahl << std::endl;


    // Release memory
    p_zahl = nullptr;

    if (p_zahl != nullptr)
    {
        std::cout << "p_zahl: " << p_zahl << std::endl;
    }

    return 0;
}
