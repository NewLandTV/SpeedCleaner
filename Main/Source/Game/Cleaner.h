#ifndef __CLEANER_H__
#define __CLEANER_H__

#include "Object.h"

class Cleaner : public Object
{
private:
	unsigned short cleanCount = 0;

public:
	Cleaner(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics, std::string sprite);

	void Draw();
	void DrawCleanCount();
	void Move();
	void Clean();
};

#endif