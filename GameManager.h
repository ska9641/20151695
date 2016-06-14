#pragma once
#include "Game.h"
#include "Stage.h"
#include "Screen.h"
class GameManager
{
private:
	int nGame;
	int nState;
	CStage *stage;
	FGame *game;
	GameScreen * scr;
public:
	void SelectGame();
	GameManager();
	~GameManager();
	void GetnGame();
};