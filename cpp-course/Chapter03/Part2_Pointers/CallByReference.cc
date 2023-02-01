#include <iostream>

// call-by-value
void f(int *p_num)
{
    std::cout << "F: p_number: " << p_num << std::endl;
    std::cout << "F: &p_number: " << &p_num << std::endl;
}

// call-by-reference
void g(int *&p_num)
{
    std::cout << "G: p_number: " << p_num << std::endl;
    std::cout << "G: &p_number: " << &p_num << std::endl;
}

int main()
{

    int *p_number = new int{5};
    std::cout << "MAIN: p_number: " << p_number << std::endl;
    std::cout << "MAIN: &p_number: " << &p_number << std::endl;

    // callbyvalue - inside func its local var with new address
    f(p_number);

    g(p_number);
}
