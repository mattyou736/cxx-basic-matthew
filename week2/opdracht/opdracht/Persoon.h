#pragma once
#include <string>

class Persoon
{
private:
	int age;
	std::string name;
public:
	Persoon(int age, std::string name);

	const int getAge() const;
	const std::string getName() const;
};

