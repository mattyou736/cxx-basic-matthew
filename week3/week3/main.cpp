#include <iostream>
#include "coffee_machine.h"
#include "money.h"
#include "euro0_50.h"
#include "euro1.h"
#include "coffee_coin.h"


int main()
{
	CoffeeMachine m;

	m.put_coin(Euro0_50());
	std::cout << std::endl;

	m.put_coin(Euro1());
	std::cout << std::endl;

	m.put_coin(CoffeeCoin());
	std::cout << std::endl;

	system("PAUSE");

}