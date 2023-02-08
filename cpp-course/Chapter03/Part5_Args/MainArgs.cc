/*
argc: argument count
argv: argument values

docs: https://en.cppreference.com/w/cpp/string/byte/atoi

Usage:

 ./main 234 sdf

*/

#include <iostream>
#include <cstdint>

// ** like 2D array
// same as char *char[]
int main(int argc, char **argv)
{

    for (size_t i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }

    if (argc > 1)
    {
        int arg_value = std::atoi(argv[1]); // convert to int
        std::cout << arg_value << std::endl;
    }

    return 0;
}