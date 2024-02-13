#include "Player.h"
#include "Level.h"

Player::Player(int x, int y) : x(x), y(y) {}

void Player::moveUp()
{
    y -= 1;
}

void Player::moveDown()
{
    y += 1;
}

void Player::moveLeft()
{
    x -= 1;
}

void Player::moveRight()
{
    x += 1;
}

int Player::getX() const
{
    return x;
}

int Player::getY() const
{
    return y;
}