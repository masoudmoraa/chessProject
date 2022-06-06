#pragma once
#include "main.h"
#include "PieceClass.h"

class Knight : public PieceClass
{
    public :
        Knight(int x, int y, char color) : PieceClass(x, y, color, name){name = 'N';}
        bool validPosition(string board[8][8], int xPos, int yPos);
};