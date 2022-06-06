#include "Rook.h"

bool Rook :: validPosition(string board[8][8], int xPos, int yPos)
{
    if (this->pos.x < 0 || this->pos.x > 7 || this->pos.y < 0 || this->pos.y > 7) return false;
    if (xPos < 0 || xPos > 7 || yPos < 0 || yPos > 7) return false;
    if (board[xPos][yPos][1] == this->color) return false;
    if (xPos == this->pos.x)
    {
        int j = this->pos.y, jj = 1;
        if (this->pos.y > yPos) jj = -1;
        j += jj;
        while(j != yPos)
        {
            if(board[xPos][j] != "  ") return false;
            j += jj;
        }
        return true;
    }
    else if(yPos == this->pos.y)
    {
        int i = this->pos.x, ii = 1;
        if (this->pos.x > xPos) ii = -1;
        i += ii;
        while(i != xPos)
        {
            if(board[i][yPos] != "  ") return false;
            i += ii;
        }
        return true;
    }
    return false;
}