#include <iostream>

#include "3_Exercises.h"

int main()
{
    // Instantiate matrix
    auto matrix = MatrixT(4, VectorT(3, 0.0));
    for (std::size_t i = 0; i != matrix.size(); ++i)
    {
        for (std::size_t j = 0; j != matrix[i].size(); ++j)
        {
            matrix[i][j] = static_cast<double>(i + j);
        }
    }

    // Exercise 1
    VectorT max_values = max_row_values(matrix);
    for (auto val : max_values)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    auto vec = VectorT{2, 36, 12, -34, 25};
    auto max = sort_and_max(vec);

    std::cout << "Maximum: " << max << "\n\n";

    for (auto val : vec)
    {
        std::cout << val << std::endl;
    }

    return 0;
}