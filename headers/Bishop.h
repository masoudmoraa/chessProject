#pragma once
#include "main.h"
#include "PieceClass.h"

class Bishop : public PieceClass
{
    public :
        Bishop(int x, int y, char color) : PieceClass(x, y, color, name){name = 'B';}
        bool validPosition(string board[8][8], int xPos, int yPos);
};