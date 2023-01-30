#include <iostream>
#include <cstdint>

int main()
{
    // 1d array
    const char array1[]{"Hello"};

    // 2d array
    int matrix1[3][2]{1, 2, 3, 4, 5, 6};
    int matrix2[3][2]{{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << matrix2[i][j] << '\n';
        }
    }

    return 0;
}