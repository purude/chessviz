#include "header.h"

int main()
{
    int k[2][2], team = 0;
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    Chess(pole);
    while (true) {
        OprKoordinat(k);
        MoveAll(pole, k, &team);
        Chess(pole);
    }
    return 0;
}
