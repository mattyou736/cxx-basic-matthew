
#include <iostream>
#include <fstream>
#include <string>

#define FILE "D:/Desktop/HKU/c++/jabberwocky.txt"
#define OUTFILE "D:/Desktop/HKU/c++/new.txt"

int main()
{
	char ch;
	std::ifstream in_stream;
	in_stream.open(FILE);


	if (!in_stream) {
		std::cout << "problem" << std::endl;
		exit(1);
	}
	
	std::ofstream out_stream;
	out_stream.open(OUTFILE);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}


	in_stream.get(ch);
	std::string data;

	in_stream >> std::noskipws;

	//eof = end of file
	while (!in_stream.eof())
	{
		
		//put() same as
		in_stream >> ch;
		//get() same as
		//std::cout << ch ;

		

		getline(in_stream, data);
		
		std::cout << data << std::endl;	
		out_stream << data << std::endl;
		
	}

	in_stream.close();
	system("pause");
	return 0;
}

