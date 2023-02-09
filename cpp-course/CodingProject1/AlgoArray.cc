#include "DynArray.h"
#include "AlgoArray.h"

double sum(DynamicArray &dynamicArray)
{
    auto result = double{0};

    for (std::size_t i = 0; i < dynamicArray.m_length; i++)
    {
        result += dynamicArray.m_data[i];
    }

    return result;
}

double mean(DynamicArray &dynamicArray)
{
    return sum(dynamicArray) / static_cast<double>(dynamicArray.m_length);
}

double median(DynamicArray &dynamicArray)
{
    // for sorted array only
    const bool has_even_length = dynamicArray.m_length / 2 == 0;

    if (has_even_length)
    {
        const std::size_t index1 = dynamicArray.m_length / 2;
        const std::size_t index2 = (dynamicArray.m_length / 2) - 1;
        return (dynamicArray.m_data[index1] + dynamicArray.m_data[index2]) / 2;
    }

    const std::size_t index = dynamicArray.m_length / 2;
    return dynamicArray.m_data[index];
}