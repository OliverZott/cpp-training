/*
Const parameters are INPUT ONLY

*/

#include <iostream>
#include <cstdint>

// Copy - Input only but modifiable
// local variables inside a function are stored on the stack
void copy(int v)
{
    v *= 2;
    std::cout << "f1: " << v << std::endl;
    std::cout << "f1: " << &v << std::endl;
}

// Const Copy - Input only and const (parameter just an input (dont want to change variable itself)
void copy_const(const int v)
{
    // v *= 2; // error
    std::cout << "f2: " << v << std::endl;
    std::cout << "f2: " << &v << std::endl; // if same address as above, only by chance!
}

// Ref Input only, becasue of const
void reference_input(const int &v)
{
    // v *= 2;
    std::cout << "f3: " << v << std::endl;
    std::cout << "f3: " << &v << std::endl;
}

// Ref Input & Output
void reference_in_output(int &v)
{
    v *= 2;
    std::cout << "f4: " << v << std::endl;
    std::cout << "f4: " << &v << std::endl;
}

int main()
{
    auto a = 2; // local variable and no dynamic memory allocated (new/malloc) -> a is on stack
    std::cout << "a: " << a << std::endl;
    std::cout << "&a: " << &a << std::endl;

    copy(a);
    copy_const(a);
    reference_input(a);
    reference_in_output(a);

    std::cout << "a: " << a << std::endl;
    std::cout << "&a: " << &a << std::endl;
    return 0;
}