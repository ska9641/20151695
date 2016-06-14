#include "Collision.h"

Collision::Collision()
{
}

Collision::~Collision()
{
}

bool Collision::CollisionOBJ(CObject * _obj1, CObject * _obj2)
{
	if (_obj1->GetnLi() && _obj2->GetnLi())
	{

		if (_obj1->Position->GetnX() == _obj2->Position->GetnX() &&
			_obj1->Position->GetnY() == _obj2->Position->GetnY() ||
			_obj1->Position->GetnX() + 1 == _obj2->Position->GetnX() &&
			_obj1->Position->GetnY() == _obj2->Position->GetnY() ||
			_obj1->Position->GetnX() + 2 == _obj2->Position->GetnX() &&
			_obj1->Position->GetnY() == _obj2->Position->GetnY() ||
			_obj1->Position->GetnX() + 3 == _obj2->Position->GetnX() &&
			_obj1->Position->GetnY() == _obj2->Position->GetnY())
			{
				return true;
			}
	}
	return false;
}

void Collision::CollisionBuObj(CBullet * _bu, CObject * _obj)
{
	if (CollisionOBJ(_bu, _obj) == true)
	{
		_bu->Hurt();
		_obj->Hurt();
	}
}

void Collision::CollisionTaWa(CTank * _ta, CWall * _wa)
{
	if (CollisionOBJ(_ta, _wa) == true)
	{
		if (_wa->GetState() > 0)
		{
			if (_ta->GetnDi() == UP)
			{
				_ta->Position->Move(0, 1);
			}
			else if (_ta->GetnDi() == DOWN)
			{
				_ta->Position->Move(0, -1);
			}
			else if (_ta->GetnDi() == LEFT)
			{
				_ta->Position->Move(1, 0);
			}
			else if (_ta->GetnDi() == RIGHT)
			{
				_ta->Position->Move(-1, 0);
			}
		}
	}
}

void Collision::CollisionBuMap(CBullet * _bu, CWall * _wall)
{
	if (CollisionOBJ(_bu, _wall) == true)
	{
		if (_wall->GetState() > 0)
		_bu->Hurt();
		if (_wall->GetState() == WALL)
		{
			_wall->Hurt();
		}
	}
}

bool Collision::CollisionOb(CObject * _obj1, CObject * _obj2)
{
	for (int i = 0; i < 5; i++)
	{
		if (_obj1->GetnX() == _obj2->GetnX() + i &&
			_obj1->GetnY() == _obj2->GetnY())
		{
			return true;
		}
	}

	return false;
	return false;
}
