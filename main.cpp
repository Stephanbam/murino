#include <chrono>
#include <thread>
#include "raylib.h"

int main() {
    InitWindow(800, 800, "Вертикальный квадрат с текстурой");
    SetTargetFPS(60);

    Texture2D img = LoadTexture("assets/img.png");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GRAY);
        DrawTexture(img,100,100, {255, 128, 128, 255});
        DrawText(TextFormat("FPS: %i", GetFPS()), 10, static_cast<float>(800) - 30, 24, BLACK);
        EndDrawing();
    }

    UnloadTexture(img);
    //macan

    CloseWindow();
}