/*
Improvement with rangerd-for loop

*/

#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>

void fill_vector(std::vector<double> &vector)
{
    for (int i = 0; auto &val : vector)
    {
        val = static_cast<double>(i);
        i++;
    }
}

void print_vector(const std::vector<double> &vector)
{
    for (std::size_t i = 0; auto const val : vector)
    {
        std::cout << "Vector[" << i << "] = " << val << std::endl;
        i++;
    }
}

void vector_exp(std::vector<double> &vector)
{
    for (std::size_t i = 0; auto const val : vector)
    {
        std::cout << "Exp[" << vector[i] << "] = " << std::exp(val) << std::endl;
        i++;
    }
}

void vector_log(std::vector<double> &vector)
{
    for (std::size_t i = 0; auto const val : vector)
    {
        std::cout << "Log[" << vector[i] << "] = " << std::log(val) << std::endl;
    }
}

int main()
{
    auto my_vector = std::vector<double>(7);

    fill_vector(my_vector);
    print_vector(my_vector);
    vector_exp(my_vector);
    vector_log(my_vector);

    return 0;
}