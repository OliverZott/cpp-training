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

void print_vehicle(Vehicle &vehicle)
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

// Using '->' instead '.' operator to call members when adress is given!
void print_vehicle_by_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle Id: " << vehicle->id << std::endl;
    std::cout << "Vehicle velocity: " << vehicle->velocity << std::endl;

    switch (vehicle->lane)
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
    Vehicle vehicle1 = {1, 100.0f, Lane::MIDDLE_LANE};

    // C++20 - designated struct initializer
    Vehicle vehicle2 = {.id = 2, .velocity = 140, .lane = Lane::RIGHT_LANE};

    print_vehicle(vehicle1);

    Vehicle *p_vehicle = &vehicle1;
    print_vehicle_by_pointer(p_vehicle);
    print_vehicle_by_pointer(&vehicle2);
    return 0;
}
