#pragma once
#include "money.h"

class Euro1 : public Money
{
public:
	Euro1();

	std::string get_name() const override;
};