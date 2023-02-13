/*

- .data()
- .front()
- .back()

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

void print_vector(const std::vector<int> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> my_vector{1, 2, 3, 4, 5};
    print_info(my_vector);
    print_vector(my_vector);

    auto p_vector = my_vector.data(); // pointer on
    std::cout << *p_vector << std::endl;
    p_vector += 2;
    std::cout << *p_vector << std::endl;

    auto &f_vector = my_vector.front();
    f_vector = -22;
    std::cout << my_vector[0] << std::endl;
    std::cout << *p_vector << std::endl; // still pointing to (front + 2)

    auto &b_vector = my_vector.back();
    b_vector = 42;
    std::cout << my_vector[my_vector.size() - 1] << std::endl;

    auto begin = my_vector.begin();
    auto end = my_vector.end();

    return 0;
}