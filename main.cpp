#include "GameManager.h"
void main()
{
	GameManager *Game = new GameManager();
	Screen::getInstance()->ScreenInit();
	while (1)
	{
		Screen::getInstance()->ScreenClear();
		Game->SelectGame();
		Game->GetnGame();
		Screen::getInstance()->ScreenFlipping();
	}
}