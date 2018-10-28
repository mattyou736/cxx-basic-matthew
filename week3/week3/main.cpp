#include <iostream>
#include <string>
#include <map>

class Money
{
public:
	Money(float n) : n(n) {};
	float value() const { return n; }
	virtual std::string get_name() const = 0;
private:
	float n;
};

#define MAX_COFFEE_PRICE 100500.0f

class CoffeeMachine
{
public:
	void put_coin(const Money& m)
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
private:

	const std::map<float, std::string> coffees =
	{
		{ 0.5, "Cafe Latte" },
	{ 1.0, "Cappuccino" },
	{ 3.0, "Espresso" },
	{ MAX_COFFEE_PRICE, "Irish Coffee" }
	};
};


class Euro0_50 : public Money
{
public:
	Euro0_50() : Money(0.5f) {}

	std::string get_name() const override
	{
		return "0.50 euro";
	}
};

class Euro1 : public Money
{
public:
	Euro1() : Money(1.0f) {}

	std::string get_name() const override
	{
		return "1 euro";
	}
};

class CoffeeCoin : public Money
{
public:
	CoffeeCoin() : Money(MAX_COFFEE_PRICE) {}

	std::string get_name() const override
	{
		return "Coffee coin";
	}
};


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