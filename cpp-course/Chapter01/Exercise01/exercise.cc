#include <iostream>

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i <= I; i++)
    {
        for (int j = 0; j <= J; j++)
        {
            bool sum_is_Even = (i + j) % 2 == 0;
            if (sum_is_Even)
            {
                std::cout << "i: " << i << ", j: " << j << ":= even." << std::endl;
            }
            else
            {
                std::cout << "i: " << i << ", j: " << j << ":= odd." << std::endl;
            }
        }
    }
}
