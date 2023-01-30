#include <iostream>

int main()
{

    const char array[]{"Hi !"};
    int i{0};
    while (i < 50)
    {
        if (array[i] == char{'\0'})
        {
            std::cout << "Length of array: " << i << '\n'; // or i+1 if we count null-temrinating string
            break;
        }
        i++;
    }

    return 0;
}