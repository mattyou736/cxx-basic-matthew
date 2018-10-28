#pragma once
#include "money.h"


class Euro0_50 : public Money
{
public:
	Euro0_50();

	std::string get_name() const override;
};