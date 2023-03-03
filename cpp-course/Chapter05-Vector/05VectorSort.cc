/*
Sort a vector

- #include <algorithm>
- std::sort()

*/

#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

void print_vector_info(const std::vector<int> &vector)
{

    std::cout << "Size: " << vector.size() << std::endl;
    std::cout << "Capacity: " << vector.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << vector.empty() << std::endl
              << std::endl;
}

void print_vector(const std::vector<int> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }
    std::cout << std::endl;
}

bool sort_ascending(const int i, const int j)
{
    return i < j;
}

bool sort_descending(const int i, const int j)
{
    return i > j;
}

bool sort_ascending_even(const int i, const int j)
{
    auto res = (i > j) && (i % 2 == 0);
    return res;
}

int main()
{
    std::vector<int> my_vector{35, -24, 7, 19, 0};
    print_vector_info(my_vector);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_ascending_even);
    print_vector(my_vector);

    return 0;
}