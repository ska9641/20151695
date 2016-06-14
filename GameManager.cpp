#include <conio.h>
#include "GameManager.h"

GameManager::GameManager()
{
	game = new FGame();
	stage = new CStage();
	scr = new GameScreen();
	nGame = 0;
	nState = 0;
}

GameManager::~GameManager()
{
}
void GameManager::SelectGame()
{
	if (nState == 0)
	{
		scr->GameSelect();
		if (_kbhit())
		{
			char ch = _getch();
			switch (ch)
			{
			case '1':
				nGame = 1;
				nState = 1;
				break;
			case '2':
				nGame = 2;
				nState = 1;
				break;
			default:
				break;
			}
		}
	}
}



void GameManager::GetnGame()
{
	switch (nGame)
	{
	case 1:
		game->Run();
		break;
	case 2:
		stage->Run();
		break;
	}
}
