#pragma once
#include "Position.h"
#include "Screen.h"
#include "Time.h"

enum _DIRECT{UP, DOWN, LEFT, RIGHT};
class CObject
{
protected:
	int nLife;
	int nDirect;
	int nX, nY;
public:

	CObject();
	~CObject();
	void SetnXnY(int _x, int _y);

	int GetnX();
	int GetnY();

	void Move(int _x, int _y);
	void SetLi(int nL);
	void SetDi(int nD);
	void Hurt();

	POS_XY *Position;

	int GetnLi();
	int GetnDi();

	virtual void Render() = 0;
};