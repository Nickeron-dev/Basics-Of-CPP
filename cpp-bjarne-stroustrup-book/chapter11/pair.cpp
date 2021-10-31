#include <iostream>
#include <vector>
//#include <pair> // there is no <pair>, it is defined by default
#include <utility>

void print(std::pair<int, int> &pair)
{
	std::cout << pair.first << " " << pair.second << std::endl;
}

int main()
{
	{ // this is initializer
		std::pair<int, int> obj(10, 20);
		print(obj);
	}

	{ // initializer
		std::pair<int, int> obj = std::make_pair(10, 20);
		// make_pair is preferable
		print(obj);
	}
	return 0;
}

