#include <iostream>

// goto shouldn't be used
int main()
{
	std::cout << "One\n";
	
	goto link;	

	std::cout << "Two\n";

	std::cout << "Three\n";
	
	link:
	std::cout << "Four\n";
}

