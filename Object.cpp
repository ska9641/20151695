#include "Object.h"

CObject::CObject()
{
	Position = new POS_XY();
}

CObject::~CObject()
{
}

void CObject::SetLi(int nL)
{
	nLife = nL;
}

void CObject::SetDi(int nD)
{
	nDirect = nD;
}

void CObject::Hurt()
{
	nLife--;
}

int CObject::GetnLi()
{
	return nLife;
}

int CObject::GetnDi()
{
	return nDirect;
}
void CObject::SetnXnY(int _x, int _y)
{
	nX = _x;
	nY = _y;
}

int CObject::GetnX()
{
	return nX;
}

int CObject::GetnY()
{
	return nY;
}

void CObject::Move(int _x, int _y)
{
	nX += _x;
	nY += _y;
}
