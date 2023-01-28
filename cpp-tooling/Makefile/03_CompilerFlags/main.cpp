/*
Compare:
make build DEBUG=1
make run DEBUG=1


make build DEBUG=0
make run DEBUG=0
*/

#include <iostream>

#include "my_lib.h"

int main()
{
    print_hello_world();
    int i = 234233663;
    short j = i;

    std::cout << j << std::endl;
}
