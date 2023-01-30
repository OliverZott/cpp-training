#include <iostream>
#include <cstdint>

int main()
{

    // 2d array
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};

    std::int32_t matrix[num_rows][num_cols]{{1, 2}, {3, 4}, {5, 6}};

    std::int32_t sum_col1 = 0;
    std::int32_t sum_col2 = 0;

    for (std::int32_t i = 0; i < 3; i++)
    {

        for (std::int32_t j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                sum_col1 += matrix[i][j];
            }
            else
            {
                sum_col2 += matrix[i][j];
            }
        }
    }

    std::cout << "Sum of column1: " << sum_col1 << '\n';
    std::cout << "Sum of column2: " << sum_col2 << '\n';

    // ----------------------------- Shorter -----------------------------

    std::int32_t col_sums[num_cols]{};

    for (std::int32_t i = 0; i < 3; i++)
    {

        for (std::int32_t j = 0; j < 2; j++)
        {
            col_sums[j] += matrix[i][j];
        }
    }

    std::cout << "Sum of column1: " << col_sums[0] << '\n';
    std::cout << "Sum of column2: " << col_sums[1] << '\n';

    return 0;
}