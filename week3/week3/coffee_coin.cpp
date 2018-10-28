#include "coffee_coin.h"
#include "coffee_machine.h" //for the MAX_COFFEE_PRICE

CoffeeCoin::CoffeeCoin() : Money(MAX_COFFEE_PRICE) {}

std::string CoffeeCoin::get_name() const
{
	return "Coffee coin";
}