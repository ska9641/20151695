#pragma once

class POS_XY
{
private:
	int nX;
	int nY;
public:

	POS_XY();
	~POS_XY();

	int GetnX();
	int GetnY();
	void SetPos(int _x, int _y);
	void Move(int _x, int _y);
};