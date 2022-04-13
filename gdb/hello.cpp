#include <iostream>

void hello()
{
	std::cout << "hello\n";
}

int main(void)
{
	std::cout << "breakpoint 1\n";
	std::cout << "breakpoint 2\n";
	hello();
	std::cout << "breakpoint 3\n";
	return 0;
}

