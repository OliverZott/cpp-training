#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>

template <typename T>
void fill_vector(std::vector<T> &vector)
{
    for (T i = 0; auto &val : vector)
    {
        val = static_cast<T>(i);
        i++;
    }
}

template <typename T>
void print_vector(const std::vector<T> &vector)
{
    for (std::size_t i = 0; auto const val : vector)
    {
        std::cout << "Vector[" << i << "] = " << val << std::endl;
        i++;
    }
}

int main()
{
    auto vector1 = std::vector<std::int32_t>(3, 0.0);
    auto vector2 = std::vector<float>(3, 1.0);
    auto vector3 = std::vector<char>(3, 97);

    print_vector(vector1);
    print_vector(vector2);
    print_vector(vector3);

    return 0;
}