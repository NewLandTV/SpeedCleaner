#ifndef __GAME_H__
#define __GAME_H__

#include <string>
#include <vector>
#include "../Core/Graphics/Graphics.h"
#include "Cleaner.h"
#include "Trash.h"

#define CONSOLE_WIDTH 60
#define CONSOLE_HEIGHT 30

bool CheckCollisionTrash();

class Game
{
private:
	std::wstring name;

public:
	Game(const std::wstring& name);

	void Start();
	void Update();
	void MakeTrash();
};

#endif