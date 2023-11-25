#include "Object.h"

void Object::Clear()
{
	graphics->GotoxyAndPrint(xPosition, yPosition, "   ");
}

void Object::Draw()
{
	graphics->GotoxyAndPrint(xPosition, yPosition, sprite);
}

Object::Object(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics, std::string sprite) : xPosition(xPosition), yPosition(yPosition), graphics(graphics), sprite(sprite)
{

}

unsigned short Object::GetXPosition() const
{
	return xPosition;
}

unsigned short Object::GetYPosition() const
{
	return yPosition;
}

void Object::SetXPosition(unsigned short x)
{
	Clear();

	xPosition = x;

	Draw();
}

void Object::SetYPosition(unsigned short y)
{
	Clear();
	
	yPosition = y;

	Draw();
}

void Object::SetPosition(unsigned short x, unsigned short y)
{
	Clear();

	xPosition = x;
	yPosition = y;

	Draw();
}