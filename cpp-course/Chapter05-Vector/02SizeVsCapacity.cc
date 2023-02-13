/*
size vs capacity
*/

#include <iostream>
#include <cstdint>
#include <vector>

int main()
{
    auto my_vector = std::vector<std::int32_t>(0);

    for (int i = 0; i < 8; i++)
    {
        my_vector.push_back(i);
    }

    std::cout << my_vector.size() << std::endl;
    std::cout << my_vector.capacity() << std::endl;

    my_vector.push_back(124);

    std::cout << my_vector.size() << std::endl;
    std::cout << my_vector.capacity() << std::endl;

    return 0;
}