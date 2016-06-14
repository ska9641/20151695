#include <iostream>
#include "FootScreen.h"

FootScreen::FootScreen()
{
	Stageinfo = 30;
	StageTime = 0;
	StageGoal = 6;
	StageCount = 0;
	time = new Time(1000);
}

FootScreen::~FootScreen()
{
}

void FootScreen::InitScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	Screen::getInstance()->ScreenPrint(0, 1, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 2, "┃             □━━━□                   ┃");
	Screen::getInstance()->ScreenPrint(0, 3, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 4, "┃                        ///.   슛~~~      ┃");
	Screen::getInstance()->ScreenPrint(0, 5, "┃                       (^.^)              ┃");
	Screen::getInstance()->ScreenPrint(0, 6, "┃                      ┗┫ ┣┓           ┃");
	Screen::getInstance()->ScreenPrint(0, 7, "┃                         ┏┛             ┃");
	Screen::getInstance()->ScreenPrint(0, 8, "┃                     ⊙  ┛＼             ┃");
	Screen::getInstance()->ScreenPrint(0, 9, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 10, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 11, "┃       슛 골인 게임  Go! Go!              ┃");
	Screen::getInstance()->ScreenPrint(0, 12, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 13, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 14, "┃       a :왼쪽 d : 오른쪽 space :슛       ┃");
	Screen::getInstance()->ScreenPrint(0, 15, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 16, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 17, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 18, "┃        ┗●┛  space 키를 눌러주세요     ┃");
	Screen::getInstance()->ScreenPrint(0, 19, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 20, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 21, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 22, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void FootScreen::ReadyScreen()
{


	Screen::getInstance()->ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	Screen::getInstance()->ScreenPrint(0, 1, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 2, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 3, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 4, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 5, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 6, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 7, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 8, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 9, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 10, "┃■■■■■                    ■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 11, "┃■■■■■     1  스테이지    ■■■■■■┃" );
	Screen::getInstance()->ScreenPrint(0, 12, "┃■■■■■                    ■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 13, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 14, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 15, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 16, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 17, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 18, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 19, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 20, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 21, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 22, "┃■■■■■■■■■■■■■■■■■■■■■┃");
	Screen::getInstance()->ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void FootScreen::BackScreen()
{
	char string[100];

	Screen::getInstance()->ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	Screen::getInstance()->ScreenPrint(0, 1, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 2, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 3, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 4,"┃                                          ┃" );
	Screen::getInstance()->ScreenPrint(0, 5, "┃                                          ┃");
	sprintf(string, "┣━━━━━━━━━━━━━━━━━━━━━┫제한 시간: %d", Stageinfo);
	Screen::getInstance()->ScreenPrint(0, 6, string);
	Screen::getInstance()->ScreenPrint(0, 7, "┃                                          ┃");
	sprintf(string, "┃                                          ┃현재 시간: %d", StageTime);
	Screen::getInstance()->ScreenPrint(0, 8, string);
	Screen::getInstance()->ScreenPrint(0, 9, "┃                                          ┃");
	sprintf(string, "┃                                          ┃목표 골인: %d ", StageGoal);
	Screen::getInstance()->ScreenPrint(0, 10, string);
	Screen::getInstance()->ScreenPrint(0, 11, "┃                                          ┃");
	sprintf(string, "┃                                          ┃골인 공 개수: %d ", StageCount);
	Screen::getInstance()->ScreenPrint(0, 12, string);

	Screen::getInstance()->ScreenPrint(0, 13, "┃                                          ┃");
	sprintf(string, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 14, string);
	Screen::getInstance()->ScreenPrint(0, 15, "┃                                          ┃");
	sprintf(string, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 16, string);
	Screen::getInstance()->ScreenPrint(0, 17, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 18, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 19, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 20, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 21, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 22, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void FootScreen::GoalMessage(int nX, int nY)
{
	Screen::getInstance()->ScreenPrint(nX, nY, "☆ )) 골인 (( ★");
	Screen::getInstance()->ScreenPrint(nX, nY + 1, "＼(^^')/ ＼(\"*')/");
	Screen::getInstance()->ScreenPrint(nX, nY + 2, "   ■       ■");
	Screen::getInstance()->ScreenPrint(nX, nY + 3, "  ┘┐    ┌└");
}

void FootScreen::SuccessScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	Screen::getInstance()->ScreenPrint(0, 1, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 2, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 3, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 4, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 5, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 6, "┃                ////＼＼                  ┃");
	Screen::getInstance()->ScreenPrint(0, 7, "┃               q ∧  ∧ p                 ┃");
	Screen::getInstance()->ScreenPrint(0, 8, "┃               (└──┘)                 ┃");
	Screen::getInstance()->ScreenPrint(0, 9, "┃             ♬ 미션 성공 ♪              ┃");
	Screen::getInstance()->ScreenPrint(0, 10, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 11, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 12, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 13, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 14, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 15, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 16, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 17, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 18, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 19, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 20, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 21, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 22, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 23, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void FootScreen::FailureScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "┏━━━━━━━━━━━━━━━━━━━━━┓");
	Screen::getInstance()->ScreenPrint(0, 1, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 2, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 3, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 4, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 5, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 6, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 7, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 8, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 9, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 10, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 11, "┃                    미션 실패 !!!!        ┃");
	Screen::getInstance()->ScreenPrint(0, 12, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 13, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 14, "┃                 ●┳━┓                 ┃");
	Screen::getInstance()->ScreenPrint(0, 15, "┃                   ┛  ┗                 ┃");
	Screen::getInstance()->ScreenPrint(0, 16, "┃                  ■■■■                ┃");
	Screen::getInstance()->ScreenPrint(0, 17, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 18, "┃        다시 하시겠습니까? (y/n)          ┃");
	Screen::getInstance()->ScreenPrint(0, 19, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 20, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 21, "┃                                          ┃");
	Screen::getInstance()->ScreenPrint(0, 22, "┗━━━━━━━━━━━━━━━━━━━━━┛");
}

void FootScreen::TimeAttack()
{
	if (time->DelayCheck())
	{
		StageTime++;
	}
}

void FootScreen::Goal()
{
	StageCount++;
}

bool FootScreen::Failed()
{
	if (Stageinfo == StageTime)
	{
		return true;
	}
}

bool FootScreen::Clear()
{
	if(StageGoal == StageCount)
		return true;
}
