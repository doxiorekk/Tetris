#include "Board.h"
#include <cassert>

Board::Cell::Cell()
    :
    bExists(false),
    color(WHITE)
{
}

void Board::Cell::SetColor(Color color_input) {
    color = color_input;
    bExists = true;
}

void Board::Cell::Remove() {
    bExists = false;
}

Board::Board(int x, int y, int width, int height, int cellsize)
    :
    x(x),
    y(y),
    width(width),
    height(height),
    cellSize(cellsize)
{
    assert(width > 0 && height > 0); // Triggered assertion means width or height is less or equal to 0
    assert(cellSize > 0); // Triggered assertion means cell size is less or equal to 0
    cells.resize(width*height);
}

void Board::SetCell(int x, int y, Color color) {
}
