#include <iostream>
#include "Docent.h"
#include "Student.h"

int main() {
	Student s = Student(21, "matthew", 2) :Persoon(24, "matthew");
	std::cout << s << std::endl;

	Docent d = Docent("Edwin", "cxx") :Persoon("edwin");
	std::cout << d << std::endl;

	return 0;
}