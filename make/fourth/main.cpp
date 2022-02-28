#include <iostream>
#include "functional.h"

int main()
{
	print_hello();
	std::cout << std::endl;
	std::cout << "The factorial of five is: " << factorial(5) << std::endl;
	return 0;
}

