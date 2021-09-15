#include <iostream>

void return_two_values(int* increment_first, int* decrement_second) {
	*increment_first = *increment_first + 1;
	*decrement_second = *decrement_second - 1;
	return;
}

int main() {
	int one = 1, two = 2;
	return_two_values(&one, &two);
	std::cout << "One: " << one << " Two: " << two << std::endl;
	return 0;
}

