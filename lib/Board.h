#pragma once
#include <vector>
#include "RaylibWrapper.h"
#include "Vec2.h"

class Board {
private:
    class Cell {
    public:
        Cell();
        void SetColor(Color color);
        void Remove();

        Color GetColor() const;

    private:
        bool bExists;
        Color color;
    };

public:
    Board(Vec2<int> screenPos, Vec2<int> widthHeight, int cellsize, int padding);
    void SetCell(Vec2<int> pos, Color color);
    void DrawCell(Vec2<int> pos) const;
    void Draw() const;

private:
    std::vector<Cell> cells;
    Vec2<int> screenPos;
    const int width;
    const int height;
    const int cellSize;
    const int padding;
};
