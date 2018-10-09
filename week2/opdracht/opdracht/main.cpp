#include <iostream>
#include "Docent.h"
#include "Student.h"

int main() {
	Student* s = new Student(21, "matthew", 2) :Persoon(24, "matthew");
	std::cout << s << std::endl;

	Docent* d = new Docent("Edwin", "cxx") :Persoon("edwin");
	std::cout << d << std::endl;

	return 0;
}