/*
 */
#include <iostream>
#include <fstream>
#include <string>

struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
};

void print_player_pos(const PlayerData &player)
{
    std::cout << "Player ID: " << player.id << ", Pos: (" << player.x_pos << ", " << player.y_pos << ")" << std::endl;
}

int append_line_to_file(const std::string &filepath, const std::string &line)
{
    auto file = std::ofstream{};

    // flags for append (created if not existing)
    file.open(filepath, std::ios::out | std::ios::app);

    if (file.fail())
        return 1;

    file << line << '\n';

    if (!file.good())
        return 1;

    // file.close() implicitly called when leaving scope
    return 0;
}

int write_to_bin_file(const std::string &filepath, const PlayerData &data)
{
    auto file = std::ofstream{};

    file.open(filepath, std::ios::out | std::ios::binary);
    if (file.fail())
        return 1;

    // param1: char pointer ...here with c-style cast:
    // - casting to char pointer to first byte of data
    file.write((char *)&data, sizeof(PlayerData));
    if (file.fail())
        return 1;

    return 0;
}

int reade_from_bin_file(const std::string &filepath, PlayerData &data)
{
    auto file = std::ifstream{};

    file.open(filepath, std::ios::in | std::ios::binary);
    if (file.fail())
        return 1;

    // casting to a char pointer on the first byte of data
    file.read((char *)&data, sizeof(PlayerData));
    if (file.fail())
        return 1;

    return 0;
}

int main()
{

    // -------- Append --------
    auto file_name = std::string{"06_text.txt"};
    auto text = std::string{"My sample text."};
    append_line_to_file(file_name, text);

    // -------- Write Binary --------
    const auto file_name_bin = std::string{"06_text.bin"};
    const auto player1 = PlayerData{.id = 666, .x_pos = 12.3F, .y_pos = 5.81F};
    write_to_bin_file(file_name_bin, player1);

    // -------- Read Binary --------
    auto player2 = PlayerData{};
    reade_from_bin_file(file_name_bin, player2);
    print_player_pos(player2);

    return 0;
}