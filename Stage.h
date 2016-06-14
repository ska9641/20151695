#pragma once
#include "Tank.h"
#include "Wall.h"
#include "Boss.h"
#include "EAi.h"
#include "GameScreen.h"

#define ENEMYSIZE 5
#define MAPX 23
#define MAPY 18

enum State1{INIT1,Stage,Running,Success,Fail,stop};

class CStage
{
private:
	int _nState;
	CTank *pt;
	CTank *et[ENEMYSIZE];
	CWall *Map[MAPX][MAPY];
	CBoss *boss;
	GameScreen *screen;
	int EnemyDeath;
	int check;
public:
	CStage();
	~CStage();
	Time *_Stage;

	void Init();
	void Run();
	void Update();
	void Render();
	void KeyInput();
};