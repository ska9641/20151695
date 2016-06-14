#pragma once

class Screen
{
private:
	Screen() {};
	static Screen* instance;
public:
	~Screen();

	static Screen* getInstance();

	void ScreenInit();
	void ScreenFlipping();
	void ScreenClear();
	void ScreenRelease();
	void ScreenPrint(int x, int y, char *string);
	void SetColor(unsigned short color);
};