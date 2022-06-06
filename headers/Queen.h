#pragma once
#include "main.h"
#include "PieceClass.h"

class Queen  : public PieceClass
{
    public :
        Queen(int x, int y, char color) : PieceClass(x, y, color, name){name = 'Q';}
        bool validPosition(string board[8][8], int xPos, int yPos);
};