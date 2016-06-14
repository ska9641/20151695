#pragma once
#include "Object.h"

class CBoss : public CObject
{
private:
public:
	CBoss();
	~CBoss();

	virtual void Render();
};