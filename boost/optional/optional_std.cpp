#include <optional>
#include <iostream>
#include <ctime>

std::optional<int> get_even_number()
{
	int value = std::rand();
	return (value % 2 == 0) ? value : std::optional<int> {};
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	std::optional<int> i = get_even_number();
	//double e = std::get_optional_value_or(i, 1); // there is not get_optional_value_or() function in std
	// we cannot put 1.0, because we can get only value of optional type(int in our case)
	if (i)
	{
		//std::cout << "This is even number: " << i.get() << std::endl; // there is no get() method in std
		std::cout << "the second way to get number: " << *i << std::endl;
	}
	else
	{
		std::cout << "No even number\n";
	}
	return 0;
}
