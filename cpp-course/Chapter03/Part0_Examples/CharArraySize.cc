/*

char{'\0'}  ...brace initialization (uniform initialization)

char nullChar = '\0';  // Assigning the null character
char nullChar{'\0'};  // Brace initialization (Uniform initialization)
char c('a');  // Constructor-style initialization
char c = 'a';  // Copy initialization


*/

#include <iostream>

int main()
{

    const char array[]{"Hi !"};
    int i{0};
    while (i < 50)
    {
        if (array[i] == char{'\0'})
        {
            std::cout << "Length of array: " << i << '\n'; // or i+1 if we count null-temrinating string
            // continue;
            break;
        }
        i++;
    }

    return 0;
}