#include <iostream>

void print_number(int* number_pointer) {
	std::cout << *number_pointer << std::endl; 
}

void print_char(char* char_pointer) {
	std::cout << *char_pointer << std::endl;
}

// similar to generics
void print(void* void_pointer, char type) {
	switch (type) {
		case 'i': 
			std::cout << *((int*)void_pointer) << std::endl;
			break; // casting to int pointer(by int*) and by *(...pointer) getting
				// a value of a pointer(from memory)
		case 'c':
			std::cout << *((char*)void_pointer) << std::endl;
			break; // casting to char pointer(by char*) and by *(...pointer) getting
				// a value of a pointer(from memory ref)
	}
}

int main() {
	int number = 5;
	char letter = 'a';

	print_number(&number); // we give memory ref
	print_char(&letter); // we give memory ref(because of &)
 	
	// so the idea of void pointer is that you can give any memory ref of 
	// any type but you'll need to cast to it(and in case of logical mistake: 
	// casting to char(in case of int pointer), for instance, it will be hard to find this problem
	print(&number, 'i');
	print(&letter, 'c');

	return 0;
}
