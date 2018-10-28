#include "euro1.h"

Euro1::Euro1(): Money(1.0f) {}

std::string Euro1::get_name() const
{
	return "1 euro";
}
