/*
Each "new" needs a "delete" to de-allocate memory on HEAP

use:
    - make build_all
    - ./Main
*/

#include <cstdint>
#include <iostream>

int main()
{
    const auto length = std::size_t{4};
    auto arr = new std::int32_t[length]; // reserve memory on HEAP

    for (std::size_t i = 0; i < length; i++)
    {
        arr[i] = static_cast<std::int32_t>(i);
        std::cout << arr[i] << std::endl;
    }

    // delete[] arr;

    return 0;
}