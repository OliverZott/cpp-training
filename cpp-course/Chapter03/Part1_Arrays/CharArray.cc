/*
Char arrays

null-terminating symbol \0
*/

#include <iostream>

int main()
{
    // 9 chars: empty space + null-terminating symbol at end \0
    std::cout << "hi there" << std::endl;
    std::cout << "hel\0lo" << std::endl;

    const char first_name[]{'J', 'o', 'h', 'n', '\0'};
    std::cout << first_name << '\n';

    char last_name[] = "Doe";
    last_name[0] = 'd';
    std::cout << last_name << '\n';

    for (int i; i < sizeof(last_name) - 1; i++)
    {
        std::cout << last_name[i] << '\n';
    }

    return 0;
}