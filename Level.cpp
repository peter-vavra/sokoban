#include "Level.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>

Level::Level() {}

std::vector<std::vector<char>> Level::load(const std::string& filename)
{
    std::ifstream file(filename);
    std::string line;

    if (!file.is_open())
    {
        std::cerr << "Nepodarilo sa otvoriť súbor: " << filename << std::endl;
        return map;
    }

    while (getline(file, line))
    {
        std::vector<char> row;
        for (char tile : line) {
            row.push_back(tile);
        }
        map.push_back(row);
    }

    file.close();
    return map;
}

void Level::render() const
{
    for (const auto& row : map)
    {
        for (const auto& tile : row)
        {
            std::cout << std::setw(2) <<tile;
        }
        std::cout << std::endl;
    }
}

void Level::startPosition()
{
    for (int y = 0; y < map.size(); ++y) {
        for (int x = 0; x < map[y].size(); ++x)
        {
            if (map[y][x] == '@')
            {
                playerX = x;
                playerY = y;
                break;
            }
        }
    }
}

bool Level::checkY()
{
    for (const auto& row : map)
    {
        for (const char& element : row)
        {
            if (element == 'Y')
            {
                return true;
            }
        }
    }
    return false;
}

bool Level::checkX()
{
    for (const auto& row : map)
    {
        for (const char& element : row)
        {
            if (element == 'X')
            {
                return true;
            }
        }
    }
    return false;
}

void Level::changePlayerCoords(int newX, int newY)
{
    int x = playerX;
    int y = playerY;
    map[y][x] = ' ';
    if (map[newY][newX] == ' ')
    {
        map[newY][newX] = '@';
    }
    else if (map[newY][newX] == 'Y')
    {
        map[newY][newX] = 'Z';
    }
    else
    {
        std::cout << "Invalid position for player";
    }
}

bool Level::checkBox(int x, int y)
{
    if (map[y][x] == 'X' or map[y][x] == 'W')
    {
        return true;
    }
    return false;
}