#include <iostream>
#include <cstdint>

#include "Game.hpp"

bool is_finished(const Coordinate &player)
{
    if (player.x == GOAL.x && player.y == GOAL.y)
    {
        std::cout << "You won! Game ended!" << std::endl;
        return true;
    }
    return false;
}

void print_game_state(const Coordinate &player)
{
    char game_state[LEN_X];

    for (std::uint32_t i = 0; i < LEN_X; i++)
    {
        for (std::uint32_t j = 0; j < LEN_Y; j++)
        {
            if (i == player.x && j == player.y)
            {
                std::cout << 'p';
            }
            else if ((i == START.x && j == START.y) || (i == GOAL.x && j == GOAL.y))
            {
                std::cout << '|';
            }
            else
            {
                std::cout << '.';
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void execute_move(Coordinate &player, ConsoleInput move)
{
    switch (move)
    {
    case ConsoleInput::LEFT:
        if (player.y > 0)
        {
            player.y--;
        }
        break;
    case ConsoleInput::RIGHT:
        if (player.y < GOAL.y)
        {
            player.y++;
        }
        break;
    case ConsoleInput::UP:
        if (player.x > 0)
        {
            player.x--;
        }
        break;
    case ConsoleInput::DOWN:
        if (player.x < LEN_X)
        {
            player.x++;
        }
        break;
    default:
        std::cout << "Unrecognized move!" << std::endl;
        break;
    }
}

void game()
{
    auto player = START;
    auto move = ConsoleInput::INVALID;
    char move_input;

    bool finished = false;

    while (!finished)
    {
        print_game_state(player);

        std::cin >> move_input;
        move = static_cast<ConsoleInput>(move_input);

        // system("clear"); // each move new screen

        execute_move(player, move);
        finished = is_finished(player);
    }

    // std::cout << "Play again? (0=NO, 1=YES)" << std::endl;
}
