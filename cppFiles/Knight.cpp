#include "Knight.h"

bool Knight :: validPosition(string board[8][8], int xPos, int yPos)
{
    if (this->pos.x < 0 || this->pos.x > 7 || this->pos.y < 0 || this->pos.y > 7) return false;
    if (xPos < 0 || xPos > 7 || yPos < 0 || yPos > 7) return false;
    if (board[xPos][yPos][1] == this->color) return false;
    if (abs(this->pos.x - xPos) == 1 && abs(this->pos.y - yPos) == 2) return true;
    if (abs(this->pos.x - xPos) == 2 && abs(this->pos.y - yPos) == 1) return true;
    return false;
}