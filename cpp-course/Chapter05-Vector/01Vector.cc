/*
best performance when removing/adding values at the END of the vector!

methods:
  - .size()
  - .push_back()
  - .pop_bacl()

https://en.cppreference.com/w/cpp/container/vector
*/

#include <iostream>
#include <cstdint>
#include <vector>

void print_vector(const std::vector<std::int32_t> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(5, 0);
    my_vector[2] = 42;
    my_vector.push_back(123);

    print_vector(my_vector);

    my_vector.pop_back();
    my_vector.pop_back();
    print_vector(my_vector);

    return 0;
}