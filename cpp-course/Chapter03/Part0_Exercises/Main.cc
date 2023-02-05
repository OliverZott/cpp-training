#include <iostream>
#include "Exercise3_1.h"

int main()
{
    const std::size_t array_length = 100;
    auto *p_array = new double[array_length];

    for (int i = 0; i < array_length; i++)
    {
        p_array[i] = i;
    }

    auto sum = array_sum(p_array, array_length);
    std::cout << sum << std::endl;
    return 0;
}