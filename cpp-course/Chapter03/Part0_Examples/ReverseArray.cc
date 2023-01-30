#include <iostream>
#include <cstdint>

int main()
{
    constexpr static auto len = std::uint32_t{4};

    std::uint32_t array1[len]{1, 3, 6, 15};
    std::uint32_t result_array[len];

    for (std::uint32_t i = 0; i < len; i++)
    {
        result_array[len - 1 - i] = array1[i];
    }

    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << result_array[i] << '\n';
    }

    return 0;
}