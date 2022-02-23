#include <iostream>
#include <boost/stacktrace.hpp>

int main()
{
	std::cout << boost::stacktrace::stacktrace();
	return 0;
}

