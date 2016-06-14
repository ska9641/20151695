#include "Tank.h"

CTank::CTank()
{
	moveTime = new Time(200);
	fireTime = new Time(1000);
	Rotation = new Time(1000);
	for (int i = 0; i < BULLETSIZE; i++)
	{
		bullet[i] = new CBullet();
	}
	SetLi(0);
}

CTank::~CTank()
{
}

void CTank::SetState(int _nState)
{
	nState = _nState;
	switch (nState)
	{
	case 0:
		SetLi(5);
		break;
	case 1:
		SetLi(3);
		break;
	}
}

int CTank::GetState()
{
	return nState;
}

void CTank::Shot()
{
	if(GetnLi())
		if(fireTime->DelayCheck())
	for (int i = 0; i < BULLETSIZE; i++)
	{
		if (!bullet[i]->GetnLi())
		{
			bullet[i]->Position->SetPos(Position->GetnX(), Position->GetnY());
			bullet[i]->SetDi(GetnDi());
			bullet[i]->SetLi(1);
			break;
		}
	}
}

void CTank::Render()
{
	if (GetnLi())
	{
		if (nState == 0)
		{
			Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "¡ß");
		}
		else if (nState == 1)
		{
			Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "¡Þ");
		}

		for (int i = 0; i < BULLETSIZE; i++)
		{
			bullet[i]->Render();
		}
	}
}

void CTank::Move()
{
	if (GetnLi())
	if(moveTime->DelayCheck())
	switch (GetnDi())
	{
	case UP:
		Position->Move(0, -1);
		break;
	case DOWN:
		Position->Move(0, 1);
		break;
	case LEFT:
		Position->Move(-1, 0);
		break;
	case RIGHT:
		Position->Move(1, 0);
		break;
	}
}