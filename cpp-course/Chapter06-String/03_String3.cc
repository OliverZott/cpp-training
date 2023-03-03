/*
- .clear()
- .append()

- string comparison
- .compare()

- .replace()
- .substr()
*/

#include <iostream>
#include <string>

int main()
{
    const auto text = std::string{"One Two Three"};

    auto text2 = text; // copies text
    std::cout << "text2: " << text2 << std::endl;
    text2.clear();
    std::cout << "text2: " << text2 << std::endl;

    auto text3 = text + ", Four";
    std::cout << "text3: " << text3 << std::endl;

    text3.append(", Five");
    std::cout << "text3: " << text3 << std::endl;

    // Compare
    auto s1 = std::string{"Olli"};
    auto s2 = std::string{"OlLi"};
    std::cout << "s1==s2: " << std::boolalpha << (s1 == s2) << std::endl;

    const auto compared = s1.compare(s2);
    std::cout << compared << std::endl;

    // Replace
    const auto search_str = "ll";
    const auto idx = s1.find(search_str);
    if (idx != std::string::npos)
    {
        s1.replace(idx, 2, "LL");
    }
    std::cout << s1 << std::endl;

    // Substring
    const auto sub_str = s1.substr(2, 3);
    std::cout << sub_str << std::endl;

    return 0;
}