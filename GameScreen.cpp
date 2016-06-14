#include <iostream>
#include "GameScreen.h"

using namespace std;

void GameScreen::FInitScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "����������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��             �ব������                   ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                        ///.   ��~~~      ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                       (^.^)              ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��                      ���� ����           ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��                         ����             ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��                     ��  ����             ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��       �� ���� ����  Go! Go!              ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��       a :���� d : ������ space :��       ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��        ���ܦ�  space Ű�� �����ּ���     ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 20, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 21, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 22, "����������������������������������������������");
}

void GameScreen::FReadyScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "����������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 2, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 3, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 4, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 5, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 6, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 7, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 8, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 9, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 10, "��������                    ������᦭");
	Screen::getInstance()->ScreenPrint(0, 11, "��������     1  ��������    ������᦭");
	Screen::getInstance()->ScreenPrint(0, 12, "��������                    ������᦭");
	Screen::getInstance()->ScreenPrint(0, 13, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 14, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 15, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 16, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 17, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 18, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 19, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 20, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 21, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 22, "�����������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 23, "����������������������������������������������");

	
}

void GameScreen::FBackScreen()
{
	char string[100];

	Screen::getInstance()->ScreenPrint(0, 0, "����������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                                          ��");
	sprintf(string, "�������������������������������������������������� �ð�: %d", Stageinfo);
	Screen::getInstance()->ScreenPrint(0, 6, string);
	Screen::getInstance()->ScreenPrint(0, 7, "��                                          ��");
	sprintf(string, "��                                          ������ �ð�: %d", StageTime);
	Screen::getInstance()->ScreenPrint(0, 8, string);
	Screen::getInstance()->ScreenPrint(0, 9, "��                                          ��");
	sprintf(string, "��                                          ����ǥ ����: %d ", StageGoal);
	Screen::getInstance()->ScreenPrint(0, 10, string);
	Screen::getInstance()->ScreenPrint(0, 11, "��                                          ��");
	sprintf(string, "��                                          ������ �� ����: %d ", StageCount);
	Screen::getInstance()->ScreenPrint(0, 12, string);

	Screen::getInstance()->ScreenPrint(0, 13, "��                                          ��");
	sprintf(string, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 14, string);
	Screen::getInstance()->ScreenPrint(0, 15, "��                                          ��");
	sprintf(string, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 16, string);
	Screen::getInstance()->ScreenPrint(0, 17, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 20, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 21, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 22, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 23, "����������������������������������������������");
}

void GameScreen::FGoalMessage(int nX, int nY)
{
	Screen::getInstance()->ScreenPrint(nX, nY, "�� )) ���� (( ��");
	Screen::getInstance()->ScreenPrint(nX, nY + 1, "��(^^')/ ��(\"*')/");
	Screen::getInstance()->ScreenPrint(nX, nY + 2, "   ��       ��");
	Screen::getInstance()->ScreenPrint(nX, nY + 3, "  ����    ����");
}

void GameScreen::FSuccessScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "����������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��                ////����                  ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��               q ��  �� p                 ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��               (��������)                 ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��             �� �̼� ���� ��              ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 20, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 21, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 22, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 23, "����������������������������������������������");
}

void GameScreen::FFailureScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "����������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��                    �̼� ���� !!!!        ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��                 �ܦ�����                 ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��                   ��  ��                 ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��                  �����                ��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��        �ٽ� �Ͻðڽ��ϱ�? (y/n)          ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 20, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 21, "��                                          ��");
	Screen::getInstance()->ScreenPrint(0, 22, "����������������������������������������������");
}

void GameScreen::FTimeAttack()
{
	if (time->DelayCheck())
	{
		StageTime++;
	}
}

void GameScreen::FGoal()
{
	StageCount++;
}

bool GameScreen::FFailed()
{
	if (Stageinfo == StageTime)
	{
		return true;
	}
}

bool GameScreen::FClear()
{
	if (StageGoal == StageCount)
		return true;
}

void GameScreen::GameSelect()
{
	Screen::getInstance()->ScreenPrint(0, 0, "��������������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 2, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 3, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 4, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 5, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 6, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 7, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 8, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 9, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 10, "��������                        ������᦭");
	Screen::getInstance()->ScreenPrint(0, 12, "��������1: ǲ������ 2: ��ũ���� ������᦭");
	Screen::getInstance()->ScreenPrint(0, 13, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 14, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 15, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 16, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 17, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 18, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 19, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 20, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 21, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 22, "�������������������������᦭");
	Screen::getInstance()->ScreenPrint(0, 23, "��������������������������������������������������");
}

GameScreen::GameScreen()
{
	Stageinfo = 30;
	StageTime = 0;
	StageGoal = 6;
	StageCount = 0;
	time = new Time(1000);
}

GameScreen::~GameScreen()
{
}

void GameScreen::TInitScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "������������������������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��         -----                                          ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��        /    |                                       /  ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��       /       |    ��ũ ����                       /   ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��      /          |                            /-----/   ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��     /            |---------------|         /           ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��    /                               |      /            ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��   /              ��������������      |   /             ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��  /               ��          ��       |/               ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��/                 ��    ��    ��                        ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��     ( (    ��������������������������     ) )          ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��            ��                      ��                  ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��           �� ��                   �� ��                ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��           �� �� �������������������� ��                ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��           �� ��                   �� ��                ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��  ~ ^ ~ $~ ~ ^ ~ ~ ~ ^ ~ ~ ~ ^ ~ ~ ~ ^~ ~ ~ ~ ~ $ ~    ~��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��                  Press Space Key !!                    ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 20, "������������������������������������������������������������");
}

void GameScreen::TBox()
{
	Screen::getInstance()->ScreenPrint(0, 0, "������������������������������������������������������������");
	for (int i = 1; i <= 19; i++)
		Screen::getInstance()->ScreenPrint(0, i, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 20, "������������������������������������������������������������");
}

void GameScreen::TReadyScreen()
{
	char string[100] = "1 �������� !!!!!!";
	TBox();
	Screen::getInstance()->ScreenPrint(25, 9, string);
}

void GameScreen::TSucceesScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "������������������������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��                     ////����                           ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��                    q ��. �� p (^)@                     ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��                    (��������) //                       ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��                   �� �̼� ���� ��                      ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 20, "������������������������������������������������������������");
}

void GameScreen::TFailScreen()
{
	Screen::getInstance()->ScreenPrint(0, 0, "������������������������������������������������������������");
	Screen::getInstance()->ScreenPrint(0, 1, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 2, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 3, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 4, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 5, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 6, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 7, "��                    �̼� ���� !!!!                      ��");
	Screen::getInstance()->ScreenPrint(0, 8, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 9, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 10, "��                               �ܦ�����                 ��");
	Screen::getInstance()->ScreenPrint(0, 11, "��                                 ��  ��                 ��");
	Screen::getInstance()->ScreenPrint(0, 12, "��                                �����                ��");
	Screen::getInstance()->ScreenPrint(0, 13, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 14, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 15, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 16, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 17, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 18, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 19, "��                                                        ��");
	Screen::getInstance()->ScreenPrint(0, 20, "������������������������������������������������������������");
}

void GameScreen::TStopScreen()
{

	TBox();

	Screen::getInstance()->ScreenPrint(3, 3, "                     ��ũ ���� ��");
	Screen::getInstance()->ScreenPrint(3, 6, "                    ��������������");
	Screen::getInstance()->ScreenPrint(3, 7, "               ~~   ��          ��");
	Screen::getInstance()->ScreenPrint(3, 8, "        ~~          ��    ��    ��");
	Screen::getInstance()->ScreenPrint(3, 9, "    ��         ��������������������������");
	Screen::getInstance()->ScreenPrint(3, 10, "  ������       ��                      ��");
	Screen::getInstance()->ScreenPrint(3, 11, "   ����      �� ��                   �� ��");
	Screen::getInstance()->ScreenPrint(3, 12, "             �� �� �������������������� ��");
	Screen::getInstance()->ScreenPrint(3, 13, "             �� ��                   �� ��");
	Screen::getInstance()->ScreenPrint(3, 14, "~ ~ ^ ~ $~ ~ ^ ~ ~ ~ ^ ~ ~ ~ ^ ~ ~ ~ ^~ ~ ~ ~ /~ $ ~~");
}
