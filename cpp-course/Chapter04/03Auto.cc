#include <iostream>
#include <string>

enum class Lane
{
    RIGHT_LANE,
    LEFT_LANE,
    MIDDLE_LANE,
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle(const Vehicle &vehicle)
{
    std::cout << "Vehicle Id: " << vehicle.id << std::endl;
    std::cout << "Vehicle velocity: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case Lane::RIGHT_LANE:
        std::cout << "Vehicle Lane: Right" << std::endl;
        break;
    case Lane::LEFT_LANE:
        std::cout << "Vehicle Lane: Left" << std::endl;
        break;
    case Lane::MIDDLE_LANE:
        std::cout << "Vehicle Lane: Center" << std::endl;
        break;
    default:
        break;
    }
}

int main()
{
    const auto vehicle = Vehicle{.id = 2, .velocity = 140, .lane = Lane::RIGHT_LANE};
    print_vehicle(vehicle);

    return 0;
}
