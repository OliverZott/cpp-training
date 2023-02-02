#include <iostream>
#include <cstdint>

int main()
{
    auto array_size = std::size_t{10};

    // reserve 10  times the size of int32 (int32--> 4byte x 10 = 40byte)
    // so it reserves 40 bytes on heap(?)
    // new type[] ...[] for various memory blocks (heap-array)
    auto *arr = new std::int32_t[array_size];

    for (std::size_t i = 0; i < array_size; i++)
    {
        arr[i] = i;
    }

    for (size_t i = 0; i < array_size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    // use [] with delete ...to deallocate ALL memory-blocks
    delete[] arr;

    return 0;
}