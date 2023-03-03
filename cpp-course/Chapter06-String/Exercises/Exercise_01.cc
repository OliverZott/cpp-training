#include <iostream>
#include <fstream>
#include <string>

bool is_palindrom(std::string_view text)
{
    auto text_rev = std::string{};

    for (auto it = text.rbegin(); it != text.rend(); it++)
    {
        text_rev += *it;
    }

    return (text == text_rev);
}

bool is_palindrom_short(std::string_view text)
{
    const auto text_rev = std::string(text.rbegin(), text.rend());
    return (text == text_rev);
}

int main()
{
    const auto text = std::string{"anna"};
    const auto check = is_palindrom(text);
    const auto check2 = is_palindrom_short(text);

    std::cout << "Is palindrom: " << std::boolalpha << check << std::endl;
    std::cout << "Is palindrom: " << std::boolalpha << check2 << std::endl;

    return 0;
}
