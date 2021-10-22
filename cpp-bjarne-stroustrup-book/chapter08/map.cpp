#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
	std::map<std::string, int> simple_map;
	simple_map["Illia"] = 5;
	simple_map["Ivan"] = 10;
	simple_map["George"] = 20;
	
	for ( auto element : simple_map )
	{
		std::cout << element.first << " " << element.second << std::endl;
	}

	std::cout << "[] access: " << simple_map["Illia"] << std::endl;
	// despite not working, it will compile and run(but return 0)
	std::cout << "[] access: " << simple_map["Illfa"] << std::endl;
	
	std::map<std::string, std::vector<int>, std::less<>> map;
	map["Illia"].push_back(32);
	map["Ivan"].push_back(324);
	map["Ivan"].push_back(4232);
	for ( auto element : map )
	{
		std::cout << "first: " << element.first << std::endl;
		for ( auto j : element.second )
		{
			std::cout << "second: " << j << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

