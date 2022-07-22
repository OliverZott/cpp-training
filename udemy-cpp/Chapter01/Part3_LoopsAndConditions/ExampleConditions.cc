#include <iostream>

int main()
{
    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    if (number >= 0 && number < 10)
    {
        if (number == 4)
        {
            std::cout << "You won with 4.";
        }
        else if (number == 2)
        {
            std::cout << "Second place with number 2" << std::endl;
        }
        else
        {
            std::cout << "You lost";
        }
    }
    else
    {
        std::cout << "You must enter number between 0 and 9." << std::endl;
    }


    return 0;
}
