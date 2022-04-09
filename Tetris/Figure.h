#pragma once

#include <vector>
#include <initializer_list>
#include "Point.h"

/*
	Possible figures:
	
	O O
	O O       - fugure 1

	O O O O   - figure 2

	0 0
	  0 0     - figure 3

	  0 0
	0 0       - figure 4

	0 0 0
	  0       - figure 5

	0 0 0
	0         - figure 6

*/

enum FigureType
{
	BEGIN,
	FIGURE1 = BEGIN,
	FIGURE2,
	FIGURE3,
	FIGURE4,
	FIGURE5,
	FIGURE6,
	END = FIGURE6,
	RANDOM
};

enum Direction
{
	LEFT,
	RIGHT,
	DOWN
};

class Figure
{
	static const std::vector<Point> FIGURE1_LOCATION;
	static const std::vector<Point> FIGURE2_LOCATION;
	static const std::vector<Point> FIGURE3_LOCATION;
	static const std::vector<Point> FIGURE4_LOCATION;
	static const std::vector<Point> FIGURE5_LOCATION;
	static const std::vector<Point> FIGURE6_LOCATION;

	std::vector<Point> myLocation; // location of figure (if there is point in vector then there is figure in this point)
public:
	Figure(FigureType theFigureType);

	void Offset(Direction theDirection);

	void Rotate();
};

