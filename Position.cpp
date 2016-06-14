#include "Position.h"

POS_XY::POS_XY()
{
	nX = 0;
	nY = 0;
}

POS_XY::~POS_XY()
{
}

int POS_XY::GetnX()
{
	return nX;
}

int POS_XY::GetnY()
{
	return nY;
}

void POS_XY::SetPos(int _x, int _y)
{
	nX = _x;
	nY = _y;
}

void POS_XY::Move(int _x, int _y)
{
	nX += _x;
	nY += _y;
}
