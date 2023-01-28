#include <cstdint>
#include <iostream>

int main()
{
    std::uint32_t max_number_of_attempts = 3;
    std::uint32_t current_attempt = 0;

    std::uint32_t number = 7;
    std::uint32_t guessed_number;

    std::cout << "Guessing Game: Guess a number between 0 and 10." << std::endl;

    for (; current_attempt < max_number_of_attempts; current_attempt++) // current_attempt already initialized outside
    {
        std::cout << "Guess a number: " << std::endl;
        std::cin >> guessed_number;

        if (number == guessed_number)
        {
            std::cout << "Congratulations, you won! Number " << number << " was correct." << std::endl;
        }
        else if (guessed_number > 10)
        {
            std::cout << "ABORT... number > 10" << std::endl;
            break;
        }
        else
        {
            std::cout << "Only numbers, give it another try" << std::endl;
            continue;
        }

        std::cout << "Sorry, your guess was wrong, please guess again. " << max_number_of_attempts - (current_attempt + 1) << " attempts left" << std::endl;
    }
    std::cout << "Sorry, you already had 3 tries :/" << std::endl;
}