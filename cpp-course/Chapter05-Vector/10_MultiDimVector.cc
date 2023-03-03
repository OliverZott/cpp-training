#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    // 2D Array - 3 rows, 2 columns
    // int matrix2[3][2]{{1, 2}, {3, 4}, {5, 6}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         std::cout << matrix2[i][j] << '\n';
    //     }
    // }

    // 2d-Vector
    auto vector = std::vector<std::vector<std::int32_t>>{{1, 2}, {3, 4}, {5, 6}};

    for (const auto &row : vector)
    {
        for (const auto &val : row)
        {
            std::cout << val << '\n';
        }
    }

    auto null_matrix = std::vector<std::vector<std::int32_t>>(3, std::vector(2, 0));
    for (const auto &row : null_matrix)
    {
        for (const auto &val : row)
        {
            std::cout << val << '\n';
        }
    }

    return 0;
}