#include <cstdio>

[[noreturn]] void func()
{
	printf("hello!!!\n");
}

int main()
{
	func();
	// unreachable
	printf("HEELLO!!!\n");
	return 0;
}

