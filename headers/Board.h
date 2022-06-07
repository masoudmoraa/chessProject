#pragma once
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"
#include <SFML/Graphics.hpp>
class Board
{
public :
    sf::RenderWindow* window;

    string board[8][8];
    PieceClass * pieces[2][16];
    char mode[2];
    int picesCounter[2] = {0};
    vector<Action> actions;
    vector<string> finalStr, finalStr2;
    vector<Move> badMove, goodMove;

    Board(sf::RenderWindow* _window);

    Sprite sp;
    Texture boardTex;

    RectangleShape selectedrect;
    bool flagsectedrect = false;
    vector <Move> valid_moves;

    CircleShape circle;
    CircleShape gCircle;
    CircleShape bCircle;

    Sprite sp2;
    Texture boardTex2;

    void Init();
    void newPiece(PieceClass *piece);
    bool checkCheck(char color);
    vector<Position> validMoves1(PieceClass *piece);
    vector<Move> validMoves2(PieceClass *piece, vector<Position> correctPoses);
    bool checkCheckmate(int color);
    bool checkCheckmate(char color);
    string outputPosFormat(Position from, char name, char color, Position to);
    string outputPieceFormat(Position from, char name, char color);
    bool defenceMode(int turn, int color);
    bool mateMode(int turn, int color);
    void Do(PieceClass *piece, Move movee, int colorNum, int otherColorNum);
    void Undo();
    vector<string> sortTheList(vector<string> finalStr, int length);\
    void run();
    void update();
    bool click(const sf::Vector2i& position);
    void show_selected_piece(const sf::Vector2i& position);
    Vector2i whichPiece(const sf::Vector2i& position);
    void show_move(vector <Move> valid);
    void draw_possible_moves();

};