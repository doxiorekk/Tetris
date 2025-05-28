#include "Game.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 480;

    Game game{screenWidth, screenHeight, "Tetris using raylib"};

    while (!game.GameShouldClose()) {
        game.Tick();
    }

    return 0;
}