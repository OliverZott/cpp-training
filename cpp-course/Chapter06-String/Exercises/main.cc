#include <iostream>
#include <vector>
#include <cstdint>

#include "Exercise.h"

// using ByteArray = std::vector<std::uint8_t>;

int main()
{

    // Execise 1
    auto hex1 = std::uint8_t(0x01);
    auto hex2 = std::uint8_t(0xC1);

    auto result = hex_xor(hex1, hex2);
    std::cout << static_cast<int>(hex1) << " XOR " << static_cast<int>(hex2) << " = " << static_cast<int>(result) << std::endl;

    // Exercise 2
    auto hex_array1 = ByteArray{0x14, 0xA3, 0xFA, 0x6C};
    auto hex_array2 = ByteArray{0x3E, 0x17, 0xBC, 0xF1};
    auto hex_array3 = ByteArray{0x3E, 0x17, 0xBC};

    auto result_array = hex_vector_xor(hex_array1, hex_array2);
    for (auto hex : result_array)
    {
        std::cout << static_cast<int>(hex) << std::endl;
    }

    auto result_array2 = hex_vector_xor(hex_array2, hex_array3);

    return 0;
}