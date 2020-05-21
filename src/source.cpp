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

void OprKoordinat(int k[][2])
{
    int Incorrect !Check = 1;
    while (Incorrect !Check) {
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
            Incorrect !Check = 0;
        }

        if (Incorrect !Check == 1)
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
                Incorrect !Check = 0;
            }

        if (Incorrect !Check == 1)
            if (xod[2] != '-') {
                cout << "Incorrect! Repeat please";
                Incorrect !Check = 0;
            }

        if (Incorrect !Check == 1)
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
                Incorrect !Check = 0;
            }

        if (Incorrect !Check == 1)
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
                Incorrect !Check = 0;
            }
        Incorrect !Check = 0;
    }
}

void MoveAll(char pole[9][9], int k[][2])
{
    int flag = MoveCheck(*team, k, pole);
    if (flag == 1) {
        if ((pole[k[1][1]][k[1][0]] == 'k')
            || (pole[k[1][1]][k[1][0]] == 'K')) {
            cout << "\n You win!";
            exit(0);
        }
        pole[k[1][1]][k[1][0]] = pole[k[0][1]][k[0][0]];
        pole[k[0][1]][k[0][0]] = ' ';
        switch (*team) {
        case 0:
            if ((pole[k[1][1]][k[1][0]] == 'P') && (k[1][1] == 0)) {
                char temp = ' ';
                while (temp == ' ') {
                    cout << endl << "Move your pawn: ";
                    cin >> temp;
                    if ((temp != 'R') && (temp != 'N') && (temp != 'B')
                        && (temp != 'Q')) {
                        temp = ' ';
                    }
                }
                pole[k[1][1]][k[1][0]] = temp;
            }
            break;
        case 1:
            if ((pole[k[1][1]][k[1][0]] == 'p') && (k[1][1] == 7)) {
                char temp = ' ';
                while (temp == ' ') {
                    cout << endl << "Move your pawn: ";
                    cin >> temp;
                    if ((temp != 'r') && (temp != 'n') && (temp != 'b')
                        && (temp != 'q')) {
                        temp = ' ';
                    }
                }
                pole[k[1][1]][k[1][0]] = temp;
            }
            break;
        }
        *team = 1 - *team;
    } else {
        cout << "\nIncorrect!\n";
    }
    cout << endl;
    cout << endl;
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
            cout << "\nIncorrect!\n";

            flag = false;
        }
        break;
    case 1:
        if ((pole[k[1][1]][k[1][0]] == 'p') || (pole[k[1][1]][k[1][0]] == 'r')
            || (pole[k[1][1]][k[1][0]] == 'n')
            || (pole[k[1][1]][k[1][0]] == 'b')
            || (pole[k[1][1]][k[1][0]] == 'q')
            || (pole[k[1][1]][k[1][0]] == 'k')) {
            cout << "\Incorrect!\n";
            ;
            flag = false;
        }
        break;
    }
    return flag;
}
int MoveCheck(int team, int k[][2], char pole[][9])
{
    int flag = 0;
    if ((k[0][1] == k[1][1]) && (k[0][0] == k[1][0])) {
        cout << "\nIncorrect!\n";
        return 0;
    }
    switch (team) {
    case 0:
        switch (pole[k[0][1]][k[0][0]]) {
        case ' ':
            cout << "\nIncorrect!\n";
            return 0;
        case 'P':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[0][1] - k[1][1] == 1)
                    && (pole[k[1][1]][k[1][0]] == ' '))
                    flag = 1;
                if ((k[0][0] == k[1][0]) && (k[0][1] - k[1][1] == 2)
                    && (k[0][1] == 6) && (pole[k[1][1]][k[1][0]] == ' ')) {
                    if (pole[k[1][1] + 1][k[1][0]] == ' ') {
                        flag = 1;
                    } else {
                        cout << "\nIncorrect!\n";
                        return 0;
                    }
                }
                if ((k[0][1] - k[1][1] == 1) && (pole[k[1][1]][k[1][0]] != ' ')
                    && ((k[0][0] - k[1][0] == 1) || (k[1][0] - k[0][0] == 1)))
                    flag = 1;
            }
            break;
        case 'R':
            if (friendly(team, k[1][1], k[1][1], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[0][1] != k[1][1])) {
                    if (k[0][1] > k[1][1]) {
                        for (int i = k[0][1] - 1; i > k[1][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][1] < k[1][1]) {
                        for (int i = k[1][1] - 1; i > k[0][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[0][1] == k[1][1]) && (k[0][0] != k[1][0])) {
                    if (k[0][0] > k[1][0]) {
                        for (int i = k[0][0] - 1; i > k[1][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][0] < k[1][0]) {
                        for (int i = k[1][0] - 1; i > k[0][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;
        case 'N':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if (((k[1][1] == k[0][1] - 2) && (k[1][0] == k[0][0] + 1))
                    || ((k[1][1] == k[0][1] - 2) && (k[1][0] == k[0][0] - 1))
                    || ((k[1][1] == k[0][1] + 2) && (k[1][0] == k[0][0] + 1))
                    || ((k[1][1] == k[0][1] + 2) && (k[1][0] == k[0][0] - 1))
                    || ((k[1][1] == k[0][1] - 1) && (k[1][0] == k[0][0] + 2))
                    || ((k[1][1] == k[0][1] - 1) && (k[1][0] == k[0][0] - 2))
                    || ((k[1][1] == k[0][1] + 1) && (k[1][0] == k[0][0] + 2))
                    || ((k[1][1] == k[0][1] + 1) && (k[1][0] == k[0][0] - 2))) {
                    flag = 1;
                }
            }
            break;
        case 'B':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[1][0] < k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[0][0] - k[1][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] - 1;
                             i > k[1][0] && v > k[1][1];
                             i--, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] < k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[0][0] - k[1][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] + 1;
                             i > k[1][0] && v < k[1][1];
                             i--, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[1][0] - k[0][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] - 1;
                             i < k[1][0] && v > k[1][1];
                             i++, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[1][0] - k[0][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] + 1;
                             i < k[1][0] && v < k[1][1];
                             i++, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;
        case 'Q':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[0][1] != k[1][1])) {
                    if (k[0][1] > k[1][1]) {
                        for (int i = k[0][1] - 1; i > k[1][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][1] < k[1][1]) {
                        for (int i = k[1][1] - 1; i > k[0][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[0][1] == k[1][1]) && (k[0][0] != k[1][0])) {
                    if (k[0][0] > k[1][0]) {
                        for (int i = k[0][0] - 1; i > k[1][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][0] < k[1][0]) {
                        for (int i = k[1][0] - 1; i > k[0][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }

                if ((k[1][0] < k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[0][0] - k[1][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] - 1;
                             i > k[1][0] && v > k[1][1];
                             i--, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] < k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[0][0] - k[1][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] + 1;
                             i > k[1][0] && v < k[1][1];
                             i--, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[1][0] - k[0][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] - 1;
                             i < k[1][0] && v > k[1][1];
                             i++, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[1][0] - k[0][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] + 1;
                             i < k[1][0] && v < k[1][1];
                             i++, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;

        case 'K':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                flag = 1;
            }
            break;
        default:
            cout << "\nIncorrect!\n";
            break;
        }
        break;
    case 1:
        switch (pole[k[0][1]][k[0][0]]) {
        case ' ':
            cout << "\nIncorrect!\n";
            return 0;
        case 'p':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[1][1] - k[0][1] == 1)
                    && (pole[k[1][1]][k[1][0]] == ' '))
                    flag = 1;
                if ((k[0][0] == k[1][0]) && (k[1][1] - k[0][1] == 2)
                    && (k[0][1] == 1) && (pole[k[1][1]][k[1][0]] == ' ')) {
                    if (pole[k[1][1] - 1][k[1][0]] == ' ') {
                        flag = 1;
                    } else {
                        cout << "\nIncorrect!\n";
                        return 0;
                    }
                }
                if ((k[1][1] - k[0][1] == 1) && (pole[k[1][1]][k[1][0]] != ' ')
                    && ((k[1][0] - k[0][0] == 1) || (k[0][0] - k[1][0] == 1)))
                    flag = 1;
            }
            break;
        case 'r':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[0][1] != k[1][1])) {
                    if (k[0][1] > k[1][1]) {
                        for (int i = k[0][1] - 1; i > k[1][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][1] < k[1][1]) {
                        for (int i = k[1][1] - 1; i > k[0][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[0][1] == k[1][1]) && (k[0][0] != k[1][0])) {
                    if (k[0][0] > k[1][0]) {
                        for (int i = k[0][0] - 1; i > k[1][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][0] < k[1][0]) {
                        for (int i = k[1][0] - 1; i > k[0][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;
        case 'n':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if (((k[1][1] == k[0][1] - 2) && (k[1][0] == k[0][0] + 1))
                    || ((k[1][1] == k[0][1] - 2) && (k[1][0] == k[0][0] - 1))
                    || ((k[1][1] == k[0][1] + 2) && (k[1][0] == k[0][0] + 1))
                    || ((k[1][1] == k[0][1] + 2) && (k[1][0] == k[0][0] - 1))
                    || ((k[1][1] == k[0][1] - 1) && (k[1][0] == k[0][0] + 2))
                    || ((k[1][1] == k[0][1] - 1) && (k[1][0] == k[0][0] - 2))
                    || ((k[1][1] == k[0][1] + 1) && (k[1][0] == k[0][0] + 2))
                    || ((k[1][1] == k[0][1] + 1) && (k[1][0] == k[0][0] - 2))) {
                    flag = 1;
                }
            }
            break;
        case 'b':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[1][0] < k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[0][0] - k[1][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] - 1;
                             i > k[1][0] && v > k[1][1];
                             i--, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] < k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[0][0] - k[1][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] + 1;
                             i > k[1][0] && v < k[1][1];
                             i--, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[1][0] - k[0][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] - 1;
                             i < k[1][0] && v > k[1][1];
                             i++, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[1][0] - k[0][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] + 1;
                             i < k[1][0] && v < k[1][1];
                             i++, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;
        case 'q':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                if ((k[0][0] == k[1][0]) && (k[0][1] != k[1][1])) {
                    if (k[0][1] > k[1][1]) {
                        for (int i = k[0][1] - 1; i > k[1][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][1] < k[1][1]) {
                        for (int i = k[1][1] - 1; i > k[0][1]; i--) {
                            if (pole[i][k[0][0]] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[0][1] == k[1][1]) && (k[0][0] != k[1][0])) {
                    if (k[0][0] > k[1][0]) {
                        for (int i = k[0][0] - 1; i > k[1][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                    if (k[0][0] < k[1][0]) {
                        for (int i = k[1][0] - 1; i > k[0][0]; i--) {
                            if (pole[k[0][1]][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] < k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[0][0] - k[1][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] - 1;
                             i > k[1][0] && v > k[1][1];
                             i--, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\n Incorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] < k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[0][0] - k[1][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] - 1, v = k[0][1] + 1;
                             i > k[1][0] && v < k[1][1];
                             i--, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\Incorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] < k[0][1])) {
                    if (k[1][0] - k[0][0] == k[0][1] - k[1][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] - 1;
                             i < k[1][0] && v > k[1][1];
                             i++, v--) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
                if ((k[1][0] > k[0][0]) && (k[1][1] > k[0][1])) {
                    if (k[1][0] - k[0][0] == k[1][1] - k[0][1]) {
                        for (int i = k[0][0] + 1, v = k[0][1] + 1;
                             i < k[1][0] && v < k[1][1];
                             i++, v++) {
                            if (pole[v][i] != ' ') {
                                cout << "\nIncorrect!\n";
                                return 0;
                            }
                        }
                        flag = 1;
                    }
                }
            }
            break;
        case 'k':
            if (friendly(team, k[1][1], k[1][0], pole) == 1) {
                flag = 1;
            }
            break;
        default:
            cout << "\nIncorrect!\n";
            break;
        }
        break;
    }
    return flag;
}
