#include "Cleaner.h"
#include "Game.h"
#include "../Input.h"

Cleaner::Cleaner(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics, std::string sprite) : Object(xPosition, yPosition, graphics, sprite)
{

}

void Cleaner::Draw()
{
	SetPosition(GetXPosition(), GetYPosition());
}

void Cleaner::DrawCleanCount()
{
	graphics->GotoxyAndPrint((CONSOLE_WIDTH >> 1) - 5, CONSOLE_HEIGHT - 1, std::to_string(cleanCount));
}

void Cleaner::Move()
{
	if (KeyDown('W') && GetYPosition() > 1)
	{
		SetYPosition(GetYPosition() - 1);
	}
	if (KeyDown('A') && GetXPosition() > 1)
	{
		SetXPosition(GetXPosition() - 1);
	}
	if (KeyDown('S') && GetYPosition() < CONSOLE_HEIGHT - 2)
	{
		SetYPosition(GetYPosition() + 1);
	}
	if (KeyDown('D') && GetXPosition() < CONSOLE_WIDTH - 5)
	{
		SetXPosition(GetXPosition() + 1);
	}
}

void Cleaner::Clean()
{
	if (CheckCollisionTrash())
	{
		cleanCount++;
	}
}