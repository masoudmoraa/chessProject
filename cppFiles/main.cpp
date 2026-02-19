#include "main.h"
#include "Board.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace sf;
int main()
{
    GameInput in;

    std::cin >> in.mode;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            std::cin >> in.cells[i][j];

    // Board chess;
    RenderWindow window(VideoMode(1080, 880), "Chess Board", Style::Titlebar | Style::Close);
    Board chess(&window, in);
    chess.run();
    return 0;
}