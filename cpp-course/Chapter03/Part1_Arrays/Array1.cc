#include <iostream>

int main()
{
    // decalre and initialize array
    int arr[5] = {2, 53, 3, 64, -19};
    float arr2[10] = {};

    char name[] = "Olli";

    // write to array
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        arr2[i] = i * 2.3f;
    }

    // read array
    for (int i = 0; i < sizeof(arr2) / sizeof(float); i++)
    {
        std::cout << "array at position " << i << ": " << arr2[i] << std::endl;
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << name[i] << std::endl;
    }

    return 0;
}
