/*
Ranged for-loop

container must have begin and end implemented!
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector{35, -24, 7, -5, 0, 22, 51};

    // 1.) auto val : vec
    // Problem: no pointer/Reference --> copy s genrated
    for (auto val : my_vector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // 2.) auto &val : vec
    // Better: no copy --> good for big data types/objects
    for (auto &val : my_vector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // 3.) const auto val : vec
    // Readonly with copy
    for (const auto val : my_vector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

        // 4.) const auto val : vec
    // Readonly without copy
    for (const auto &val : my_vector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}