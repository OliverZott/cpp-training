#include <cstdint>
#include <cstdlib>
#include <iostream>

#include "DynArray.h"

struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};

DynamicArray create_dynamic_array(const double &value, const std::size_t length)
{
    DynamicArray dynamicArray = {.m_data = nullptr, .m_length = 0};
    dynamicArray.m_length = length;
    dynamicArray.m_data = new double[length];

    for (std::size_t i = 0; i < length; i++)
    {
        dynamicArray.m_data[i] = value;
    }

    return dynamicArray;
}

void push_back(DynamicArray &dynamicArray, const int &value)
{
    double *temp = new double[dynamicArray.m_length + 1];

    for (std::size_t i = 0; i < dynamicArray.m_length; i++)
    {
        temp[i] = dynamicArray.m_data[i];
    }

    temp[dynamicArray.m_length] = value;

    delete[] dynamicArray.m_data;

    dynamicArray.m_data = temp;
    dynamicArray.m_length++;
}

void pop_back(DynamicArray &dynamicArray)
{
    double *temp = new double[dynamicArray.m_length + 1];

    for (std::size_t i = 0; i < dynamicArray.m_length - 1; i++)
    {
        temp[i] = dynamicArray.m_data[i];
    }

    delete[] dynamicArray.m_data;

    dynamicArray.m_data = temp;
    dynamicArray.m_length--;
}
