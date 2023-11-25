#include <iostream>
#include <Windows.h>
#include "Graphics.h"
#include "../../Game/Game.h"

void Graphics::DrawGrid() const
{
	GotoxyAndPrint(0, 0, "¦£");
	GotoxyAndPrint(CONSOLE_WIDTH - 2, 0, "¦¤");
	GotoxyAndPrint(0, CONSOLE_HEIGHT - 1, "¦¦");
	GotoxyAndPrint(CONSOLE_WIDTH - 2, CONSOLE_HEIGHT - 1, "¦¥");

	for (int x = 2; x < CONSOLE_WIDTH - 2; x += 2)
	{
		GotoxyAndPrint(x, 0, "¦¡");
		GotoxyAndPrint(x, CONSOLE_HEIGHT - 1, "¦¡");
	}

	for (int y = 1; y < CONSOLE_HEIGHT - 1; y++)
	{
		GotoxyAndPrint(0, y, "¦¢");
		GotoxyAndPrint(CONSOLE_WIDTH - 2, y, "¦¢");
	}
}

void Graphics::GotoxyAndPrint(unsigned short x, unsigned short y, std::string string) const
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

	std::cout << string;
}