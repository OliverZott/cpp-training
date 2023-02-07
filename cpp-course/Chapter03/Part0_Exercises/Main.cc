#include <iostream>
#include "Exercise3_1.h"
#include "Exercise3_2.h"

int main()
{
    // ========================= Exercis 1 =========================
    // const std::size_t p_array_length = 100;
    // auto *p_array = new double[p_array_length];

    // for (int i = 0; i < p_array_length; i++)
    // {
    //     p_array[i] = i;
    // }

    // auto sum = array_sum(p_array, p_array_length);
    // std::cout << sum << std::endl;

    // ========================= Exercise 2 =========================
    // auto array_length = std::size_t{0};
    // auto array_value = std::int32_t{0};

    // std::cout << "Enter array lenth: " << std::endl;
    // std::cin >> array_length;
    // std::cout << "Enter array value: " << std::endl;
    // std::cin >> array_value;

    // auto *array = array_creator(array_value, array_length);

    // for (std::size_t i = 0; i < array_length; i++)
    // {
    //     std::cout << array[i] << std::endl;
    // }

    // ========================= Exercise 3 =========================
    std::size_t size = 3;
    int *int_array = new int[size];
    int_array[0] = 13;
    int_array[1] = 1;
    int_array[2] = 2;

    // std::cout << &int_array << std::endl;
    // std::cout << *int_array << std::endl;
    // std::cout << int_array << std::endl;

    push_back(int_array, size, 42);
    size++;

    // std::cout << &int_array << std::endl;
    // std::cout << *int_array << std::endl;
    // std::cout << int_array << std::endl;

    for (size_t i = 0; i < size + 2; i++)
    {
        std::cout << int_array[i] << std::endl;
    }

    pop_back(int_array, size);
    size--;

    for (size_t i = 0; i < size + 2; i++)
    {
        std::cout << int_array[i] << std::endl;
    }

    return 0;
}