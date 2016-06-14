#include "Ball.h"

FBall::FBall()
{
	movetime = new Time( 150 );

}

FBall::~FBall()
{
}

int FBall::GetnState()
{
	return nState;
}

void FBall::SetnState(int _s)
{
	nState = _s;
}



void FBall::MoveB()
{
	if (movetime->DelayCheck())
	{
		if (nState == 0)
		{
			Move(0, -1);
		}
	}
}

void FBall::Render()
{
	Screen::getInstance()->ScreenPrint(GetnX() * 2, GetnY(), "¡Û");

}
