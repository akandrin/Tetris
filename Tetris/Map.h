#pragma once

#include <vector>
#include <iterator>

using Matrix = std::vector<std::vector<bool>>; // bool - a cell contains figure.

class Map
{
private:
	static constexpr bool DEFAULT_CELL_INITIALIZER = false;

public:
	Map(int w, int h);

private:
	void clearRow(const typename Matrix::reference theVector);

	void clearMap();

	void eraseLastRow(); // clears last row and moves other rows below

private:
	Matrix myMap;
};

