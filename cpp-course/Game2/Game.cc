#include <iostream>
#include <cstdint>

#include "Game.hpp"

void print_game_state(const std::uint32_t player)
{
    char game_state[LEN_X];

    for (unsigned int i = 0; i < LEN_X; i++)
    {
        game_state[i] = '.';
    }
    game_state[START] = '|';
    game_state[GOAL] = '|';
    game_state[player] = 'P';

    for (unsigned int i = 0; i < LEN_X; i++)
    {
        std::cout << game_state[i];
    }
}

std::uint32_t execute_move(std::uint32_t &player, const char move)
{
    if (move == LEFT)
    {
        if (player - 1 > START)
        {
            player--;
        }
    }
    else if (RIGHT == move)
    {
        if (player < GOAL)
        {
            player++;
        }
    }
    else
    {
        std::cout << "Unrecognized move!" << std::endl;
    }
    return player;
}

bool is_finished(unsigned int player)
{
    if (player == GOAL)
    {
        std::cout << "You won! Game ended!" << std::endl;
        return true;
    }
    return false;
}

void game()
{
    std::uint32_t player = START + 1;
    char move;
    bool finished = false;

    while (!finished)
    {
        print_game_state(player);
        std::cin >> move;
        system("clear"); // each move new screen
        player = execute_move(player, move);
        finished = is_finished(player);
    }

    // std::cout << "Play again? (0=NO, 1=YES)" << std::endl;
}
