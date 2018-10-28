#pragma once
#include <string>

class Money
{
public:
	Money(float n);
	float value() const;
	virtual std::string get_name() const = 0;
private:
	float n;
};

