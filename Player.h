#ifndef PLAYER_H
#define PLAYER_H

#include <utility>
#include <vector>

class Player {
public:
    Player(int x, int y);

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    int getX() const;
    int getY() const;

private:
    int x;
    int y;
};

#endif // PLAYER_H