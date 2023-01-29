/*
Auto keyword (modern style)

- analog to var/let in other languages
- Uniform Initialization

*/

#include <iostream>
#include <typeinfo>

int main()
{
    // C++
    auto a = 12U;   // unsigned int
    auto b = 41.3f; // float
    auto c = 41.3;  // double
    auto d = static_cast<float>(a);
    auto i = double{0.345F};
    std::cout << "Value: " << i << " with type: " << typeid(i).name() << '\n';

    // examnples why auto is nice:

    // bad - implicit type-cast nix gut / also no warning
    int j = c;
    std::cout << "Value: " << j << " with type: " << typeid(j).name() << '\n';

    // semi-bad - no warning
    auto k = static_cast<int>(c);
    std::cout << "Value: " << k << " with type: " << typeid(k).name() << '\n';

    // good: Uniform Initialization
    auto l = int{c};
    std::cout << "Value: " << l << " with type: " << typeid(l).name() << '\n';

    return 0;
}