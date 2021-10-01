#include <iostream>

int main()
{
	try {
		throw 'a';
	} catch (int number) {
		std::cout << "Caught: " << number << std::endl;
	}  catch(...) {
		std::cout << "Default.\n";
	}

	try {
		throw 1;
	} catch (char symbol) {
		std::cout << "Caught: " << symbol << std::endl;
	}
	return 0;
}
