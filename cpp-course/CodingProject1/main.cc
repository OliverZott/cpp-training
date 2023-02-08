#include <iostream>

#include "AlgoArray.h"
#include "DynArray.h"

int main()
{
    double fill_value = 1.0;
    std::size_t length = 5;

    DynamicArray my_array = create_dynamic_array(fill_value, length);

    return 0;
}
