#include <iostream>

// call-by-value
void f(int *p_num)
{
    std::cout << "F: p_number: " << p_num << std::endl;
    std::cout << "F: &p_number: " << &p_num << std::endl;
}

// call-by-reference: reference to a pointer to an int
void g(int *&p_num)
{
    std::cout << "G: p_number: " << p_num << std::endl;
    std::cout << "G: &p_number: " << &p_num << std::endl;
}

// call by reference: reference to an int
void h(int &p_num)
{
    std::cout << "H: p_number: " << p_num << std::endl;
    std::cout << "H: &p_number: " << &p_num << std::endl;

    // Following not working: p_num in function h is an int reference(heap), not a pointer(stack) (remove the dereference operator *)
    // std::cout << "H: *p_number: " << *p_num << std::endl;
}

int main()
{

    int *p_number = new int{5};
    std::cout << "MAIN: p_number: " << p_number << std::endl;
    std::cout << "MAIN: &p_number: " << &p_number << std::endl;
    std::cout << "MAIN: *p_number: " << *p_number << std::endl;

    // callbyvalue - inside func its local var with new address
    f(p_number);

    g(p_number);

    h(*p_number);
}
