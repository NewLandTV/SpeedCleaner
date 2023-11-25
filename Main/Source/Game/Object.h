#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <string>
#include "../Core/Graphics/Graphics.h"

class Object
{
private:
	unsigned short xPosition;
	unsigned short yPosition;

	void Clear();
	void Draw();

protected:
	const Graphics* graphics;

	std::string sprite;

public:
	Object(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics, std::string sprite);

	unsigned short GetXPosition() const;
	unsigned short GetYPosition() const;
	void SetXPosition(unsigned short x);
	void SetYPosition(unsigned short y);
	void SetPosition(unsigned short x, unsigned short y);
};

#endif