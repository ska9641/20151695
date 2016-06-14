#pragma once

#include "Object.h"
#include "Bullet.h"

#define BULLETSIZE 5
class CTank : public CObject
{
private:
	int nState;
public:
	CTank();
	~CTank();

	CBullet *bullet[BULLETSIZE];
	Time *moveTime;
	Time *fireTime;
	Time *Rotation;

	void SetState(int _nState);
	int GetState();

	void Shot();
	void Move();

	virtual void Render();

};