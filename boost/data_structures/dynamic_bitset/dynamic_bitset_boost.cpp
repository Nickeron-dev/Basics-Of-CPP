#include <iostream>
#include <boost/dynamic_bitset.hpp>

int main()
{
	boost::dynamic_bitset<> db {3, 4};
	
	db.push_back(true);
	
	std::cout << std::boolalpha;
	std::cout << "size: " << db.size() << '\n';
	std::cout << "count: " << db.count() << '\n';
	std::cout << "any: " << db.any() << '\n';
	std::cout << "none: " << db.none() << '\n';
	
	std::cout << "flip at index 2: " << db[2].flip() << '\n';
	std::cout << "~db[2]: " << ~db[2] << '\n';
	std::cout << db << '\n';
	
	return 0;
}

