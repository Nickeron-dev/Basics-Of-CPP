#include <boost/compressed_pair.hpp>
#include <iostream>

struct empty {};

int main()
{
	std::pair<int, empty> p;
	std::cout << "std::pair size: " << sizeof(p) << '\n';
	
	boost::compressed_pair<int, empty> c_p;
	std::cout << "boost::compressed_pair size: " << sizeof(c_p) << '\n';
	return 0;
}

