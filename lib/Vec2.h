#pragma once

template <typename Template>

class Vec2 {
public:
    Vec2() = default;
    Vec2(Template x, Template y)
        :
        x(x),
        y(y) {

    }

    Template GetX() const { return x; };
    Template GetY() const { return y; };
    void GetX(Template x_input) { x = x_input; };
    void GetY(Template y_input) { y = y_input; };

public:
    bool operator==(const Vec2& RightHandSide) {
        return ( x == RightHandSide.x && y == RightHandSide.y );
    }
    bool operator!=(const Vec2& RightHandSide) {
        return !( *this == RightHandSide );
    }
    Vec2 operator+(const Vec2& RightHandSide) const {
        return { x + RightHandSide.x, y + RightHandSide.y };
    }
    Vec2 operator+(const int RightHandSide) const {
        return { x + RightHandSide, y + RightHandSide };
    }
    Vec2& operator+=(const Vec2& RightHandSide) {
        x += RightHandSide.x;
        y += RightHandSide.y;
        return *this;
    }
    Vec2 operator-(const Vec2& RightHandSide) const {
        return { x - RightHandSide.x, y - RightHandSide.y };
    }
    Vec2& operator-=(const Vec2& RightHandSide) {
        x -= RightHandSide.x;
        y -= RightHandSide.y;
        return *this;
    }
    Vec2 operator*(const Vec2& RightHandSide) const {
        return { x * RightHandSide.x, y * RightHandSide.y };
    }
    Vec2 operator*(const int RightHandSide) const {
        return { x * RightHandSide, y * RightHandSide };
    }
    Vec2& operator*=(const Vec2& RightHandSide) {
        x *= RightHandSide.x;
        y *= RightHandSide.y;
        return *this;
    }

private:
    Template x;
    Template y;
};