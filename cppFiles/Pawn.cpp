#include "Pawn.h"

bool Pawn :: validPosition(string board[8][8], int xPos, int yPos)
{
    if (this->pos.x < 0 || this->pos.x > 7 || this->pos.y < 0 || this->pos.y > 7) return false;
    if (xPos < 0 || xPos > 7 || yPos < 0 || yPos > 7) return false;
    if (board[xPos][yPos][1] == this->color) return false;
    if (this->color == 'W')
    {
        if (xPos - this->pos.x == -1 && yPos == this->pos.y && board[xPos][yPos] == "  ") return true;
        if (xPos - this->pos.x == -2 && yPos == this->pos.y && board[xPos+1][yPos] == "  " && board[xPos][yPos] == "  ") return true;
        if (xPos - this->pos.x == -1 && abs(yPos - this->pos.y) == 1 && board[xPos][yPos][1] == 'B') return true;
        return false;
    }
    else if (this->color == 'B')
    {
        if (xPos - this->pos.x == 1 && yPos == this->pos.y && board[xPos][yPos] == "  ") return true;
        if (xPos - this->pos.x == 2 && yPos == this->pos.y && board[xPos-1][yPos] == "  " && board[xPos][yPos] == "  ") return true;
        if (xPos - this->pos.x == 1 && abs(yPos - this->pos.y) == 1 && board[xPos][yPos][1] == 'W') return true;
        return false;
    }
    return false;
}