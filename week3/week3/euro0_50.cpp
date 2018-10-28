#include "euro0_50.h"

Euro0_50::Euro0_50() : Money(0.5f) {}

std::string Euro0_50::get_name() const
{
	return "0.50 euro";
}
