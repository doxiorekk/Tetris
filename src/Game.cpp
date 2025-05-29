#include "Game.h"
#include <raylib.h>
#include <cassert>

Game::Game(int width, int height, int fps, std::string title) {
    assert(!GetWindowHandle()); // Triggered assertion means window is open
    SetTargetFPS(fps);
    InitWindow(width, height, title.c_str());
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
}
