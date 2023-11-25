#ifndef __TRASH_H__
#define __TRASH_H__

#include <string>
#include "Object.h"

class Trash : public Object
{
private:
	const std::string sprites[3] = { "£ª", "@", "#" };

public:
	Trash(unsigned short xPosition, unsigned short yPosition, const Graphics* graphics);
	
	const Trash& operator =(const Trash& trash) { return trash; }
};

#endif