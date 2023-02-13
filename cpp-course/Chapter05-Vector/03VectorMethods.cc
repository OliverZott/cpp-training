/*

- .size()
- .capacity()
- .empty()
- .reserve(x)
- .clear()
- .shrink_to_fit()

*/

#include <iostream>
#include <cstdint>
#include <vector>

void print_info(const std::vector<int> &vector)
{

    std::cout << "Size: " << vector.size() << std::endl;
    std::cout << "Capacity: " << vector.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << vector.empty() << std::endl
              << std::endl;
}

int main()
{
    std::vector<int> my_vector(10, 0);
    print_info(my_vector);

    my_vector.push_back(1);
    my_vector.push_back(1);
    my_vector.push_back(1);
    print_info(my_vector);

    my_vector.reserve(40); // for future new-allocation
    print_info(my_vector);

    my_vector.clear();
    print_info(my_vector);

    my_vector.push_back(42);
    my_vector.shrink_to_fit();
    print_info(my_vector);

    return 0;
}