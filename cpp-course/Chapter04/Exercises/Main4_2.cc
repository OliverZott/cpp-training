#include <iostream>
#include <cstdint>

#include "Exercise4_2.h"

int main()
{
    auto player1 = game::PlayerData{.energy = 96, .health = 57, .id = 123, .x_pos = 2.5f, .y_pos = 9.23f, .team = game::Team::ALLIED};
    auto player2 = game::PlayerData{.energy = 28, .health = 73, .id = 123, .x_pos = 6.9f, .y_pos = 4.1, .team = game::Team::ENEMY};

    game::print_player_position(player1);
    game::print_player_position(player2);
}