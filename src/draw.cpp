#include "header.h"
#include <iostream>

using namespace std;

void Chess(char pole[][9])
{
    cout << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << pole[i][j] << " ";
        }
        cout << endl;
    }
}
