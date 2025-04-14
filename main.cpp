#include <iostream>
#include <raylib.h>  

using namespace std;

Color Green = {173,204,96,255};
Color darkGreen = {43,51,24,255};

int cellSize = 30;
int cellCount = 25;

class Food
{
    public:
    Vector2 position = {5, 6};
    Texture2D texture;

    Food()
    {
        Image image = LoadImage("Graphics/food.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
    }

    ~Food()
    {
        UnloadTexture(texture);
    }

    void Draw()
    {
        DrawTexture(texture, position.x * cellSize, position.y * cellSize, WHITE);
    }
};

int main () {

    Food food = Food();

    cout << "Hello World" << endl;

    InitWindow(cellSize * cellCount, cellSize * cellCount, "Snake Clone");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
   
        // Update

       
        // Draw
        BeginDrawing();
            ClearBackground(Green);
            food.Draw();   
            
        EndDrawing();
    }

    CloseWindow();
    return 0;
}