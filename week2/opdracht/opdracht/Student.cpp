#include "Student.h"
#include <iostream>


Student::Student(int age, std::string name, int schoolYear):Persoon(age, name)
{
	this->age = age;
	this->name = name;
	this->schoolYear = schoolYear;
}

