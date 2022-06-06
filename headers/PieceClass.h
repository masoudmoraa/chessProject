#pragma once
#include "main.h"

class PieceClass
{
    public :
        int number;
        char color;
        char name;
        Position pos;
        PieceClass(int x, int y, char color, char name);
        virtual bool validPosition(string board[8][8], int xPos, int yPos){return 0;};
};
