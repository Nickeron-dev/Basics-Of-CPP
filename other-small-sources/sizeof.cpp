#include <iostream>

int main() {
	char buf[] = {1};
	std::cout << sizeof(buf) << std::endl;
	std::cout << (*buf).size() << std::endl;
	
}

