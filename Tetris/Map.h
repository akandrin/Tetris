#pragma once

#include <vector>
#include <iterator>

using Matrix = std::vector<std::vector<bool>>; // bool - a cell contains figure.

class Map
{
private:
	static constexpr bool DEFAULT_CELL_INITIALIZER = false;

public:
	Map(int w, int h)
	{
		myMap.resize(h);
		for (auto&& aRow : myMap)
		{
			aRow.resize(w);
		}
		clearMap();
	}

private:
	void clearRow(const typename Matrix::reference theVector)
	{
		for (auto&& aCell : theVector)
		{
			aCell = DEFAULT_CELL_INITIALIZER;
		}
	}

	void clearMap()
	{
		for (auto&& aRow : myMap)
		{
			clearRow(aRow);
		}
	}

	void eraseLastRow() // clears last row and moves other rows below
	{
		for (auto aReverseIter = myMap.rbegin(); aReverseIter != myMap.rend(); ++aReverseIter)
		{
			auto aNextIter = std::next(aReverseIter);
			if (aNextIter == myMap.rend())
			{
				clearRow(*aReverseIter);
			}
			else
			{
				*aReverseIter = std::move(*aNextIter);
			}
		}
	}

private:
	Matrix myMap;
};

