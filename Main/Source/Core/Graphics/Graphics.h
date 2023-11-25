#ifndef __GRAPHICS_H__
#define __GRAPHICS_H__

#include <string>

class Graphics
{
private:

public:
	void DrawGrid() const;

	void GotoxyAndPrint(unsigned short x, unsigned short y, std::string string) const;
};

#endif