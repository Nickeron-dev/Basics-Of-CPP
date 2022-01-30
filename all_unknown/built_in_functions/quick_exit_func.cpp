#include <stdlib.h>
#include <iostream>

void foo()
{
	std::cout << "foo\n";
}

void moo()
{
	std::cout << "moo\n";
}

int main()
{
	std::at_quick_exit(foo);
	at_quick_exit(moo);

	quick_exit(EXIT_SUCCESS);
	return 0;
}

