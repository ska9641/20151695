#include "Game.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
FGame::FGame()
{
	pl = new FPlayer();
	ba = new FBall();
	go = new FGoalDae();
	scr = new GameScreen();
	State = new Time(3000);
	nState = INIT;
	check = 0;
}

FGame::~FGame()
{
}

void FGame::Init()
{

	go->SetnXnY(10, 3);
	ba->SetnXnY(12, 19);
	ba->SetnState(1);
	pl->SetnXnY(10, 20);
}

void FGame::Update()
{


		Time::SetCurTime();
		KeyInput();
		switch (nState)
		{
		case INIT:
			break;
		case READY:
			if (State->DelayCheck())
			{
				check++;
			}
			if (check == 2)
			{
				nState = RUNNING;
				check = 0;
			}
			break;
		case RUNNING:
			scr->FTimeAttack();
			if (Collision::CollisionOb(ba, go))
			{
				check = 1;
				scr->FGoal();
				ba->SetnXnY(pl->GetnX() + 2, pl->GetnY() - 1);
				ba->SetnState(1);

			}
			if (State->DelayCheck())
			{
				check--;
			}
			if (ba->GetnY() <= 1)
			{
				ba->SetnXnY(pl->GetnX() + 2, pl->GetnY() - 1);
				ba->SetnState(1);
			}

			go->MoveG();
			ba->MoveB();
			if (scr->FFailed() == true)
			{
				nState = FAILD;
			}
			if (scr->FClear() == true)
			{
				check = 0;
				nState = SUCCESS;
			}
			break;
		case SUCCESS:
			if (State->DelayCheck())
			{
				check++;
			}
			if (check == 2)
			{
				exit(0);
			}
			break;
		case FAILD:
			break;
		}


}

void FGame::Render()
{
	switch (nState)
	{
	case INIT:
		scr->FInitScreen();
		break;
	case READY:
		scr->FReadyScreen();
		break;
	case RUNNING:

		scr->FBackScreen();
		if (check > 0)
		{
			scr->FGoalMessage(3,6);
		}
		pl->Render();
		ba->Render();
		go->Render();
		
		break;
	case SUCCESS:
		scr->FSuccessScreen();
		break;
	case FAILD:
		scr->FFailureScreen();
		break;
	}

}

void FGame::Run()
{
	Init();
	while (1) 
	{
		Screen::getInstance()->ScreenClear();
		Update();
		Render();
		Screen::getInstance()->ScreenFlipping();
	}

}
void FGame::KeyInput()
{
	if (_kbhit())
	{
		char ch = _getch();
		switch (ch)
		{
		case 'a':
		case 'A':
			if (pl->GetnX() >= 1)
			{
				pl->Move(-1, 0);
				if (ba->GetnState() == 1)
					ba->Move(-1, 0);
			}
			break;
		case 'd':
		case 'D':
			if (pl->GetnX() <= 17)
			{
				pl->Move(1, 0);
				if (ba->GetnState() == 1)
					ba->Move(1, 0);
			}
			break;
		case 32:
			if (nState == INIT)
			{
				nState = READY;
			}
			if (nState == RUNNING)
			{
				ba->SetnState(0);
			}
			break;
		case 'y':
		case 'Y':
			if (nState == FAILD)
			{
				nState = READY;
			}
			break;
		case 'N':
		case 'n':
			if (nState == FAILD)
			{
				exit(0);
			}
		}
	}
}
