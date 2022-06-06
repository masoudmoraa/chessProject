#include "Bishop.h"

bool Bishop :: validPosition(string board[8][8], int xPos, int yPos)
{
    if (this->pos.x < 0 || this->pos.x > 7 || this->pos.y < 0 || this->pos.y > 7) return false;
    if (xPos < 0 || xPos > 7 || yPos < 0 || yPos > 7) return false;
    if (board[xPos][yPos][1] == this->color) return false;
    if (abs(xPos - this->pos.x) == abs(yPos - this->pos.y))
    {
        int ii = 1, jj = 1;
        if(this->pos.x > xPos) ii = -1;
        if(this->pos.y > yPos) jj = -1;
        int i = this->pos.x + ii, j = this->pos.y + jj;
        while(i != xPos)
        {
            if (board[i][j] != "  ")
                return false;
            i += ii;
            j += jj;
        }
        return true;
    }
    return false;
}