#include "King.h"

bool King :: validPosition(string board[8][8], int xPos, int yPos)
{
    if (xPos < 0 || xPos > 7 || yPos < 0 || yPos > 7) return false;
    if (board[xPos][yPos][1] == this->color) return false;
    if (abs(xPos - this->pos.x) < 2 && abs(yPos - this->pos.y) < 2) return true;
    return false;
}