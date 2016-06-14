#include "Bullet.h"

CBullet::CBullet()
{
	SetLi(0);
	moveTime = new Time(100);
}

CBullet::~CBullet()
{
}

void CBullet::Render()
{
	if (GetnLi())
	{
		switch (GetnDi())
		{
		case UP:
		case DOWN:
			Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "คำ");
			break;
		case LEFT:
		case RIGHT:
			Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "คั");
			break;
		}
	}
}

void CBullet::Move()
{
	if (GetnLi())
	{
		if (moveTime->DelayCheck())
		{
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
	}
}
