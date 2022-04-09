#include "Figure.h"
#include "MathHelper.h"

const std::vector<Point> Figure::FIGURE1_LOCATION = { Point{0, 0}, Point{0, 1}, Point{1, 0}, Point{1, 1} };
const std::vector<Point> Figure::FIGURE2_LOCATION = { Point{0, 0}, Point{1, 0}, Point{2, 0}, Point{3, 0} };
const std::vector<Point> Figure::FIGURE3_LOCATION = { Point{0, 0}, Point{0, 1}, Point{1, 1}, Point{2, 1} };
const std::vector<Point> Figure::FIGURE4_LOCATION = { Point{1, 0}, Point{2, 0}, Point{0, 1}, Point{1, 1} };
const std::vector<Point> Figure::FIGURE5_LOCATION = { Point{0, 0}, Point{1, 0}, Point{2, 0}, Point{1, 1} };
const std::vector<Point> Figure::FIGURE6_LOCATION = { Point{0, 0}, Point{1, 0}, Point{2, 0}, Point{0, 1} };


Figure::Figure(FigureType theFigureType)
{
	if (theFigureType == FigureType::RANDOM)
	{
		theFigureType = (FigureType)MathHelper::rand(FigureType::BEGIN, FigureType::END);
	}

	switch (theFigureType)
	{
	case FIGURE1:
		myLocation = FIGURE1_LOCATION;
		break;
	case FIGURE2:
		myLocation = FIGURE2_LOCATION;
		break;
	case FIGURE3:
		myLocation = FIGURE3_LOCATION;
		break;
	case FIGURE4:
		myLocation = FIGURE4_LOCATION;
		break;
	case FIGURE5:
		myLocation = FIGURE5_LOCATION;
		break;
	case FIGURE6:
		myLocation = FIGURE6_LOCATION;
		break;
	}
}
