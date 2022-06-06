#pragma once
#include "main.h"
#include "PieceClass.h"

class King   : public PieceClass
{
    public :
        King(int x, int y, char color) : PieceClass(x, y, color, name){name = 'K';}
        bool validPosition(string board[8][8], int xPos, int yPos);
};