#include <iostream>

void third_party_lib(int *x)
{
	int k = 10;
	std::cout << k + *(x) << std::endl;
}

int main()
{
	// Example 1
	const int a = 5;
	const int *b = &a;
	int *d = const_cast<int*>(b);
	*d = 15; // Invalid, UB(Undefined Behaviour)
	std::cout << "A: " << a << std::endl;
	std::cout << "D: " << *d << std::endl;
	// There is only 1 reference(from var. 'a' used)
	// But! How *a = 5 and *d = 15???
	// The compiler optimizes everything so 
	// instead of *a it puts a's value(5)
	// and *d works normally

	std::cout << "===============\n";

	int a2 = 2;
	const int *b2 = &a2;
	int *d2 = const_cast<int*>(b2);
	*d2 = 30; // Valid

	std::cout << "A2: " << a2 << std::endl;
	std::cout << "D2: " << *d2 << std::endl;
	
	// Example 2
	std::cout << "===============\n";
	const int x = 20;
	const int *px = &x;
	third_party_lib(const_cast<int*>(px));

	return 0;
}

