#include <cstdint>

namespace computation
{
    double mean_array_value(int *array, const std::size_t length)
    {
        auto temp = double{};

        for (std::size_t i = 0; i < length; i++)
        {
            temp += array[i];
        }

        return temp / length;
    }

    double mean_array_value(double *array, const std::size_t length)
    {
        auto temp = double{};

        for (std::size_t i = 0; i < length; i++)
        {
            temp += array[i];
        }

        return temp / length;
    }

    struct Dataset
    {
        double mean_array_a;
        double mean_array_b;
    };
}