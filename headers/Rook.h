#pragma once
#include "main.h"
#include "PieceClass.h"

class Rook   : public PieceClass
{
    public :
        Rook(int x, int y, char color) : PieceClass(x, y, color, name){name = 'R';}
        bool validPosition(string board[8][8], int xPos, int yPos);

};