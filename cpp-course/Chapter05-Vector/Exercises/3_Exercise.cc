#include <vector>
#include <algorithm>
#include <iostream>
// #include <cmath>

using ValueT = double;
using VectorT = std::vector<ValueT>;
using MatrixT = std::vector<VectorT>;

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    auto row_maxima = std::vector<double>(matrix.size());
    auto row_size = matrix.size();
    auto col_size = matrix[0].size();

    std::vector<double>::iterator max_iterator;
    for (auto i = 0; i < row_size; ++i)
    {
        max_iterator = std::max_element(matrix[i].begin(), matrix[i].end());
        row_maxima[i] = *max_iterator;
    }

    return row_maxima;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
{
    std::sort(vec.begin(), vec.end());
    std::vector<double>::iterator max_iterator = std::max_element(vec.begin(), vec.end());
    return *max_iterator;
}