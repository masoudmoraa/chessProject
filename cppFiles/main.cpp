#include "main.h"
#include "Board.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace sf;
int main()
{
    // Board chess;
    RenderWindow window(VideoMode(1080, 880), "my window is not working", Style::Titlebar | Style::Close);
    Board chess(&window);
    chess.run();
    return 0;
}