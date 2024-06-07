#include <iostream>
#include "raylib.h"

int main()
{

    InitWindow(800, 600, "Snake Clone");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    return 0;
}
