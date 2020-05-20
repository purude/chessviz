#include "header.h"

int main()
{
    char pole[9][9]
            = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}};

    Chess(pole);
    int k[2][2], team = 0;
    string xod;
    while (true) {
        OprKoordinat(xod, k);
        MoveAll(pole, k);
        Chess(pole);
    }
    return 0;
}
