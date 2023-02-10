#pragma once

#include <cstdint>

struct Coordinate
{
    std::uint32_t x;
    std::uint32_t y;
};

constexpr static auto LEN_X = 5U;
constexpr static auto LEN_Y = 5U;
constexpr static auto START = Coordinate{.x = 0, .y = 0};
constexpr static auto GOAL = Coordinate{.x = LEN_X - 1, .y = LEN_Y - 1};

enum class ConsoleInput
{
    INVALID,
    UP = 'w',
    DOWN = 's',
    LEFT = 'a',
    RIGHT = 'd',
};

bool is_finished(const Coordinate &player);

void print_game_state(const Coordinate &player);

void execute_move(Coordinate &player, const ConsoleInput move);
// std::uint32_t execute_move(std::uint32_t &player, char move);

void game();
