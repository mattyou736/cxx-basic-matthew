#include "money.h"

Money::Money(float n): n(n) {}

float Money::value() const
{
	return n;
}
