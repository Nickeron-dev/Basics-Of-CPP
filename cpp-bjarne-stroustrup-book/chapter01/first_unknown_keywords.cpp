#include <iostream>

int sum(int a, int b) {
	return a + b;
}

int main() {
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(5 + 50) << std::endl;
	std::cout << sizeof(int[20]) << std::endl;

	std:: cout << "==============\n";
	
	auto b = true;
	auto intVal = 20;
	auto doubleVal = 3.5; // since double is default(not float)
	auto sumOfValues = sum(3, 5); // will be automatically int
	float array[4] = {3.4, 12.3, 43.3, 5.5};
	for (auto element : array) { // will be double, since all elements in array are double
		std::cout << "Elements: " << element << " ";
	}
	std::cout << std::endl;
	return 0;
}

