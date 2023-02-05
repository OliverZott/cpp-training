#include <cstdint>

double array_sum(double *p_array, const std::size_t length)
{
    double result = 0;

    for (int i = 0; i < length; i++)
    {
        result += p_array[i];
    }
    return result;
}