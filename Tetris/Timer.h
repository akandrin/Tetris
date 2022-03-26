#pragma once

#include "Observable.h"
#include <exception>
#include <chrono>
#include <thread>

class Timer : public Observable
{
public:

	Timer(int theMSecInterval) : msec(theMSecInterval) {}

	void start()
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

	void SetInterval(int msec)
	{
		this->msec = msec;
	}

private:
	int msec = -1;
};

