#include "Boss.h"

CBoss::CBoss()
{
	SetLi(5);
}

CBoss::~CBoss()
{
}

void CBoss::Render()
{
	if (GetnLi())
	{
		Screen::getInstance()->ScreenPrint(Position->GetnX() * 2, Position->GetnY(), "¡Ú");
	}
}
