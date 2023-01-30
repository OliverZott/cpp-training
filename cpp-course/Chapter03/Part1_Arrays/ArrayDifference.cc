#include <iostream>
#include <cstdint>

void print_array(const std::int32_t arr[], const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    // length implicit in array included
    const char last_name[] = "Doe";
    std::cout << last_name << std::endl; // printing whole array

    const std::int32_t values[]{1, 2, 3};
    std::cout << values << std::endl; // only memory address of first element

    // if array length exceeded, next memory adresses are printed
    for (std::int32_t i = 0; i < 7 - 1; i++)
    {
        std::cout << values[i] << '\n';
    }

    print_array(values, 3);

    return 0;
}