#include <cstdint>
#include <iostream>

void push_back(int *&input_array, const std::size_t &size, const int &value)
{

    std::cout << "----------- Inside function START -----------" << std::endl;
    int *temp = new int[size + 1];

    for (size_t i = 0; i < size; i++)
    {
        temp[i] = input_array[i];
    }

    temp[size] = value;

    delete[] input_array;

    input_array = temp; // input_array now pointing to other HEAP memory adress

    std::cout << "----------- input_array -----------" << std::endl;
    std::cout << &input_array << std::endl;
    std::cout << *input_array << std::endl;
    std::cout << input_array << std::endl;

    std::cout << "----------- temp -----------" << std::endl;
    std::cout << &temp << std::endl;
    std::cout << *temp << std::endl;
    std::cout << temp << std::endl;

    std::cout << "----------- Inside function END -----------" << std::endl;
}