#include <cstdint>

namespace game
{
    struct PlayerData
    {
        std::uint32_t energy;
        std::uint32_t health;
        std::uint32_t id;
        float x_pos;
        float y_pos;
        Team team;
    };

    enum class Team
    {
        ALLIED,
        ENEMY
    };

    void print_player_position(PlayerData &plyerData);
}