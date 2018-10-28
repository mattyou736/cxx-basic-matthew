#pragma once
#include "money.h"

class Euro3 : public Money
{
public:
	Euro3();

	std::string get_name() const override;
};