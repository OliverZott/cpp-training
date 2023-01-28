/*
All #-hashtag stuff are preprocessor-commands

#define ...preprocessor define
  - for text replacement (similar to a const)
  - debugger doesnt know the substitution

- define is handled by PRE-PROCESSOR
- const is handled by COMPILER

- Usage for define: activate / deactivate code
*/

#include <iostream>

#define NUM_PLAYERS 42

// #define MODE1
#define MODE2

int main()
{
    std::cout << "Define value: " << NUM_PLAYERS << std::endl;

#ifdef MODE1
    std::cout << "We are in Mode 1" << std::endl;
#endif

#ifdef MODE2
    std::cout << "We are in Mode 2" << std::endl;
#endif
}