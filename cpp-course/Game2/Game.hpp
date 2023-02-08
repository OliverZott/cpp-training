#pragma once

#include <cstdint>

constexpr static std::uint32_t LEN_X = 10;
constexpr static std::uint32_t START = 0;
constexpr static std::uint32_t GOAL = LEN_X - 1;

constexpr static char LEFT = 'a';
constexpr static char RIGHT = 'd';

void print_game_state(unsigned int player);

std::uint32_t execute_move(std::uint32_t &player, char move);

bool is_finished(unsigned int player);

void game();
