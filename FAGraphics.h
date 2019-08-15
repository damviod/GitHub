#pragma once

#include <Windows.h>

namespace FAriasG
{
	void InitConsole(int width, int height);
	void ClearConsole();
	void PutCharXY(SHORT x, SHORT y, char character);
	void PutCursorXY(SHORT x, SHORT y);
	void ShowConsoleCursor(bool showFlag);
}