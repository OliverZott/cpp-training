/*
Pointer Decay

If array is a parameter of a function, this arr variable "decays" to a pointer, which points to first memory address.
Lot of security issues derive from this old C-style behavior

Hence, one would use:
    - void print_array(const std::int32_t *arr, const std::size_t len)      instead of
    - void print_array(const std::int32_t arr[], const std::size_t len)
*/

#include <iostream>

void print_array1(const std::int32_t *arr, const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

void print_array2(const std::int32_t arr[], const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << *(arr + i) << std::endl; // pointer arithemtic
    }
}

int main()
{
    constexpr auto len = std::size_t{4};
    // constexpr  std::size_t len = 4U;

    std::int32_t arr[len]{1, 2, 3, 4};

    print_array1(arr, len);
    print_array2(arr, len);

    return 0;
}
