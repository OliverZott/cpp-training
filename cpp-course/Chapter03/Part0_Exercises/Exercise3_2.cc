#include <cstdint>
#include <iostream>

/*
int *&input_array ...input_array is a reference to a variable that is a pointer to an int

Using a reference to a pointer allows the function to modify the pointer itself, not just the value it points to.
This means any changes to the pointer within the function will affect the original pointer passed to the function.
*/
void push_back(int *&input_array, const std::size_t &size, const int &value)
{

    std::cout << "----------- Inside function START -----------" << std::endl;
    int *temp = new int[size + 1];

    for (size_t i = 0; i < size; i++)
    {
        temp[i] = input_array[i];
    }

    temp[size] = value;

    std::cout << "----------- input_array -----------" << std::endl;
    std::cout << &input_array << std::endl;
    std::cout << *input_array << std::endl;
    std::cout << input_array << std::endl;

    delete[] input_array;

    input_array = temp; // input_array now pointing to other HEAP memory adress

    std::cout << "----------- temp -----------" << std::endl;
    std::cout << &temp << std::endl;
    std::cout << *temp << std::endl;
    std::cout << temp << std::endl;
    std::cout << "----------- input_array AFTER deleting and new assignemtn to temp -----------" << std::endl;
    std::cout << &input_array << std::endl;
    std::cout << *input_array << std::endl;
    std::cout << input_array << std::endl;

    std::cout << "----------- Inside function END -----------" << std::endl;
}

void pop_back(int *&input_array, const std::size_t &size)
{
    int *temp = new int[size + 1];

    for (size_t i = 0; i < size - 1; i++)
    {
        temp[i] = i;
    }

    delete[] input_array;

    input_array = temp;
}
