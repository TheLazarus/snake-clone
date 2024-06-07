#include <iostream>
#include "raylib.h"

Color green{173, 204, 96, 255};
Color darkGreen{43, 51, 24, 255};

int cellSize{30};
int cellCount{25};
int main()

{
    std::cout << "Now starting ... " << "\n";
    int res = cellSize * cellCount;
    InitWindow(res, res, "Snake");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(green);

        EndDrawing();
    }

    return 0;
}
