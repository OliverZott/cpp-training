/*
Vector addition
*/

#include <iostream>
#include <cstdint>

float *input_vector(std::uint32_t len)
{
    float *vector = new float[len];

    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cin >> vector[i];
    }

    return vector;
}

int main()
{
    constexpr auto len = std::uint32_t{3U};

    float vector1[len]{};
    float vector2[len]{};

    std::cout << "Enter values for vector1: " << '\n';
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Enter values for vector2: " << '\n';
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cin >> vector2[i];
    }

    std::cout << "Adding both arrays" << '\n';
    float result_vector[len];
    for (std::uint32_t i = 0; i < len; i++)
    {
        result_vector[i] = vector1[i] + vector2[i];
    }

    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << result_vector[i] << '\n';
    }

    // Better --------------------------------------------------

    // float *ptr; // pointer for array addresss
    // ptr = input_vector(len);
    int *a = new int[10]{1, 2, 3};

    return 0;
}
