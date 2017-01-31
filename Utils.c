#include <windows.h>

#include "Utils.h"

void SetCursorPosition(int XPos, int YPos)
{
    COORD Coord;

    Coord.X = XPos;
    Coord.Y = YPos;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
}
