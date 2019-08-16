#pragma once

#include <Windows.h>
#include <iostream>

namespace FAriasG
{
	enum class EBackColor : unsigned short
	{
		Black = 0x00,
		Red = BACKGROUND_RED,
		Green = BACKGROUND_GREEN,
		Yellow = BACKGROUND_RED | BACKGROUND_GREEN,
		Blue = BACKGROUND_BLUE,
		Magenta = BACKGROUND_RED | BACKGROUND_BLUE,
		Cyan = BACKGROUND_BLUE | BACKGROUND_GREEN,
		White = BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN,
		LightBlack = Black | BACKGROUND_INTENSITY,
		LightRed = Red | BACKGROUND_INTENSITY,
		LightGreen = Green | BACKGROUND_INTENSITY,
		LightYellow = Yellow | BACKGROUND_INTENSITY,
		LightBlue = Blue | BACKGROUND_INTENSITY,
		LightMagenta = Magenta | BACKGROUND_INTENSITY,
		LightCyan = Cyan | BACKGROUND_INTENSITY,
		LightWhite = White | BACKGROUND_INTENSITY,
		Alpha0 = 0b100000000
	};

	enum class EForeColor : unsigned short
	{
		Black = 0x0,
		Red = FOREGROUND_RED,
		Green = FOREGROUND_GREEN,
		Yellow = FOREGROUND_RED | FOREGROUND_GREEN,
		Blue = FOREGROUND_BLUE,
		Magenta = FOREGROUND_RED | FOREGROUND_BLUE,
		Cyan = FOREGROUND_BLUE | FOREGROUND_GREEN,
		White = FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN,
		LightBlack = Black | FOREGROUND_INTENSITY,
		LightRed = Red | FOREGROUND_INTENSITY,
		LightGreen = Green | FOREGROUND_INTENSITY,
		LightYellow = Yellow | FOREGROUND_INTENSITY,
		LightBlue = Blue | FOREGROUND_INTENSITY,
		LightMagenta = Magenta | FOREGROUND_INTENSITY,
		LightCyan = Cyan | FOREGROUND_INTENSITY,
		LightWhite = White | FOREGROUND_INTENSITY,
		Alpha0 = 0b100000000
	};

	enum EAligned
	{
		LEFT,
		CENTER,
		RIGHT
	};

	void InitConsole(int width, int height);
	//void ClearConsole();
	void RenderFrame();
	void DestructConsole();

	void WritePixelXY(int x, int y, EBackColor color);
	void WriteCharXY(int x, int y, char _char, EForeColor color);
	void WriteStringXY(int x, int y, std::string _string, EForeColor color);
	void WriteStringXYAligned(int y, EAligned aligned, std::string _string, EForeColor color);
	//void PutCursorXY(SHORT x, SHORT y);

	void ShowConsoleCursor(bool showFlag);
	
}