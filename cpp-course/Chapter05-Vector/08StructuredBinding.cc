/*
Structured binding

- c++20 feature
- g++ 08StructuredBinding.cc -g -std=c++20 -o main

*/

#include <iostream>
#include <vector>

struct Data
{
    float x;
    float y;
};

int main()
{
    auto vec = std::vector<Data>{
        Data{1.0F, 2.0F},
        Data{2.5F, 1.9F}};

    for (const auto &data : vec)
    {
        std::cout << data.x << "," << data.y << std::endl;
    }

    for (const auto &[x_, y_] : vec)
    {
        std::cout << x_ << "," << y_ << std::endl;
    }

    return 0;
}