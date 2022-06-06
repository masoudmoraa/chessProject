#include "Board.h"
#include "helperFunc.h"
Board :: Board(sf::RenderWindow* _window) : window(_window)
{
    this->window->setFramerateLimit(60);
}
void Board :: Init()
{   

    boardTex.loadFromFile("pictures/board2.png");
    sp.setTexture(boardTex);
    sp.setScale((float)880./1360, (float)880./1360);
    sp.setPosition(0,0);
    
    // boardTex2.loadFromFile("pictures/board3.jpg");
    // sp2.setTexture(boardTex2);
    // sp2.setScale((float)280./1360, (float)280./1360);
    // sp2.setPosition(30,850);
    // DW - MW - DB - MB
    char mode[2];
    cin >> mode;
    // Board statu
    char colorCheck;
    char helper[2];
    for (size_t i = 0; i < 8; i++)
    {
        for(size_t j = 0; j < 8; j++)
        {
            cin >> helper;
            if(helper[0] == '-')
            {
                board[i][j] = "  ";
                continue;
            }
            colorCheck = helper[1];
            if(helper[0] == 'K')
            {
                newPiece(new King(i, j, colorCheck));
            }
            if(helper[0] == 'Q')
            {
                newPiece(new Queen(i, j, colorCheck));
            }
            if(helper[0] == 'B')
            {
                newPiece(new Bishop(i, j, colorCheck));
            }
            if(helper[0] == 'N')
            {
                newPiece(new Knight(i, j, colorCheck));
            }
            if(helper[0] == 'R')
            {
                newPiece(new Rook(i, j, colorCheck));
            }
            if(helper[0] == 'P')
            {
                newPiece(new Pawn(i, j, colorCheck));
            } 
        }
    }
    int colorNum = 0;
    if(mode[0] == 'B') colorNum = 1;

}

void Board :: newPiece(PieceClass *piece)
{
    if(piece->color == 'W')
    {
        piece->number = picesCounter[0];
        pieces[0][piece->number] = piece;
        picesCounter[0]++;
    }
    else
    {
        piece->number = picesCounter[1];
        pieces[1][piece->number] = piece;
        picesCounter[1]++;
    }
    string tmp_string1(1, piece->name);
    string tmp_string2(1, piece->color);
    board[piece->pos.x][piece->pos.y] = tmp_string1 + tmp_string2;
}

bool Board :: checkCheck(char color)
{
    int colorNum = 0, otherColorNum = 1;
    if (color == 'B')
    {
        colorNum = 1;
        otherColorNum = 0; 
    }
    Position tmpKingPos;
    for (size_t i = 0; i < picesCounter[colorNum]; i++)
    {
        if(pieces[colorNum][i]->name == 'K')
            tmpKingPos = pieces[colorNum][i]->pos;
    }
    for (size_t i = 0; i < picesCounter[otherColorNum]; i++)
    {
        if (pieces[otherColorNum][i]->pos.x < 0 || pieces[otherColorNum][i]->pos.x > 7 || pieces[otherColorNum][i]->pos.y < 0 || pieces[otherColorNum][i]->pos.y > 7)
            continue;
        if(pieces[otherColorNum][i]->validPosition(board, tmpKingPos.x, tmpKingPos.y) == 1)
            return true;
    }
    return false;
}

vector<Position> Board :: validMoves1(PieceClass *piece)
{
    Position current;
    current.x = piece->pos.x;
    current.y = piece->pos.y;
    vector<Position> correctPoses;
    Position correctPos;

    if (piece->name == 'K')
    {
        for (int i = -1; i < 2; i++)
            for (int j = -1; j < 2; j++)
            {
                if(piece->validPosition(board, current.x+i, current.y+j))
                {
                    correctPos.x = current.x + i;
                    correctPos.y = current.y + j;
                    correctPoses.push_back(correctPos);
                }
            }
        return correctPoses;
    }
    else if (piece->name == 'Q')
    {
        for (int i = -piece->pos.x; i < -piece->pos.x + 8; i++)
        {
            for (int j = -piece->pos.y; j < -piece->pos.y + 8; j++)
            {
                if (piece->validPosition(board, piece->pos.x + i, piece->pos.y + j))
                {
                    correctPos.x = current.x + i;
                    correctPos.y = current.y + j;
                    correctPoses.push_back(correctPos);
                }
            }
        }
        return correctPoses;                
    }
    else if (piece->name == 'B')
    {
        for (int i = -7; i < 8; i++)
        {
            if (piece->validPosition(board, piece->pos.x + i, piece->pos.y + i))
            {
                correctPos.x = current.x + i;
                correctPos.y = current.y + i;
                correctPoses.push_back(correctPos);
            }
            if (piece->validPosition(board, piece->pos.x - i, piece->pos.y + i))
            {
                correctPos.x = current.x - i;
                correctPos.y = current.y + i;
                correctPoses.push_back(correctPos);
            }
        }
        return correctPoses;
    }
    else if (piece->name == 'N')
    {
        for (int i = -2; i < 3; i++)
            for (int j = -2; j < 3; j++)
                if (piece->validPosition(board, piece->pos.x + i, piece->pos.y + j))
                {
                    correctPos.x = current.x + i;
                    correctPos.y = current.y + j;
                    correctPoses.push_back(correctPos);
                }
        return correctPoses;
    }
    else if (piece->name == 'R')
    {
        for (int i = -7; i < 8; i++)
        {
            if (piece->validPosition(board, piece->pos.x + i, piece->pos.y))
            {
                correctPos.x = current.x + i;
                correctPos.y = current.y;
                correctPoses.push_back(correctPos);
            }
            if (piece->validPosition(board, piece->pos.x, piece->pos.y + i))
            {
                correctPos.x = current.x;
                correctPos.y = current.y + i;
                correctPoses.push_back(correctPos);
            }
        }
        return correctPoses;
    }
    else if (piece->name == 'P')
    {
        if (piece->color == 'W')
        {
            for (int i = -1; i < 2; i++)
            {
                if (piece->validPosition(board, current.x-1, current.y+i))
                {
                    correctPos.x = current.x - 1;
                    correctPos.y = current.y + i;
                    correctPoses.push_back(correctPos);
                }
            }
            if (piece->pos.x == 6 && piece->validPosition(board, current.x - 2, current.y))
            {
                correctPos.x = current.x - 2;
                correctPos.y = current.y;
                correctPoses.push_back(correctPos);
            }
        }
        else
        {
            for (int i = -1; i < 2; i++)
            {
                if (piece->validPosition(board, current.x + 1, current.y + i))
                {
                    correctPos.x = current.x + 1;
                    correctPos.y = current.y + i;
                    correctPoses.push_back(correctPos);
                }
            }
            if (piece->pos.x == 1 && piece->validPosition(board, current.x + 2, current.y))
            {
                correctPos.x = current.x + 2;
                correctPos.y = current.y;
                correctPoses.push_back(correctPos);
            }
        }
        return correctPoses;
    }
    return correctPoses;
}
vector<Move> Board :: validMoves2(PieceClass *piece, vector<Position> correctPoses)
{
    vector<Move> moveList;
    if(correctPoses.size() == 0) return moveList;
    Move tmp_move;
    Position current = piece->pos;
    string number1str = board[current.x][current.y];
    string number2str;
    int colorNum = 0, otherColorNum = 1;
    if(piece->color == 'B')
    {
        colorNum = 1;
        otherColorNum = 0;
    }

    for (Position to : correctPoses)
    {
        number2str = board[to.x][to.y];
        piece->pos.x = to.x;
        piece->pos.y = to.y;
        if (board[to.x][to.y] == "  ")
        {
            board[to.x][to.y] = number1str;
            board[current.x][current.y] = "  ";
            if(!checkCheck(piece->color))
            {
                tmp_move.a = current;
                tmp_move.b = piece->pos;
                moveList.push_back(tmp_move);
            }
            board[to.x][to.y] = number2str;
            board[current.x][current.y] = number1str;
            piece->pos.x = current.x;
            piece->pos.y = current.y;
        }
        else
        {
            for (size_t i = 0; i < picesCounter[otherColorNum]; i++)
            {
                if (pieces[otherColorNum][i]->pos.x == to.x && pieces[otherColorNum][i]->pos.y == to.y)
                {
                    board[to.x][to.y] = number1str;
                    board[current.x][current.y] = "  ";
                    pieces[otherColorNum][i]->pos.x = -1; pieces[otherColorNum][i]->pos.x = -1;
                    piece->pos.x = to.x;                  piece->pos.y = to.y;
                    if(!checkCheck(piece->color))
                    {
                        tmp_move.number2 = i;
                        tmp_move.a = current;
                        tmp_move.b = piece->pos;
                        moveList.push_back(tmp_move);
                    }
                    pieces[otherColorNum][i]->pos.x = to.x; pieces[otherColorNum][i]->pos.y = to.y;
                    piece->pos.x = current.x;                  piece->pos.y = current.y;
                }   
            board[to.x][to.y ] = number2str;
            board[current.x][current.y] = number1str;
            }
        }
    }
return moveList;
}
bool Board :: checkCheckmate(int color)
{
    if(color == 0) return checkCheckmate('W');
    return checkCheckmate('B');
}
bool Board :: checkCheckmate(char color)
{
    int colorNum = 0, otherColorNum = 1;
    if (color == 'B')
    {
        colorNum = 1;
        otherColorNum = 0;
    }
    vector<Move> posList;
    if(checkCheck(color))
    {
        for (size_t i = 0; i < picesCounter[colorNum]; i++)
        {
            posList = validMoves2(pieces[colorNum][i], validMoves1(pieces[colorNum][i]));
            for(Move a : posList)
                if (posList.size() != 0)
                    return false;    
        }
        return true;                
    }
    return false;
}
string Board :: outputPosFormat(Position from, char name, char color, Position to)
{
    string result = "";
    result += (char)(from.y+97);
    result += (char)('8'-from.x);
    result += name;
    result += color;
    result += (char)(to.y+97);
    result += (char)('8'-to.x);
    return result;
}
string Board :: outputPieceFormat(Position from, char name, char color)
{
    string result = "";
    result += (char)(from.y+97);
    result += (char)('8'-from.x);
    result += name;
    result += color;
    return result;
}
bool Board :: defenceMode(int turn, int color)
{
    int otherColor;
    if(color == 0) otherColor = 1;
    else otherColor = 0;
    if(turn == 1)
    {
        for(size_t i = 0; i<picesCounter[color]; i++)
        {
            vector<Move> validMovesList = validMoves2(pieces[color][i], validMoves1(pieces[color][i]));
            vector<string> tmpStr;
            for(Move a : validMovesList)
            {
                Do(pieces[color][i], a, color, otherColor);
                if(mateMode(1, otherColor))
                {
                    tmpStr.push_back(outputPosFormat(a.a, pieces[color][i]->name, pieces[color][i]->color, a.b));
                }
                Undo();
                finalStr.clear();
            }
            if(validMovesList.size() > 0 && validMovesList.size() == tmpStr.size())
            {
                finalStr2.push_back(outputPieceFormat(pieces[color][i]->pos, pieces[color][i]->name, pieces[color][i]->color));
            }
            else
            {
                for (string a : tmpStr)
                    finalStr2.push_back(a);
            }
        }
        if (finalStr2.size() > 0) return true;
        return false;
    }
    return 0;
}
bool Board :: mateMode(int turn, int color)
{   
    int otherColor;
    if(color == 0) otherColor = 1;
    else otherColor = 0;
    if(turn == 1)
    {
        if(checkCheckmate(otherColor)) return false;
        for(size_t i = 0; i<picesCounter[color]; i++)
        {
            vector<Move> validMovesList = validMoves2(pieces[color][i], validMoves1(pieces[color][i]));
            vector<string> tmpStr;
            for(Move a : validMovesList)
            {
                Do(pieces[color][i], a, color, otherColor);
                if(mateMode(2, otherColor))
                {
                    tmpStr.push_back(outputPosFormat(a.a, pieces[color][i]->name, pieces[color][i]->color, a.b));
                }
                Undo();
            }
            if(validMovesList.size() == tmpStr.size() && tmpStr.size() != 0 )
            {
                finalStr.push_back(outputPieceFormat(pieces[color][i]->pos, pieces[color][i]->name, pieces[color][i]->color));
            }
            else
            {
                for (string a : tmpStr)
                    finalStr.push_back(a);
            }
        }
        if (finalStr.size() > 0) return true;
        return false;                
    }
    if(turn == 2)
    {
        if(checkCheckmate(color)) return true;
        for(size_t i = 0; i<picesCounter[color]; i++)
        {
            vector<Move> validMovesList = validMoves2(pieces[color][i], validMoves1(pieces[color][i]));
            for(Move a : validMovesList)
            {
                Do(pieces[color][i], a, color, otherColor);
                if(!mateMode(3, otherColor))
                {
                    Undo();
                    return false;
                }
                Undo();
            }
        }
        return true;
    }
    if(turn == 3)
    {
        if(checkCheckmate(color)) return false;
        for(size_t i = 0; i<picesCounter[color]; i++)
        {
            vector<Position> validPoses = validMoves1(pieces[color][i]);
            vector<Move> validMovesList = validMoves2(pieces[color][i], validPoses);
            for(Move a : validMovesList)
            {
                Do(pieces[color][i], a, color, otherColor);
                if (checkCheckmate(otherColor))
                {
                    Undo();
                    return true;
                }
                Undo();
            }
        }
        return false;
    }
    return 0;
}
void Board :: Do(PieceClass *piece, Move movee, int colorNum, int otherColorNum)
{
    Action currentAct;
    currentAct.move.a    = movee.a;                     currentAct.move.b = movee.b;
    currentAct.boardStr1 = board[movee.a.x][movee.a.y]; currentAct.boardStr2 = board[movee.b.x][movee.b.y];
    currentAct.number1   = piece->number;
    currentAct.color1    = colorNum;
    if(board[movee.b.x][movee.b.y] == "  ")
    {
        board[movee.b.x][movee.b.y] = board[movee.a.x][movee.a.y]; board[movee.a.x][movee.a.y] = currentAct.boardStr2;
        piece->pos.x = movee.b.x;                                  piece->pos.y = movee.b.y;
    }
    else
    {
        currentAct.isEmpty = false;
        currentAct.number2 = movee.number2;
        currentAct.color2  = otherColorNum;
        board[movee.b.x][movee.b.y] = board[movee.a.x][movee.a.y]; board[movee.a.x][movee.a.y] = "  ";
        piece->pos.x = movee.b.x;                                  piece->pos.y = movee.b.y;
        pieces[otherColorNum][movee.number2]->pos.x = -1;
        pieces[otherColorNum][movee.number2]->pos.y = -1;
    }
    actions.push_back(currentAct);
    return;
}

void Board :: Undo()
{
    if (actions.size() == 0) return;
    
    Action action = actions.back();
    if(action.isEmpty)
    {
        board[action.move.a.x][action.move.a.y] = action.boardStr1;
        board[action.move.b.x][action.move.b.y] = action.boardStr2;
        pieces[action.color1][action.number1]->pos.x = action.move.a.x;
        pieces[action.color1][action.number1]->pos.y = action.move.a.y;
        actions.pop_back();
        return;
    }
    else
    {
        board[action.move.a.x][action.move.a.y] = action.boardStr1;
        board[action.move.b.x][action.move.b.y] = action.boardStr2;
        pieces[action.color1][action.number1]->pos.x = action.move.a.x;
        pieces[action.color1][action.number1]->pos.y = action.move.a.y;
        pieces[action.color2][action.number2]->pos.x = action.move.b.x;
        pieces[action.color2][action.number2]->pos.y = action.move.b.y;
        actions.pop_back();
        return;
    }
    return;
}
vector<string> Board :: sortTheList(vector<string> finalStr, int length)
{
    for(size_t i = 0; i<length; i++)
        for(size_t j = i+1; j<length; j++)
            if(finalStr[i] > finalStr[j])
            {
                string tmp = finalStr[i];
                finalStr[i] = finalStr[j];
                finalStr[j] = tmp;
            }
    return finalStr;
}

void Board :: run()
{
    Init();
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; picesCounter[i] > j; j++)
        {
                if(pieces[i][j]->color == 'B') pieces[i][j]->path += "black";
                else pieces[i][j]->path += "white";
                if(pieces[i][j]->name == 'K') pieces[i][j]->path += "King";
                if(pieces[i][j]->name == 'Q') pieces[i][j]->path += "Queen";
                if(pieces[i][j]->name == 'R') pieces[i][j]->path += "Rook";
                if(pieces[i][j]->name == 'B') pieces[i][j]->path += "Bishop";
                if(pieces[i][j]->name == 'N') pieces[i][j]->path += "Knight";
                if(pieces[i][j]->name == 'P') pieces[i][j]->path += "Pawn";
                pieces[i][j]->tex.loadFromFile("pictures/" + pieces[i][j]->path + ".png");
                pieces[i][j]->sprt.setTexture(pieces[i][j]->tex);
                float piece_scale_x = (float)85. / pieces[i][j]->sprt.getTexture()->getSize().x;
                float piece_scale_y = (float)85. / pieces[i][j]->sprt.getTexture()->getSize().y;
                pieces[i][j]->sprt.setScale(piece_scale_x, piece_scale_y);
                pieces[i][j]->sprt.setPosition((42 + 105 * pieces[i][j]->pos.y), (20 + 105 * pieces[i][j]->pos.x));
        }      
    }
    
    this->window->display();
    while (this->window->isOpen()) {
        sf::Event event;
        // cout << "salaam";
        while (this->window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window->close();
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                this->click(sf::Mouse::getPosition(*(this->window)));
            }
            // this->window->draw(this->sp);
            
        }
        this->window->draw(sp);
        // this->window->draw(sp2);
        this->update();
        this->window->display();

    }
}

void Board :: update()
{
    for(int i = 0; i < picesCounter[0]; i++)
    {
        this->window->draw(pieces[0][i]->sprt);
    }
    for(int i = 0; i < picesCounter[1]; i++)
    {
        this->window->draw(pieces[1][i]->sprt);
    }
}

void Board :: click(const sf::Vector2i& position)
{

}