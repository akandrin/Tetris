#include "MathHelper.h"
#include <cstdlib>

int MathHelper::rand(int theBegin, int theEnd)
{
	return ::rand() % (theEnd - theBegin + 1) + theBegin;
}
