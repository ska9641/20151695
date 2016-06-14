#pragma once
#include "Object.h"
#include "Time.h"
class FBall : public CObject
{
private:
	int nState;
public:
	FBall();
	~FBall();
	int GetnState();
	void SetnState(int _s);
	Time *movetime;
	void MoveB();
	virtual void Render();
};