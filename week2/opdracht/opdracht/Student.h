#pragma once
#include "Persoon.h"

class Student : public Persoon
{
private:
	int age;
	int schoolYear;
	std::string name;

public:
	Student(int age, std::string name, int schoolYear);

};

