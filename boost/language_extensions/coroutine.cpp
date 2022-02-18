#include <boost/coroutine/all.hpp>
#include <iostream>

// not available on arm64

void cooperative(boost::coroutines::coroutine<void>::push_type &sink)
{
	std::cout << "Hello";
	sink();
	std::cout << "world!";
}

int main()
{
	boost::coroutines::coroutine<void>::pull_type source {cooperative};
	std::cout << ", ";
	source();
	std::cout << "!\n";
	return 0;
}

