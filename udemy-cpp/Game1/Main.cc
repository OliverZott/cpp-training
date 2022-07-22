#include <iostream>

#define LEN_X 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{

    bool repeat = true;

    while (repeat)
    {
        unsigned int player = 1;
        unsigned int start = 0;
        unsigned int goal = LEN_X;

        char move;
        bool finished = false;

        while (!finished)
        {
            for (unsigned int i = 0; i <= LEN_X; i++)
            {
                if (i != player && i != start && i != goal)
                {
                    std::cout << ".";
                }
                else if (i == player)
                {
                    std::cout << "P";
                }
                else
                {
                    std::cout << "|";
                }
            }

            std::cin >> move;
            system("clear");

            if (move == LEFT)
            {
                if (player - 1 > start)
                {
                    player--;
                }
            }
            else if (RIGHT == move)
            {
                if (player < goal)
                {
                    player++;
                }
            }
            else
            {
                std::cout << "Unrecognized move!" << std::endl;
            }

            if (player == goal)
            {
                finished = true;
                std::cout << "You won! Game ended!" << std::endl;
            }
        }

        std::cout << "Play again? (0=NO, 1=YES)" << std::endl;
        std::cin >> repeat;

        system("clear");
    }

    return 0;
}
