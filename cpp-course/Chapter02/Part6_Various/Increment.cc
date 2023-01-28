/*
Post- vs Pre-Increment

var++ ...post-increment (often irritating)
++var ...pre-increment (most times better: dont be smart - be excplicit)

*/

#include <iostream>

void func(int val)
{
    std::cout << "Value: " << val << std::endl;
}

int main()
{
    int val = 0;

    std::cout << "Value: " << val << std::endl;
    func(++val);
    std::cout << "Value: " << val << std::endl;
}