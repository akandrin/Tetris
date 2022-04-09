#include "Timer.h"

Timer::Timer(int theMSecInterval) : msec(theMSecInterval) {}

void Timer::start()
{
	if (msec <= 0)
	{
		throw std::exception("Incorrect msec");
	}

	std::chrono::milliseconds aTime(msec);

	while (true)
	{
		std::this_thread::sleep_for(aTime);
		notifyUpdate();
	}
}

void Timer::SetInterval(int msec)
{
	this->msec = msec;
}
