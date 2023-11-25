#include "Game/Game.h"

int main(void)
{
	Game game(L"Speed Cleaner");

	game.Start();

	while (true)
	{
		game.Update();
	}

	return 0;
}