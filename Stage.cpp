#include "Stage.h"
#include <conio.h>
#include <windows.h>
#include <iostream>

CStage::CStage()
{
	_nState = INIT1;
	_Stage = new Time(3000);
	screen = new GameScreen();
	EnemyDeath = 0;
	check = 0;
}

CStage::~CStage()
{
}

void CStage::Init()
{
	pt = new CTank();

	for (int i = 0; i < ENEMYSIZE; i++)
	{
		et[i] = new CTank();
	}

	for (int i = 0; i < MAPY; i++)
	{
		for (int j = 0; j < MAPX; j++)
		{
			Map[j][i] = new CWall();
		}
	}

	boss = new CBoss();

	FILE *fp = fopen("map1.txt", "rt");

	for (int i = 0; i < MAPY; i++)
	{
		for (int j = 0; j < MAPX; j++)
		{
			char ch = fgetc(fp);
			switch (ch)
			{
			case '0':
			case '1':
			case '2':
				Map[j][i]->SetState(ch - 48);
				Map[j][i]->Position->SetPos(j, i);
				break;
			case 'A':
				pt->Position->SetPos(j, i);
				pt->SetState(0);
				pt->SetDi(UP);
				break;
			case 'B':
				for (int k = 0; k < ENEMYSIZE; k++)
				{
					if (!et[k]->GetnLi())
					{
						et[k]->Position->SetPos(j, i);
						et[k]->SetState(1);
						et[k]->SetDi(DOWN);
						break;
					}
				}
				break;
			case 'C':
				boss->Position->SetPos(j, i);
				break;
			}
		}
		fgetc(fp);
	}

	fclose(fp);
}

void CStage::Run()
{
	Screen::getInstance()->ScreenInit();
	Init();
	while (1)
	{
		Screen::getInstance()->ScreenClear();
		Update();
		Render();
		Screen::getInstance()->ScreenFlipping();
	}
}

void CStage::Update()
{
	KeyInput();
	Time::SetCurTime();
	switch (_nState)
	{
	case INIT1:
		break;
	case Stage:
		if (_Stage->DelayCheck())
			check ++;
		if(check == 2)
			_nState = Running;
		break;
	case Running:
		EnemyDeath = 0;
		check = 0;
		Collision::CollisionTaWa(pt, Map[pt->Position->GetnX()][pt->Position->GetnY()]);
		for (int i = 0; i < BULLETSIZE; i++)
		{
			pt->bullet[i]->Move();
			Collision::CollisionBuObj(pt->bullet[i], boss);
			if (Map[pt->bullet[i]->Position->GetnX()][pt->bullet[i]->Position->GetnY()]->GetState() >0)
				Collision::CollisionBuMap(pt->bullet[i], Map[pt->bullet[i]->Position->GetnX()][pt->bullet[i]->Position->GetnY()]);
			for (int j = 0; j < ENEMYSIZE; j++)
			{
				et[j]->Shot();
				et[j]->bullet[i]->Move();
				Collision::CollisionBuObj(et[j]->bullet[i], boss);
				Collision::CollisionBuObj(et[j]->bullet[i], pt);
				Collision::CollisionBuMap(et[j]->bullet[i], Map[et[j]->bullet[i]->Position->GetnX()][et[j]->bullet[i]->Position->GetnY()]);
				Collision::CollisionBuObj(pt->bullet[i], et[j]);
				Collision::CollisionBuObj(pt->bullet[i], et[j]->bullet[i]);
			}
		}

		for (int i = 0; i < ENEMYSIZE; i++)
		{
			if (!et[i]->GetnLi())
			{
				EnemyDeath++;
			}
			et[i]->Move();
			Ai::getInstance()->RoEt(et[i], Map[et[i]->Position->GetnX()][et[i]->Position->GetnY()]);
			Ai::getInstance()->Collision(Map[et[i]->Position->GetnX()][et[i]->Position->GetnY()], et[i]);
		}
		if (EnemyDeath == 5)
		{
			_nState = Success;
		}
		if (pt->GetnLi() == 0 || boss->GetnLi() == 0)
		{
			_nState = Fail;
		}
		break;
	case Success:

		if (_Stage->DelayCheck())
				check ++;
		if (check == 2)
		{
			check = 0;
			_nState = stop;
		}
		break;
	case Fail:
		if (_Stage->DelayCheck())
				check++;
		if (check == 2)
		{
			check = 0;
			_nState = stop;
		}
		break;
	case stop:
		if (_Stage->DelayCheck())
			check++;
		if (check == 2)
			exit(0);
		break;
	}
	
	Collision::CollisionTaWa(pt, Map[pt->Position->GetnX()][pt->Position->GetnY()]);
	for (int i = 0; i < BULLETSIZE; i++)
	{
		pt->bullet[i]->Move();
		Collision::CollisionBuObj(pt->bullet[i], boss);
		if (Map[pt->bullet[i]->Position->GetnX()][pt->bullet[i]->Position->GetnY()]->GetState() >0)
			Collision::CollisionBuMap(pt->bullet[i], Map[pt->bullet[i]->Position->GetnX()][pt->bullet[i]->Position->GetnY()]);
		for (int j = 0; j < ENEMYSIZE; j++)
		{
			et[j]->Shot();
			et[j]->bullet[i]->Move();
			Collision::CollisionBuObj(et[j]->bullet[i], boss);
			Collision::CollisionBuObj(et[j]->bullet[i], pt);
			Collision::CollisionBuMap(et[j]->bullet[i], Map[et[j]->bullet[i]->Position->GetnX()][et[j]->bullet[i]->Position->GetnY()]);
			Collision::CollisionBuObj(pt->bullet[i], et[j]);
			Collision::CollisionBuObj(pt->bullet[i], et[j]->bullet[i]);
		}
	}

	for (int i = 0; i < ENEMYSIZE; i++)
	{
		et[i]->Move();
		Ai::getInstance()->RoEt(et[i], Map[et[i]->Position->GetnX()][et[i]->Position->GetnY()]);
		Ai::getInstance()->Collision(Map[et[i]->Position->GetnX()][et[i]->Position->GetnY()], et[i]);
	}
}

void CStage::Render()
{
	switch (_nState)
	{
	case INIT1:
		screen->TInitScreen();
		break;
	case Stage:
		screen->TReadyScreen();
		break;
	case Running:
		pt->Render();
		for (int i = 0; i < BULLETSIZE; i++)
		{
			et[i]->Render();
		}
		for (int i = 0; i < MAPY; i++)
		{
			for (int j = 0; j < MAPX; j++)
			{
				Map[j][i]->Render();
			}
		}
		boss->Render();
		break;
	case Success:
		screen->TSucceesScreen();
		break;
	case Fail:
		screen->TFailScreen();
		break;
	case stop:
		screen->TStopScreen();
		break;
	}
	
}

void CStage::KeyInput()
{
	if (_kbhit())
	{
		char ch = _getch();
		switch (ch)
		{
		case 'W':
		case 'w':
			pt->Position->Move(0, -1);
			pt->SetDi(UP);
			break;
		case 'S':
		case 's':
			pt->Position->Move(0, 1);
			pt->SetDi(DOWN);
			break;
		case 'A':
		case 'a':
			pt->Position->Move(-1, 0);
			pt->SetDi(LEFT);
			break;
		case 'D':
		case 'd':
			pt->Position->Move(1, 0);
			pt->SetDi(RIGHT);
			break;
		case 32:
			if (_nState == INIT1)
				_nState = Stage;
			pt->Shot();
			break;
		case VK_ESCAPE:
			exit(1);
			break;
		}
	}
}
