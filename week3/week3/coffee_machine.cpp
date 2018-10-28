#include "coffee_machine.h"
#include <iostream>

void CoffeeMachine::put_coin(const Money& m)
{
	std::cout << "you putted " << m.get_name() << std::endl;
	std::cout << "you can buy: " << std::endl;
	for (const auto& i : coffees)
	{
		if (i.first <= m.value())
		{
			std::cout << i.second << " " << i.first << std::endl;
		}
	}
}
