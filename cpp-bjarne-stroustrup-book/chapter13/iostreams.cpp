#include <iostream>
#include <fstream> // for ifstream and ofstream
#include <vector>
#include <string>

int main()
{
	// ISTREAM
	char *input = new char[50];
	std::cin >> input;

	// OSTREAM
	std::cout << input << std::endl;
	
	// IFSTREAM
	std::ofstream file;
	file.open("hello.txt", std::ios::app);
	// std::ios::app means append to a file, so it won't
	// be recreated each time
	// OR std::ofstream file ("hello.txt");

	file << "HEY!!!";
	
	std::vector<std::string> names;
	names.push_back("Illia");
	names.push_back("Ivan");
	names.push_back("John");
	
	for (std::string name : names)
	{
		file << name << std::endl;
	}
	
	// OFSTREAM
	std::ofstream o_file ("hello.txt", std::ios::app);

	if (o_file.is_open())
	{
		std::cout << "success!!!\n";
	}
	else
	{
		std::cout << "Failed to open file.\n";
	}


	o_file.close();
	file.close(); // Don't forget to close!!!
	// otherwise, this file will be kept opened until the computer
	// will be restarted.
	delete[] input; // deletion with [] is very important
	return 0;
}

