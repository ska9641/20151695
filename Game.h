#pragma once
#include "Ball.h"
#include "GoalDae.h"
#include "Player.h"
#include "Collision.h"
#include "GameScreen.h"

enum State{INIT,READY,RUNNING,SUCCESS,FAILD};
class FGame
{
private:
	int nState;
	FPlayer * pl;
	FBall *ba;
	FGoalDae *go;
	GameScreen *scr;
	int check;
public:
	FGame();
	~FGame();
	void Init();
	void Update();
	void Render();
	void Run();
	Time *State;
	void KeyInput();
};