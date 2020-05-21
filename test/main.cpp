#include "../src/header.h"
#include "gtest/gtest.h"
#include <string>

char pole[9][9]
        = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
           {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
           {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
           {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
           {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
           {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

TEST(Up_peshka, Correct_P_forward1cell)
{
    int array[2][2];
    array[0][0] = 6;
    array[0][0] = 5;
    array[0][0] = 5;
    array[0][0] = 5;
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
