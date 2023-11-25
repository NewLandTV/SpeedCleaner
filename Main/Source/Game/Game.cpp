#include <thread>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "Game.h"

Graphics graphics;
Cleaner cleaner(CONSOLE_WIDTH >> 1, CONSOLE_HEIGHT >> 1, &graphics, "¡Ü");
std::vector<Trash> trashes;

bool CheckCollisionTrash()
{
	for (auto ptr = trashes.begin(); ptr < trashes.end(); ptr++)
	{
		if (cleaner.GetXPosition() == ptr->GetXPosition() && cleaner.GetYPosition() == ptr->GetYPosition())
		{
			trashes.erase(ptr);

			return true;
		}
	}

	return false;
}

Game::Game(const std::wstring& name) : name(name)
{
	srand((unsigned int)time(nullptr));

	// Setup console
	SetConsoleTitle(name.c_str());
	
	system("mode con cols=60 lines=30");

	// Hide cursor
	CONSOLE_CURSOR_INFO consoleCursorInfo;

	consoleCursorInfo.bVisible = 0;
	consoleCursorInfo.dwSize = 1;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleCursorInfo);
}

void Game::Start()
{
	cleaner.Draw();

	std::thread makeTrashThread([this] { MakeTrash(); });

	makeTrashThread.detach();
}

void Game::Update()
{
	graphics.DrawGrid();
	cleaner.Move();
	cleaner.Clean();
	cleaner.DrawCleanCount();

	Sleep(50);
}

void Game::MakeTrash()
{
	while (true)
	{
		if (rand() & 1)
		{
			trashes.push_back(Trash(rand() % (CONSOLE_WIDTH - 7) + 2, rand() % (CONSOLE_HEIGHT - 2) + 1, &graphics));
		}

		Sleep((rand() % 3 + 1) * 200);
	}
}