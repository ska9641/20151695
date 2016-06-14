#pragma once
#include <time.h>

class Time
{
private:
	clock_t oldTime;
	clock_t delayTime;
public:
	Time();
	Time(clock_t _delayTime);
	~Time();

	bool DelayCheck();
	void SetOldTime();
	static void SetCurTime();
};