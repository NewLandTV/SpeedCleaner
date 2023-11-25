#include <cstdlib>
#include "Trash.h"

Trash::Trash(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics) : Object(xPosition, yPosition, graphics, sprites[rand() % 3])
{
	sprite = sprites[rand() % 3];

	SetPosition(GetXPosition(), GetYPosition());
}