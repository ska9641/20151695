#pragma once

#include "Object.h"

enum _State{SPACE, WALL, BLACKWALL};

class CWall : public CObject
{
private:
	int nState;
public:

	CWall();
	~CWall();

	void SetState(int _nState);
	int GetState();

	virtual void Render();
};