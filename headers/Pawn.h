#pragma once
#include "main.h"
#include "PieceClass.h"

class Pawn   : public PieceClass
{
    public :
        Pawn(int x, int y, char color) : PieceClass(x, y, color, name){name = 'P';}
        bool validPosition(string board[8][8], int xPos, int yPos);
};