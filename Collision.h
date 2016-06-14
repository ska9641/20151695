#pragma once
#include "Boss.h"
#include "Bullet.h"
#include "Tank.h"
#include "Wall.h"
#include "Object.h"

class Collision
{
private:
public:
	Collision();
	~Collision();
	static bool CollisionOBJ(CObject *_obj1,CObject  *_obj2);
	static void CollisionBuObj(CBullet *_bu,CObject  *_obj);
	static void CollisionTaWa(CTank *_ta,CWall  *_wa);
	static void CollisionBuMap(CBullet *_bu, CWall *_wall);
	static bool CollisionOb(CObject * _obj1, CObject * _obj2);
};