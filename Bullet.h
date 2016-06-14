#pragma once

#include "Object.h"

class CBullet : public CObject
{
private:
public:
	CBullet();
	~CBullet();

	Time *moveTime;
	virtual void Render();
	void Move();
};