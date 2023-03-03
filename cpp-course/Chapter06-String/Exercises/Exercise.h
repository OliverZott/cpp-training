#pragma once

#include <vector>
#include <cstdint>

using ByteArray = std::vector<std::uint8_t>;

std::uint8_t hex_xor(const std::uint8_t hex1, const std::uint8_t hex2);

ByteArray hex_vector_xor(const ByteArray hex1, const ByteArray hex2);