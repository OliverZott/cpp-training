#include <cstdint>

// using pointer on heap array
double array_sum(const double *p_array, const std::size_t length)
{
    auto sum = 0.0;

    for (std::size_t i = 0; i < length; i++)
    {
        sum += p_array[i];
    }
    return sum;
}

std::int32_t *array_creator(const std::int32_t value, const std::size_t length)
{
    auto *array = new std::int32_t[length]; // heap memory allocated

    for (std::size_t i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array; // return pointer on first memory adress of heap array
}