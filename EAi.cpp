#include <conio.h>
#include <stdlib.h>
#include "EAi.h"

Ai *Ai::instance = nullptr;


Ai::Ai()
{
	srand((unsigned int)time(NULL));
}

Ai::~Ai()
{
}

Ai * Ai::getInstance()
{
	if (instance = nullptr)
	{
		instance = new Ai();
	}

	return instance;
}

void Ai::RoEt(CTank * _ta, CWall * _wa)
{
	if(_ta->Rotation->DelayCheck())
	if (_wa->GetState() == 0)
	{
		_ta->SetDi(rand() % 4);
	}	
}

void Ai::Collision(CWall * _wa, CTank * _ta)
{
	if (Collision::CollisionOBJ(_wa, _ta))
	{
		if (_wa->GetState() > 0)
		{
			Collision::CollisionTaWa(_ta, _wa);
			_ta->SetDi(rand() % 4);
		}
	}
}