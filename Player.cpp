#include "Player.h"

FPlayer::FPlayer()
{
	
}

FPlayer::~FPlayer()
{
}



void FPlayer::Render()
{
	Screen::getInstance()->ScreenPrint(GetnX() * 2,GetnY(), "¦±¦¬¡Ü¦¬¦°");

}
