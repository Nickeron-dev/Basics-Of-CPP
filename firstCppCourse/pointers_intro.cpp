#include <iostream>

int main() {
	int n = 5;
	std::cout << &n << std::endl;

	int* pointer = &n; // &n will give memory ref
	std::cout << "Pointer with *: " << *pointer << std::endl; // *pointer will give value from memory
	std::cout << "Just pointer: " << pointer << std::endl;	// pointer will give just memory ref

	*pointer = 10; // since we give value to pointer(that refers to a memory container),
			// it changes the value there(so variable will be also changed
	std::cout << *pointer << std::endl; // will give value
	std::cout << n << std::endl; // also value

	int v;
	int* pointer2 = &v;
	*pointer2 = 7; // we change value of memory piece, consequently, 
			//all variables that refer to it, will have this value
	std::cout << "v = " << v << std::endl;
}
