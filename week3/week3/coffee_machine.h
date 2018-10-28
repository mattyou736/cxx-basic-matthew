#pragma once
#include "money.h"
#include <map>

#define MAX_COFFEE_PRICE 100500.0f

class CoffeeMachine
{
public:
	void put_coin(const Money& m);
private:

	const std::map<float, std::string> coffees =
	{
		{0.5, "Cafe Latte"},
		{1.0, "Cappuccino"},
		{3.0, "Espresso"},
		{MAX_COFFEE_PRICE, "Irish Coffee"}
	};
};