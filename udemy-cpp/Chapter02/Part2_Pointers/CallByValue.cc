#include <iostream>

void func(int *p_num)
{
    std::cout << "FUNC: p_number: " << p_num << std::endl;
    std::cout << "FUNC: *p_number: " << *p_num << std::endl;
    std::cout << "FUNC: &p_number: " << &p_num << std::endl;
}


int main()
{

    int *p_number = new int{5};
    std::cout << "MAIN: p_number: " << p_number << std::endl;
    std::cout << "MAIN: *p_number: " << *p_number << std::endl;
    std::cout << "MAIN: &p_number: " << &p_number << std::endl;

    // callbyvalue - inside func its local var with new address
    func(p_number);
}
