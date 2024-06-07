#include <iostream>
#include "raylib.h"

Color green{173, 204, 96, 255};
Color darkGreen{43, 51, 24, 255};

int cellSize{30};
int cellCount{25};

class Food
{
public:
    Vector2 position{5, 6};

    void Draw()
    {
        DrawRectangle(position.x * cellSize, position.y * cellSize, cellSize, cellSize, darkGreen);
    }
};

main()

{
    std::cout << "Now starting ... " << "\n";
    int res = cellSize * cellCount;
    InitWindow(res, res, "Snake");

    SetTargetFPS(60);

    Food food;

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(green);
        food.Draw();
        EndDrawing();
    }

    return 0;
}
