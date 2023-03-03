/*
Iterators / Pointers / References

While we are using pointers to hold a memory address, whatever memory address,
an iterator is always used with containers. An iterator is used to go through the elements of a container
and the items of the container don’t need to be stored on a contagious memory area.

- .data()       ...Pointer
- .front()      ...Reference
- .back()       ...Reference
- .begin()      ...Iterator
- .end()        ...Iterator

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
    std::vector<int> my_vector{1, 21, 31, 41, 51};
    print_info(my_vector);
    print_vector(my_vector);

    // Iterator general
    std::vector<int>::iterator begin_iterator;
    begin_iterator = my_vector.begin();

    // Vector Pointers / References
    auto p_vector = my_vector.data(); // pointer on
    std::cout << "*p_vector: " << *p_vector << std::endl;
    std::cout << "p_vector[0]: " << p_vector[0] << std::endl;
    // p_vector += 2;
    std::cout << "*(p_vector + 2): " << *(p_vector + 2) << std::endl;
    std::cout << "(*p_vector) + 2: " << (*p_vector) + 2 << std::endl
              << std::endl;

    auto &f_vector = my_vector.front();
    f_vector = -22;
    std::cout << "f_vector: " << f_vector << std::endl;
    std::cout << "&f_vector: " << &f_vector << std::endl;
    std::cout << "my_vector[0]: " << my_vector[0] << std::endl;
    std::cout << "&my_vector[0]: " << &my_vector[0] << std::endl;
    std::cout << "*p_vector: " << *p_vector << std::endl // still pointing to (front + 2)
              << std::endl;

    auto &b_vector = my_vector.back();
    b_vector = 42;
    std::cout << my_vector[my_vector.size() - 1] << std::endl;

    // Iteratoren:
    // [begin, end)
    auto begin = my_vector.begin();
    auto end = my_vector.end();
    std::cout << "*begin: " << *begin << std::endl;
    std::cout << "*end: " << *end << std::endl;
    ++begin;
    --end;
    std::cout << "*begin: " << *begin << std::endl;
    std::cout << "*end: " << *end << std::endl;

    for (auto it = my_vector.begin(); it != my_vector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}