/*
C++ style arrays

*/

#include <array>
#include <iostream>
#include <cstdint>

template <std::size_t N>
void print_array(const std::array<std::int32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    constexpr std::uint32_t arr_len = 7;
    const std::array<std::int32_t, arr_len> arr = {0, 2, -53, 4, 5, -1, 42};

    print_array(arr);

    return 0;
}