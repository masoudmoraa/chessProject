#include "PieceClass.h"

PieceClass :: PieceClass(int x, int y, char color, char name)
{
    Sprite sprt;
    pos.x = x;
    pos.y = y;
    this->color = color;
    this->name  = name;
}  
