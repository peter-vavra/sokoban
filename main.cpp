#include <iostream>
#include <sstream>
#include "Level.h"
#include "Player.h"
#include "Move.h"

int main()
{
    Level level;
    std::string input;
    std::cout << "Start Sokoban [yes/no]:\n";
    std::cin >> input;
    if (input == "yes")
    {
        std::cout << "Choose number of level [1-10]\n";
        int levelNumber;
        std::cin >> levelNumber;

        if (levelNumber >= 1 and levelNumber <= 10)
        {
            std::stringstream filename;
            filename << "test_levels/level" << levelNumber << ".txt";
            level.load(filename.str());
            level.render();
            level.startPosition();

            while(level.checkY() or level.checkX())
            {
                Player player(level.playerX, level.playerY);
                std::cout << "Let's move [W/A/S/D]\n";
                std::cin >> input;
                if (input == "W")
                {
                    processInputW(player, level);
                }
                else if (input == "A")
                {
                    processInputA(player,level);
                }
                else if (input == "S")
                {
                    processInputS(player, level);
                }
                else if (input == "D")
                {
                    processInputD(player, level);
                }
                else
                {
                    std::cout << "Invalid input. Please choose between [W/A/S/D]\n";
                    continue;
                }
            }
        }
        else
        {
            std::cout << "Invalid level number. Please choose a number between 1 and 10.\n";
        }
    }
    else if (input == "no")
    {
        std::cerr << "Game not started. Exiting.\n";
        return 2;
    }
    else
    {
        std::cerr << "Wrong answer. Exiting.\n";
        return 3;
    }
}