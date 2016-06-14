#include <Windows.h>
#include "Screen.h"

#pragma warning (disable : 4996)


static int g_nScreenIndex;
static HANDLE g_hScreen[2];

Screen *Screen::instance = nullptr;

Screen::~Screen()
{
}

Screen * Screen::getInstance()
{
	if (instance = nullptr)
	{
		instance = new Screen();
	}

	return instance;
}

void Screen::ScreenInit()
{
	CONSOLE_CURSOR_INFO cci;

	// ������ �ܼ�â 2���� �����.
	g_hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	g_hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	// Ŀ�� �����
	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(g_hScreen[0], &cci);
	SetConsoleCursorInfo(g_hScreen[1], &cci);
}

void Screen::ScreenFlipping()
{
	Sleep(10);
	SetConsoleActiveScreenBuffer(g_hScreen[g_nScreenIndex]);
	g_nScreenIndex = !g_nScreenIndex;
}

void Screen::ScreenClear()
{
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(g_hScreen[g_nScreenIndex], ' ', 80 * 25, Coor, &dw);
}

void Screen::ScreenRelease()
{
	CloseHandle(g_hScreen[0]);
	CloseHandle(g_hScreen[1]);
}


void Screen::ScreenPrint(int x, int y, char *string)
{
	DWORD dw;
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(g_hScreen[g_nScreenIndex], CursorPosition);
	WriteFile(g_hScreen[g_nScreenIndex], string, strlen(string), &dw, NULL);
}

// 1 ~ 15 ���� ���� ���� ����
void Screen::SetColor(unsigned short color)
{
	SetConsoleTextAttribute(g_hScreen[g_nScreenIndex], color);
}

