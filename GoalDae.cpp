#include "GoalDae.h"

FGoalDae::FGoalDae()
{
	movetime = new Time(200);
	nState = 1;
}

FGoalDae::~FGoalDae()
{
}



void FGoalDae::MoveG()
{
	if (movetime->DelayCheck())
	{
		if (GetnX() <= 0)
			nState = 0;
		else if (GetnX() > 17)
			nState = 1;
		switch (nState)
		{
		case 0:
			Move(1, 0);
			break;
		case 1:
			Move(-1, 0);
			break;
		}

	}
}


void FGoalDae::Render()
{
	Screen::getInstance()->ScreenPrint(GetnX() * 2, GetnY(), "бс");
	for (int i = 1; i < 4; i++)
	{
		Screen::getInstance()->ScreenPrint((GetnX() + i)* 2, GetnY(), "д╤");
	}
	Screen::getInstance()->ScreenPrint((GetnX() + 4) * 2, GetnY(), "бс");

}
