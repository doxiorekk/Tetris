#include "RaylibWrapper.h"
#include <cassert>

void raylibwrap::DrawRectangle(Vec2<int> pos, Vec2<int> widthHeight, Color color) {
    assert(pos.GetX() >= 0 && pos.GetY() >= 0 && pos.GetX() < GetScreenWidth() && pos.GetY() < GetScreenHeight()); // Triggered assertion means trying to draw outside the screen.
    DrawRectangle(pos.GetX(), pos.GetY(), widthHeight.GetX(), widthHeight.GetY(), color);
}
