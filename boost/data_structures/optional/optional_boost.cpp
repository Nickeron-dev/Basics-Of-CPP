#include <boost/optional.hpp>
#include <iostream>
#include <ctime>

using boost::optional;

optional<int> get_even_number()
{
	int i = std::rand();
	return (i % 2 == 0) ? i : optional<int> {};
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	optional<int> i = get_even_number();
	double e = boost::get_optional_value_or(i, 1); 
	// we cannot put 1.0, because we can get only value of optional type(int in our case)
	if (i)
	{
		std::cout << "This is even number: " << i.get() << std::endl;
		std::cout << "the second way to get number: " << *i << std::endl;
	}
	else
	{
		std::cout << "No even number, got: " << e << "\n";
	}
	return 0;
}
