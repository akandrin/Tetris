#pragma once

#include "Observable.h"
#include <exception>
#include <chrono>
#include <thread>

class Timer : public Observable
{
public:

	Timer(int theMSecInterval);

	void start();

	void SetInterval(int msec);

private:
	int msec = -1;
};

