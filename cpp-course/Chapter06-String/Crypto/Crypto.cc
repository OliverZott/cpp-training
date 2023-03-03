#include <vector>
#include <cstdint>
#include <iostream>

#include "Crypto.h"

using ByteArray = std::vector<std::uint8_t>;

std::uint8_t hex_xor(const std::uint8_t hex1, const std::uint8_t hex2)
{
    return (hex1 ^ hex2);
}

ByteArray hex_vector_xor(const ByteArray hex1, const ByteArray hex2)
{
    auto compared_array = ByteArray(hex1.size(), 0x00);

    if (hex1.size() != hex2.size())
    {
        throw("Inputs have to be same size!");
    }

    for (std::size_t i = 0; i != hex1.size(); ++i)
    {
        compared_array[i] = (hex1[i] ^ hex2[i]);
    }

    return compared_array;
}