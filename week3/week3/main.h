#pragma once
#include "whichCoin.h"
#include <vector>

class main
{
public:
	main();

	void addOption(std::string coffeName, double cost);

	void buy(int number);
private:
	
	double currentAmount;
	
	std::vector<std::string> nameOfCoffe;
	std::vector<double> price;
};

