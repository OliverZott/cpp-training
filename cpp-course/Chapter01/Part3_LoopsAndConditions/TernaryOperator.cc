#include <iostream>

int main()
{
    int age1 = 43;
    int age2 = 62;

    int older_age = age1 > age2 ? age1 : age2;

    std::cout << older_age << std::endl;
    return 0;
}