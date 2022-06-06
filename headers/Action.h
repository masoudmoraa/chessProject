#pragma once
#include "Move.h"

class Action
{
    public :
        Move move;
        string boardStr1, boardStr2 = "  ";
        int number1, number2 = -1;
        int color1, color2;
        bool isEmpty = true;
};