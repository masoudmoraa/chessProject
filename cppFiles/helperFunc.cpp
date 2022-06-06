#include "Board.h"

string get_image_path(PieceClass *piece)
{
    string a = "";
    a += "pictures/";
    if(piece->color == 'W') a += "white";
    else a += "black";
    if(piece->name == 'K') a += "King";
    if(piece->name == 'Q') a += "Queen";
    if(piece->name == 'P') a += "Pawn";
    if(piece->name == 'B') a += "Bishop";
    if(piece->name == 'R') a += "Rook";
    if(piece->name == 'N') a += "Knight";
    return (a + ".png");
}
string get_board_path()
{
    return "pictures/board2.png";
}

sf::Vector2f get_cell_position(int row,int column)
{
    return sf::Vector2f(
        column * (20 + 10),
        row * (20 + 10));
}

// int get_cell_index(int x)
// {
//     x -= setting::cell_offset;
//     if (x<0)
//         return -1;
//     int cell_plus_space = setting::cell_size + setting::line_space;
//     int index = x / cell_plus_space;
//     if (index > 2 || x > index * cell_plus_space + setting::cell_size)
//         return -1;
//     return index;
// }