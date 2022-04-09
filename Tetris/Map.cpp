#include "Map.h"

Map::Map(int w, int h)
{
	myMap.resize(h);
	for (auto&& aRow : myMap)
	{
		aRow.resize(w);
	}
	clearMap();
}

void Map::clearRow(const typename Matrix::reference theVector)
{
	for (auto&& aCell : theVector)
	{
		aCell = DEFAULT_CELL_INITIALIZER;
	}
}

void Map::clearMap()
{
	for (auto&& aRow : myMap)
	{
		clearRow(aRow);
	}
}

void Map::eraseLastRow()
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