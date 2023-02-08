#pragma once

#include <cstdint>

struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};

DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

void push_back(DynamicArray &dynamicArray, const int &value);
void pop_back(DynamicArray &dynamicArray);
