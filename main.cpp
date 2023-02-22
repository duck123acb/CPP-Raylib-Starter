#include "raylib.h"

int main()
{
        InitWindow(1000, 600, "Application");
	SetWindowState(FLAG_VSYNC_HINT);

        while (!WindowShouldClose())
        {
		// LOGIC

		// DRAWING

		BeginDrawing();

                ClearBackground(BLACK);
                DrawFPS(10, 10);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
