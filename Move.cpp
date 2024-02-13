#include <iostream>
#include "Move.h"

void processInputW(Player& player, Level& level)
{
    int help_x = player.getX();
    int help_y = player.getY()-1;
    if (level.map[help_y][help_x] == ' ' or level.map[help_y][help_x] == 'Y')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }
        if (level.map[help_y][help_x] == ' ')
        {
            player.moveUp();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            player.moveUp();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
    }
    else if (level.map[help_y][help_x] == 'X' and level.map[help_y-1][help_x] != '#' and level.map[help_y-1][help_x] != 'X' and level.map[help_y-1][help_x] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y-1][help_x] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y-1][help_x] = 'X';
            player.moveUp();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y-1][help_x] == 'Y')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y-1][help_x] = 'W';
            player.moveUp();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move X, let's try again\n";
        }
    }
    else if (level.map[help_y][help_x] == 'W' and level.map[help_y-1][help_x] != '#' and level.map[help_y-1][help_x] != 'X' and level.map[help_y-1][help_x] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y-1][help_x] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y-1][help_x] = 'X';
            player.moveUp();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y-1][help_x] == 'Y')
        {
            level.map[help_y][help_x] = 'Y';
            level.map[help_y-1][help_x] = 'W';
            player.moveUp();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else
    {
        std::cout << "Invalid move, let's try again\n";
    }
}

void processInputA(Player& player, Level& level)
{
    int help_x = player.getX()-1;
    int help_y = player.getY();
    if (level.map[help_y][help_x] == ' ' or level.map[help_y][help_x] == 'Y')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }
        if (level.map[help_y][help_x] == ' ')
        {
            player.moveLeft();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            player.moveLeft();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
    }
    else if (level.map[help_y][help_x] == 'X' and level.map[help_y][help_x-1] != '#' and level.map[help_y][help_x-1] != 'X' and level.map[help_y][help_x-1] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y][help_x-1] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x-1] = 'X';
            player.moveLeft();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y][help_x-1] == 'Y')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x-1] += 'X';
            player.moveLeft();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else if (level.map[help_y][help_x] == 'W' and level.map[help_y][help_x-1] != '#' and level.map[help_y][help_x-1] != 'X' and level.map[help_y][help_x-1] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y][help_x-1] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x-1] = 'X';
            player.moveLeft();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y][help_x-1] == 'Y')
        {
            level.map[help_y][help_x] = 'Y';
            level.map[help_y][help_x-1] = 'W';
            player.moveLeft();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else
    {
        std::cout << "Invalid move, let's try again\n";
    }
}

void processInputS(Player& player, Level& level)
{
    int help_x = player.getX();
    int help_y = player.getY()+1;
    if (level.map[help_y][help_x] == ' ' or level.map[help_y][help_x] == 'Y')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }
        if (level.map[help_y][help_x] == ' ')
        {
            player.moveDown();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            player.moveDown();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
    }
    else if (level.map[help_y][help_x] == 'X' and level.map[help_y+1][help_x] != '#' and level.map[help_y+1][help_x] != 'X' and level.map[help_y+1][help_x] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y+1][help_x] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y+1][help_x] = 'X';
            player.moveDown();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y+1][help_x] == 'Y')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y+1][help_x] = 'W';
            player.moveDown();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else if (level.map[help_y][help_x] == 'W' and level.map[help_y+1][help_x] != '#' and level.map[help_y+1][help_x] != 'X' and level.map[help_y+1][help_x] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y+1][help_x] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y+1][help_x] = 'X';
            player.moveDown();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y+1][help_x] == 'Y')
        {
            level.map[help_y][help_x] = 'Y';
            level.map[help_y+1][help_x] = 'W';
            player.moveDown();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else
    {
        std::cout << "Invalid move, let's try again\n";
    }
}

void processInputD(Player& player, Level& level)
{
    int help_x = player.getX()+1;
    int help_y = player.getY();
    if (level.map[help_y][help_x] == ' ' or level.map[help_y][help_x] == 'Y')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }
        if (level.map[help_y][help_x] == ' ')
        {
            player.moveRight();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            player.moveRight();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
    }
    else if (level.map[help_y][help_x] == 'X' and level.map[help_y][help_x+1] != '#' and level.map[help_y][help_x+1] != 'X' and level.map[help_y][help_x+1] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y][help_x+1] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x+1] = 'X';
            player.moveRight();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y][help_x+1] == 'Y')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x+1] = 'W';
            player.moveRight();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else if (level.map[help_y][help_x] == 'W' and level.map[help_y][help_x+1] != '#' and level.map[help_y][help_x+1] != 'X' and level.map[help_y][help_x+1] != 'W')
    {
        char actualChar = level.map[player.getY()][player.getX()];
        if (actualChar == '@')
        {
            level.map[player.getY()][player.getX()] = ' ';
        }
        else
        {
            level.map[player.getY()][player.getX()] = 'Y';
        }

        if (level.map[help_y][help_x+1] == ' ')
        {
            level.map[help_y][help_x] = ' ';
            level.map[help_y][help_x+1] = 'X';
            player.moveRight();
            level.map[player.getY()][player.getX()] = '@';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else if (level.map[help_y][help_x+1] == 'Y')
        {
            level.map[help_y][help_x] = 'Y';
            level.map[help_y][help_x+1] = 'W';
            player.moveRight();
            level.map[player.getY()][player.getX()] = 'Z';
            level.playerX = player.getX();
            level.playerY = player.getY();
            level.render();
        }
        else
        {
            std::cout << "Invalid move, let's try again\n";
        }
    }
    else
    {
        std::cout << "Invalid move, let's try again\n";
    }
}