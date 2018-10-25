#include "main.h"
#include <iostream>
#include <string>

using namespace std;


main::main()
{
	currentAmount = 0;
}

void addOption(std::string coffeName, double cost) 
{
	nameOfCoffe.push_back(coffeName);
	price.push_back(cost);
}
