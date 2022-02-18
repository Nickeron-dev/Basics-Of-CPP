#include <boost/ref.hpp>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void print(std::ostream &os, int i)
{
	os << i << '\n';
}

int main()
{
	std::vector<int> v {1, 2, 3};
	std::for_each(v.begin(), v.end(),
		std::bind(print, boost::ref(std::cout), std::placeholders::_1));
	return 0;
}

