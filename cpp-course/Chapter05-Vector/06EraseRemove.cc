/*
Remove from a vector

- .remove()
- .remove_if()
- .erase()

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

bool is_even(const int i)
{

    return i % 2 == 0;
}

int main()
{
    std::vector<int> my_vector{35, -24, 7, -24, 0, 26, -4};
    print_vector_info(my_vector);
    print_vector(my_vector);

    // remove moves the value to the END of the vector and returns iterator to the last element:
    //   [35, 7, 0, 26, -4, -24, -24] with iterator on first -24
    auto remove_it = std::remove(my_vector.begin(), my_vector.end(), -24);
    my_vector.erase(remove_it, my_vector.end());
    print_vector(my_vector);

    // remove all even numbers:
    auto remove_even_it = std::remove_if(my_vector.begin(), my_vector.end(), is_even);
    my_vector.erase(remove_even_it, my_vector.end());
    print_vector(my_vector);

    return 0;
}