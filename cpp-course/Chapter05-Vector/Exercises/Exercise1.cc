/*

*/

#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>

void fill_vector(std::vector<double> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        vector[i] = static_cast<double>(i);
    }
}

void print_vector(const std::vector<double> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        std::cout << "Vector[" << i << "] = " << vector[i] << std::endl;
    }
}

void vector_exp(std::vector<double> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        std::cout << "Exp[" << vector[i] << "] = " << std::exp(vector[i]) << std::endl;
    }
}

void vector_log(std::vector<double> &vector)
{
    for (std::size_t i = 0; i < vector.size(); i++)
    {
        std::cout << "Log[" << vector[i] << "] = " << std::log(vector[i]) << std::endl;
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