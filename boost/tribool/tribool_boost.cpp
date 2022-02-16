#include <iostream>
#include <boost/logic/tribool.hpp>
#include <boost/logic/tribool_io.hpp>

BOOST_TRIBOOL_THIRD_STATE(dontknow)

int main()
{
	
	std::cout.setf(std::ios::boolalpha);
	
	boost::logic::tribool b1 = true;
	std::cout << (b1 || boost::logic::indeterminate) << '\n';
	std::cout << (b1 && boost::logic::indeterminate) << '\n';

	boost::logic::tribool b2 = false;
	std::cout << (b2 || boost::logic::indeterminate) << '\n';
	std::cout << (b2 && boost::logic::indeterminate) << '\n';

	boost::logic::tribool b3 = dontknow;  // redefined macro 'indeterminate' to 'dontknow'
	std::cout << (b3 || b3) << '\n';
	std::cout << (b3 && b3) << '\n';
	
	
	return 0;
}

