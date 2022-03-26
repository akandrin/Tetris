#pragma once
#include "Timer.h"

class Game
{
public:
	Game() : myTimer(1000)
	{
	}

private:
	Timer myTimer;
};

