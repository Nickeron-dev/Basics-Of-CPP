#include <iostream>
#include <map> // there is no <multimap>

int main()
{
	std::multimap<char, int> multimap;
	multimap.insert(std::pair<char, int>('a', 1));
	multimap.insert(std::make_pair('a', 2));
	multimap.insert(std::make_pair('a', 3));
	multimap.insert(std::make_pair('b', 4));
	multimap.insert(std::make_pair('b', 5));
	// The difference between using std::pair and std::make_pair
	// is that you don't need to assign types(char, int), in this case
	// every time
	
	for (auto &elem : multimap)
	{
		std::cout << elem.first << " " << elem.second << std::endl;
	}

	std::cout << "============\n";

	// auto is preferable)))
	std::pair<std::multimap<char, int>::iterator, 
		std::multimap<char, int>::iterator> 
		range = multimap.equal_range('a');
	for (auto start = range.first; start != range.second; start++)
	{
		std::cout << start -> first << " " << start -> second << std::endl;
	}
	
	return 0;
}

