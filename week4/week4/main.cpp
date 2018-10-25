
#include <iostream>
#include <fstream>
#include <string>

void backwards()
{
	std::ifstream file("D:/Desktop/HKU/c++/jabberwocky.txt");
	std::ofstream out("D:/Desktop/HKU/c++/new.txt");

	if (file.bad())
	{
		std::cout << "problem" << std::endl;
	}
	else
	{
		file.seekg(0, std::ios_base::end);//looking for the end of file
		int file_size = file.tellg();//determining filesize by end of file number

		for (int i = file_size; i > 0; --i)
		{
			file.seekg(i - 1, std::ios_base::beg);//reverses order
			char symbol;
			file.read(&symbol, 1);
			out << symbol;//puts it in output file
		}
	}
}

void combine()
{
	std::ifstream in[2] =
	{//get both texts
		std::ifstream{ "D:/Desktop/HKU/c++/text1.txt" },
		std::ifstream{ "D:/Desktop/HKU/c++/text2.txt" }
	};
	//define output txt name and path
	std::ofstream out("D:/Desktop/HKU/c++/combine.txt");
	//while either isnt at end yet
	while (!in[0].eof() || !in[1].eof())
	{
		if (!in[0].eof())
		{//get first sentences
			std::string sentence;
			std::getline(in[0], sentence);
			out << sentence << std::endl;
		}
		//swap between that
		std::swap(in[0], in[1]);
	}
}

	void main()
	{
		
		backwards();
		combine();

	}

	

