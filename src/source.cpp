#include "header.h"
#include <iostream>

using namespace std;

void OprKoordinat(string xod, int k[][2])
{
    int errorCheck = 1;
    while (errorCheck) {
        cout << endl << "Your move: ";
        cin >> xod;
        switch (xod[0]) {
        case 'a':
            k[0][0] = 1;
            break;
        case 'b':
            k[0][0] = 2;
            break;
        case 'c':
            k[0][0] = 3;
            break;
        case 'd':
            k[0][0] = 4;
            break;
        case 'e':
            k[0][0] = 5;
            break;
        case 'f':
            k[0][0] = 6;
            break;
        case 'g':
            k[0][0] = 7;
            break;
        case 'h':
            k[0][0] = 8;
            break;
        default:
            cout << "Incorrect! Repeat please!";
            errorCheck = 0;
        }

        if (errorCheck == 1)
            switch (xod[1]) {
            case '1':
                k[0][1] = 7;
                break;
            case '2':
                k[0][1] = 6;
                break;
            case '3':
                k[0][1] = 5;
                break;
            case '4':
                k[0][1] = 4;
                break;
            case '5':
                k[0][1] = 3;
                break;
            case '6':
                k[0][1] = 2;
                break;
            case '7':
                k[0][1] = 1;
                break;
            case '8':
                k[0][1] = 0;
                break;
            default:
                cout << "Incorrect! Repeat please";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            if (xod[2] != '-') {
                cout << "Incorrect! Repeat please";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            switch (xod[3]) {
            case 'a':
                k[1][0] = 1;
                break;
            case 'b':
                k[1][0] = 2;
                break;
            case 'c':
                k[1][0] = 3;
                break;
            case 'd':
                k[1][0] = 4;
                break;
            case 'e':
                k[1][0] = 5;
                break;
            case 'f':
                k[1][0] = 6;
                break;
            case 'g':
                k[1][0] = 7;
                break;
            case 'h':
                k[1][0] = 8;
                break;
            default:
                cout << "Incorrect! Repeat please";
                errorCheck = 0;
            }

        if (errorCheck == 1)
            switch (xod[4]) {
            case '1':
                k[1][1] = 7;
                break;
            case '2':
                k[1][1] = 6;
                break;
            case '3':
                k[1][1] = 5;
                break;
            case '4':
                k[1][1] = 4;
                break;
            case '5':
                k[1][1] = 3;
                break;
            case '6':
                k[1][1] = 2;
                break;
            case '7':
                k[1][1] = 1;
                break;
            case '8':
                k[1][1] = 0;
                break;
            default:
                cout << "Incorrect! Repeat please";
                errorCheck = 0;
            }
        errorCheck = 0;
    }
}

void MovePeshki(char pole[9][9], int k[][2])
{
    char temp;
    if (k[0][0] == k[1][0])
        if (((pole[k[0][1]][k[0][0]] == 'P')
             && ((k[1][1] == k[0][1] - 1) || (k[1][1] == k[0][1] - 2)))
            || ((pole[k[0][1]][k[0][0]] == 'p')
                && ((k[1][1] == k[0][1] + 1) || (k[1][1] == (k[0][1] + 2))))) {
            temp = pole[k[0][1]][k[0][0]];
            pole[k[0][1]][k[0][0]] = pole[k[1][1]][k[1][0]];
            pole[k[1][1]][k[1][0]] = temp;
        }
}

bool friendly(int side, int k[][2], char pole[][9])
{
    bool flag = true;
    switch (side) {
    case 0:
        if ((pole[k[1][1]][k[1][0]] == 'P') || (pole[k[1][1]][k[1][0]] == 'R')
            || (pole[k[1][1]][k[1][0]] == 'N')
            || (pole[k[1][1]][k[1][0]] == 'B')
            || (pole[k[1][1]][k[1][0]] == 'Q')
            || (pole[k[1][1]][k[1][0]] == 'K')) {
            cout << "\n ERROR\n";

            flag = false;
        }
        break;
    case 1:
        if ((pole[k[1][1]][k[1][0]] == 'p') || (pole[k[1][1]][k[1][0]] == 'r')
            || (pole[k[1][1]][k[1][0]] == 'n')
            || (pole[k[1][1]][k[1][0]] == 'b')
            || (pole[k[1][1]][k[1][0]] == 'q')
            || (pole[k[1][1]][k[1][0]] == 'k')) {
            cout << "\ERROR\n";
            ;
            flag = false;
        }
        break;
    }
    return flag;
}
