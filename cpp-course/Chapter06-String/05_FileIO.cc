/*
 */
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    auto str = std::string{};
    auto text = std::string{};

    // -------- READ --------
    auto input_file = std::ifstream{};
    input_file.open("text_sample.txt");
    if (input_file.is_open())
    {
        while (std::getline(input_file, str))
        {
            text += str + '\n';
        }
    }
    input_file.close();
    std::cout << text << std::endl;

    // change text
    const auto search_string = std::string{"one"};
    const auto replace_string = std::string{"eins"};
    const auto idx = text.find(search_string);
    if (idx != std::string::npos)
    {
        text.replace(idx, search_string.size(), replace_string);
    }

    // -------- WRITE --------
    auto output_file = std::ofstream{};
    output_file.open("output_file.txt");
    if (output_file.is_open())
    {
        output_file << text;
    }
    output_file.close();

    return 0;
}