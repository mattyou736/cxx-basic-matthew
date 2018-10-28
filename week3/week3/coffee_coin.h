#pragma once
#include "money.h"

class CoffeeCoin : public Money
{
public:
	CoffeeCoin();

	std::string get_name() const override;
};