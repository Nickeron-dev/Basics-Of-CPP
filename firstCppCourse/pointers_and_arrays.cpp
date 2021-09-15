#include <iostream>

int main() {
	int numbers[5];  // allocates 5 int containers

	for (int i = 0; i < 4; i++) {
                std::cout << "Number: ";
                std::cin >> numbers[i];
        }

	std::cout << numbers << std::endl;
	std::cout << &numbers[0] << std::endl;
	std::cout << numbers[2] << std::endl; // shows 3rd element of an array(with index 2)
	std::cout << *(numbers + 2) << std::endl; // the same as previous line
	// you can't get lenght from static array
	for (int i = 0; i < 5; i++) {
		std::cout << *(numbers + i) << " ";	
	}
	std::cout << std::endl;
	return 0;
}

