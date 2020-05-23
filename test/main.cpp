#include "../src/header.h"
#include "gtest/gtest.h"
#include <string>

char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                   {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

TEST(Down_peshka, Correct_p_forward1cell)
{
    int array[2][2];
    array[0][1] = 1;
    array[0][0] = 5;
    array[1][1] = 2;
    array[1][0] = 5;
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Down_peshka, Correct_p_forward2cell)
{
    int array[2][2];
    array[0][1] = 1;
    array[0][0] = 5;
    array[1][1] = 3;
    array[1][0] = 5;
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Down_peshka, Correct_p_attack)
{
    int array[2][2];
    array[0][1] = 1;
    array[0][0] = 5;
    array[1][1] = 2;
    array[1][0] = 4;
    pole[2][4] = 'R';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[2][4] = 'R';
    EXPECT_EQ(expected, result);
}

TEST(Up_peshka, Correct_P_forward1cell)
{
    int array[2][2];
    array[0][1] = 6;
    array[0][0] = 5;
    array[1][1] = 5;
    array[1][0] = 5;
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Up_peshka, Correct_P_forward2cell)
{
    int array[2][2];
    array[0][1] = 6;
    array[0][0] = 5;
    array[1][1] = 4;
    array[1][0] = 5;
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Up_peshka, Correct_P_attack)
{
    int array[2][2];
    array[0][1] = 6;
    array[0][0] = 4;
    array[1][1] = 5;
    array[1][0] = 5;
    pole[5][5] = 'r';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[5][5] = ' ';
    EXPECT_EQ(expected, result);
}

TEST(Up_Rook, Correct_R_left)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 1;
    array[1][1] = 5;
    array[1][0] = 1;
    pole[6][1] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][1] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Up_Rook, Correct_R_right)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 8;
    array[1][1] = 5;
    array[1][0] = 8;
    pole[6][8] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][8] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Down_Rook, Correct_r_left)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 1;
    array[1][1] = 2;
    array[1][0] = 1;
    pole[1][1] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][2] = 'p';
    EXPECT_EQ(expected, result);
}
TEST(Down_Rook, Correct_r_right)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 8;
    array[1][1] = 2;
    array[1][0] = 8;
    pole[1][8] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][8] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Up_Horse, Correct_H_left)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 2;
    array[1][1] = 5;
    array[1][0] = 3;
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Up_Horse, Correct_H_right)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 7;
    array[1][1] = 5;
    array[1][0] = 6;
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Down_Horse, Correct_h_left)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 2;
    array[1][1] = 2;
    array[1][0] = 3;
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Down_Horse, Correct_h_right)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 7;
    array[1][1] = 2;
    array[1][0] = 6;
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Up_Queen, Correct_Q)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 4;
    array[1][1] = 5;
    array[1][0] = 4;
    pole[6][4] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][4] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Down_Queen, Correct_q)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 4;
    array[1][1] = 2;
    array[1][0] = 4;
    pole[1][4] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][4] = 'p';
    EXPECT_EQ(expected, result);
}
TEST(Up_King, Correct_K)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 5;
    array[1][1] = 6;
    array[1][0] = 5;
    pole[6][5] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][5] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Down_King, Correct_k)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 5;
    array[1][1] = 1;
    array[1][0] = 5;
    pole[1][5] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][5] = 'p';
    EXPECT_EQ(expected, result);
}

TEST(Up_Bishop, Correct_B_left)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 3;
    array[1][1] = 5;
    array[1][0] = 5;
    pole[6][4] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][4] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Up_Bishop, Correct_B_right)
{
    int array[2][2];
    array[0][1] = 7;
    array[0][0] = 6;
    array[1][1] = 5;
    array[1][0] = 4;
    pole[6][5] = ' ';
    int result = MoveCheck(0, array, pole);
    int expected = 1;
    pole[6][5] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(Down_Bishop, Correct_b_left)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 3;
    array[1][1] = 2;
    array[1][0] = 5;
    pole[1][4] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][4] = 'p';
    EXPECT_EQ(expected, result);
}
TEST(Down_Bishop, Correct_b_right)
{
    int array[2][2];
    array[0][1] = 0;
    array[0][0] = 6;
    array[1][1] = 2;
    array[1][0] = 4;
    pole[1][5] = ' ';
    int result = MoveCheck(1, array, pole);
    int expected = 1;
    pole[1][5] = 'p';
    EXPECT_EQ(expected, result);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
