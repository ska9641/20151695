#pragma once
#include "Screen.h"
#include "GameScreen.h"
#include "Time.h"

class GameScreen
{
private:
	int Stageinfo;
	int StageTime;
	int StageGoal;
	int StageCount;
public:
	GameScreen();
	~GameScreen();
	void TInitScreen();
	void TBox();
	void TReadyScreen();
	void TSucceesScreen();
	void TFailScreen();
	void TStopScreen();
	void FInitScreen();
	void FReadyScreen();
	void FBackScreen();
	void FGoalMessage(int nX, int nY);
	void FSuccessScreen();
	void FFailureScreen();
	void FTimeAttack();
	void FGoal();
	bool FFailed();
	bool FClear();
	void GameSelect();
	Time *time;
};