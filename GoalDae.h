#pragma once
#include "Object.h"

class FGoalDae : public CObject
{
private:
	int nState;
public:
	FGoalDae();
	~FGoalDae();

	Time *movetime;

	void MoveG();
	virtual void Render();
};