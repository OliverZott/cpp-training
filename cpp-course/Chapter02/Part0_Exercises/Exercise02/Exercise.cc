#include <iostream>

#include "Exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i <= I; i++)
    {
        for (int j = 0; j <= J; j++)
        {
            std::cout << "i: " << i << " , j: " << j << " := " << is_even(i, j) << std::endl;
        }
    }
}

std::string is_even(int i, int j)
{
    return (i + j) % 2 == 0 ? "Gerade!" : "Ungerade!";
}
