#include <iostream>
#include <stdlib.h>

int main() {
	// this is to get different pseudo random numbers
	// the problem with time(NULL) is if you call at one second of the
	// same day, you'll get same numbers
	std::srand(time(NULL));
	std::cout << std::rand() % 100 << " - from 0 to 99\n";
	std::cout << std::rand() % 100 + 1 << " - from 0 to 100\n";
	std::cout << std::rand() % 30 + 1985 << " - from 1985 to 2014\n";
	return 0;
}
