#pragma once
#include "Tank.h"
#include "Wall.h"
#include "Collision.h"

class Ai
{
private:
	
	static Ai * instance;
public:
	Ai();
	~Ai();
	static Ai* getInstance();
	
	void RoEt(CTank *_ta,CWall *_wa);
	void Collision(CWall *_wa, CTank *_ta);
};