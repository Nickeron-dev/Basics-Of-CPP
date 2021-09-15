#include <iostream>

int main() {
	int size;
	std::cout << "Size: \n";
	std::cin >> size;
	//int array[size]; // impossible because it must be create at compile time(not runtime)
	
	int* myArray = new int[size]; // possible + it is dynamic
	

	for (int i = 0; i < size; i++) {
		std::cout << "Array[" << i << "] ";
		std::cin >> myArray[i];
	}

	for (int i = 0; i < size; i++) {
		// std::cout << myArray[i] << " "; // just second way of output
		std::cout << *(myArray + i) << " ";
	}
	std::cout << std::endl;

	delete [] myArray; // not to have memory leak
	myArray = NULL; // this is just good practice

}
