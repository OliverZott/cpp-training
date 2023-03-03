/*
Alias for vector of special type
*/

#include <iostream>
#include <vector>

struct PlayerData
{
    float x;
    float y;
};

// C-Approach (not good)
typedef std::vector<PlayerData> AllPlayerDataCStyle;

// C++-Approach
using AllPlayerData = std::vector<PlayerData>;

int main()
{
    auto vec = std::vector<PlayerData>{PlayerData{1.4F, 3.1F}, PlayerData{3.8F, 7.28F}};

    auto vec2 = AllPlayerData{PlayerData{1.4F, 3.1F}, PlayerData{3.8F, 7.28F}};

    for (auto [x_, y_] : vec)
    {
        std::cout << x_ << ", " << y_ << std::endl;
    }

    return 0;
}