#include "Board.h"
#include <cassert>

Board::Cell::Cell()
    :
    bExists(false),
    color(WHITE) {
}

void Board::Cell::SetColor(Color color_input) {
    color = color_input;
    bExists = true;
}

void Board::Cell::Remove() {
    bExists = false;
}

Color Board::Cell::GetColor() const {
    return color;
}

Board::Board(Vec2<int> screenPos, Vec2<int> widthHeight, int cellsize, int padding)
    :
    screenPos(screenPos),
    width(widthHeight.GetX()),
    height(widthHeight.GetY()),
    cellSize(cellsize),
    padding(padding) {
    assert(width > 0 && height > 0); // Triggered assertion means width or height is less or equal to 0
    assert(cellSize > 0); // Triggered assertion means cell size is less or equal to 0
    cells.resize(width * height);
}

void Board::SetCell(Vec2<int> pos, Color color) {
    assert(pos.GetX() >= 0 && pos.GetY() >= 0 && pos.GetX() < width && pos.GetY() < height); // Triggered assertion means x or y is out of bounds
    cells[pos.GetY() * width + pos.GetX()].SetColor(color);
}

void Board::DrawCell(Vec2<int> pos) const {
    assert(pos.GetX() >= 0 && pos.GetY() >= 0 && pos.GetX() < width && pos.GetY() < height); // Triggered assertion means x or y is out of bounds
    Color color = cells[pos.GetY() * width + pos.GetX()].GetColor();
    Vec2<int> topLeft = screenPos + padding + (pos * cellSize);
    DrawRectangle(topLeft.GetX(), topLeft.GetY(), cellSize - padding, cellSize - padding, color);
}

void Board::Draw() const {
    for (int iY{0}; iY < height; ++iY) {
        for (int iX{0}; iX < width; ++iX) {
            DrawCell({iX, iY});
        }
    }
}
