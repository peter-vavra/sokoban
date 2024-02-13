#include "gtest/gtest.h"
#include "Move.h"
#include "Player.h"
#include "Level.h"

TEST(MoveTest, MoveToFreeSpace)
{
    Level level;
    level.load("test_levels/level1.txt");
    level.startPosition();
    level.changePlayerCoords(3,1);
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move left to free space\n";
    processInputA(player, level);
    EXPECT_EQ(player.getX(), 2);
    EXPECT_EQ(player.getY(), 1);
}

TEST(MoveTest, MoveToBorder)
{
    Level level;
    level.load("test_levels/level2.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move right to border\n";
    processInputD(player, level);
    EXPECT_EQ(player.getX(), 2);
    EXPECT_EQ(player.getY(), 3);
}

TEST(MoveTest, MoveToStorage)
{
    Level level;
    level.load("test_levels/level4.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move up to storage\n";
    processInputW(player, level);
    EXPECT_EQ(player.getX(), 6);
    EXPECT_EQ(player.getY(), 1);
}

TEST(MoveTest, MoveToDoubleBox)
{
    Level level;
    level.load("test_levels/level4.txt");
    level.startPosition();
    level.changePlayerCoords(5,2);
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move left to double box\n";
    processInputA(player, level);
    EXPECT_EQ(player.getX(), 5);
    EXPECT_EQ(player.getY(), 2);
}

TEST(MoveWithBoxTest, MoveToFreeSpace)
{
    Level level;
    level.load("test_levels/level5.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move with box down to free space\n";
    processInputS(player, level);
    EXPECT_EQ(player.getX(), 2);
    EXPECT_EQ(player.getY(), 2);
    EXPECT_EQ(level.checkBox(player.getX(), player.getY()+1), true);
}

TEST(MoveWithBoxTest, MoveToBorder)
{
    Level level;
    level.load("test_levels/level6.txt");
    level.startPosition();
    level.changePlayerCoords(2,2);
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move with box down to border\n";
    processInputS(player, level);
    EXPECT_EQ(player.getX(), 2);
    EXPECT_EQ(player.getY(), 2);
    EXPECT_EQ(level.checkBox(player.getX(), player.getY()+1), true);
}

TEST(MoveWithBoxTest, MoveToStorage)
{
    Level level;
    level.load("test_levels/level8.txt");
    level.startPosition();
    level.changePlayerCoords(2,2);
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "Move with box down to storage\n";
    processInputS(player, level);
    EXPECT_EQ(player.getX(), 2);
    EXPECT_EQ(player.getY(), 3);
    EXPECT_EQ(level.checkBox(player.getX(), player.getY()+1), true);
}

TEST(MoveWithBoxTest, MoveToFullStorage)
{
    Level level;
    level.load("test_levels/level1.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(player.getX(), 3);
    EXPECT_EQ(player.getY(), 3);
    EXPECT_EQ(level.checkBox(player.getX()+1, player.getY()), true);
    EXPECT_EQ(level.checkBox(player.getX()+2, player.getY()), true);
}

TEST(CompleteLevelTest, level1)
{
    Level level;
    level.load("test_levels/level1.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level2)
{
    Level level;
    level.load("test_levels/level2.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level3)
{
    Level level;
    level.load("test_levels/level3.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level4)
{
    Level level;
    level.load("test_levels/level4.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level5)
{
    Level level;
    level.load("test_levels/level5.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level6)
{
    Level level;
    level.load("test_levels/level6.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level7)
{
    Level level;
    level.load("test_levels/level7.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level8)
{
    Level level;
    level.load("test_levels/level8.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level9)
{
    Level level;
    level.load("test_levels/level9.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}

TEST(CompleteLevelTest, level10)
{
    Level level;
    level.load("test_levels/level10.txt");
    level.startPosition();
    Player player(level.playerX, level.playerY);
    std::cout << "Start\n";
    level.render();
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputD(player, level);
    std::cout << "\n";
    processInputW(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputS(player, level);
    std::cout << "\n";
    processInputA(player, level);
    std::cout << "\n";
    processInputW(player, level);

    EXPECT_EQ(level.checkX(), false);
    EXPECT_EQ(level.checkY(), false);
}