#ifndef SOKOBAN_LEVEL_H
#define SOKOBAN_LEVEL_H

#include <vector>
#include <string>

class Level
{
public:
    Level();
    std::vector<std::vector<char>> load(const std::string& filename);
    void render() const;
    std::vector<std::vector<char>> map;
    void startPosition();
    int playerX, playerY;
    bool checkY();
    bool checkX();
    void changePlayerCoords(int newX, int newY);

    bool checkBox(int x, int y);
};
#endif //SOKOBAN_LEVEL_H