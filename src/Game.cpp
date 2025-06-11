#include "Game.h"
#include <raylib.h>
#include <cassert>

Game::Game(int width, int height, int fps, std::string title)
    :
    board({200,200},{10,20},15, 2) {
    assert(!GetWindowHandle()); // Triggered assertion means window is open
    SetTargetFPS(fps);
    InitWindow(width, height, title.c_str());
    for (int iY{0}; iY < 20; ++iY) {
        for (int iX{0}; iX < 10; ++iX) {
            board.SetCell({iX,iY}, RED);
        }
    }
}

Game::~Game() noexcept {
    assert(GetWindowHandle()); // Triggered assertion means window is closed
    CloseWindow();
}

bool Game::GameShouldClose() const {
    return WindowShouldClose();
}

void Game::Tick() {
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}

void Game::Update() {
}

void Game::Draw() {
    ClearBackground(RAYWHITE);
    board.Draw();
}
