#include "Wall.h"

CWall::CWall()
{
	SetLi(2);
}

CWall::~CWall()
{
}

void CWall::SetState(int _nState)
{
	nState = _nState;
}

int CWall::GetState()
{
	return nState;
}

void CWall::Render()
{
	if (nState == SPACE)
	{
	}
	else if(nState == WALL)
	{
		if(GetnLi())
		Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "бр");
	}
	else if (nState == BLACKWALL)
	{
		Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "бс");
	}
}
