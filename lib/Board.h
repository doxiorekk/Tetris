#pragma once

#include <vector>
#include "raylib.h"

class Board {
private:
    class Cell {
    public:
        Cell();
        void SetColor(Color color);
        void Remove();

    private:
        bool bExists;
        Color color;
    };

public:
    Board(int x, int y, int width, int height, int cellsize);
    void SetCell(int x, int y, Color color);

private:
    std::vector<Cell> cells;
    int x;
    int y;
    const int width;
    const int height;
    const int cellSize;
};
