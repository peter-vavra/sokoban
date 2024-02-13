#include <gtest/gtest.h>
#include "Level.h"
#include <vector>

// Test pre prvú úroveň
TEST(loadLevel, Level1)
{
    Level level;
    auto levelData = level.load("test_levels/level1.txt");

    int expectedRows = 6;
    int expectedCols = 7;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre druhú úroveň
TEST(loadLevel, Level2)
{
    Level level;
    auto levelData = level.load("test_levels/level2.txt");

    int expectedRows = 6;
    int expectedCols = 6;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre tretiu úroveň
TEST(loadLevel, Level3)
{
    Level level;
    auto levelData = level.load("test_levels/level3.txt");

    int expectedRows = 5;
    int expectedCols = 6;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre štvrtu úroveň
TEST(loadLevel, Level4)
{
    Level level;
    auto levelData = level.load("test_levels/level4.txt");

    int expectedRows = 5;
    int expectedCols = 8;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre piatu úroveň
TEST(loadLevel, Level5)
{
    Level level;
    auto levelData = level.load("test_levels/level5.txt");

    int expectedRows = 5;
    int expectedCols = 6;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre šiestu úroveň
TEST(loadLevel, Level6)
{
    Level level;
    auto levelData = level.load("test_levels/level6.txt");

    int expectedRows = 6;
    int expectedCols = 8;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre siedmu úroveň
TEST(loadLevel, Level7)
{
    Level level;
    auto levelData = level.load("test_levels/level7.txt");

    int expectedRows = 5;
    int expectedCols = 8;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre ôsmu úroveň
TEST(loadLevel, Level8)
{
    Level level;
    auto levelData = level.load("test_levels/level8.txt");

    int expectedRows = 7;
    int expectedCols = 7;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre deviatu úroveň
TEST(loadLevel, Level9)
{
    Level level;
    auto levelData = level.load("test_levels/level9.txt");

    int expectedRows = 6;
    int expectedCols = 8;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}

// Test pre desiatu úroveň
TEST(loadLevel, Level10)
{
    Level level;
    auto levelData = level.load("test_levels/level10.txt");

    int expectedRows = 6;
    int expectedCols = 7;

    ASSERT_EQ(expectedRows, levelData.size()) << "Počet riadkov nie je správny.";

    for (const auto& row : levelData)
    {
        ASSERT_EQ(expectedCols, row.size()) << "Počet stĺpcov nie je konzistentný.";
    }
}