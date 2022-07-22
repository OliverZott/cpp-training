#include <iostream>

static bool IsPrime(int number)
{
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    for (int i = 1; i < 100; i++)
    {
        if (IsPrime(i))
        {
            std::cout << i << " is prime." << std::endl;
        }
    }
}
