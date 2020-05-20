#ifndef BOARD_H
#define BOARD_H

#include <iostream>
using namespace std;

void Chess(char pole[][9]);
void OprKoordinat(string xod, int k[2][2]);
void MovePeshki(char pole[][9], int k[2][2]);
bool friendly(int side, int k[][2], char pole[][9]);
#endif
