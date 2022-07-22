#include <iostream>

int main()
{
    int year;

    std::cout << "Please enter year: " << std::endl;
    std::cin >> year;

    bool divisibleByFour = year % 4 == 0 ? true : false;
    bool divisibleByHundret = year % 100 == 0 ? true : false;
    bool divisibleByFourhundret = year % 400 == 0 ? true : false;


    if (divisibleByHundret)
    {
        if (divisibleByFourhundret)
        {
            std::cout << year << "is a leap year." << std::endl;
        }
        else
        {
            std::cout << year << "is NOT a leap year." << std::endl;
        }
    }
    else if (divisibleByFour)
    {
        std::cout << year << "is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << "is NOT a leap year." << std::endl;
    }
}
