#include "Time.h"
static clock_t curTime = 0;
Time::Time()
{
	oldTime = 0;
	delayTime = 0;
}

Time::Time(clock_t _delayTime)
{
	delayTime = _delayTime;
}

Time::~Time()
{
}

bool Time::DelayCheck()
{
	if (curTime - oldTime > delayTime)
	{
		oldTime = clock();
		return true;
	}

	return false;
}

void Time::SetOldTime()
{
	oldTime = clock();
}

void Time::SetCurTime()
{
	curTime = clock();
}