#pragma once
#include "Persoon.h"
class Docent : public Persoon
{
	private:
		std::string subject;
		std::string name;
	public:
		Docent(std::string name,std::string subject);
};

