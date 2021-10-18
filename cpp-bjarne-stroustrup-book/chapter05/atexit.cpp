#include <iostream>
#include <stdlib.h>

void first()
{
	printf("First\n");
}

void second()
{
	printf("Second\n");
}

int main()
{
	atexit(first);
	atexit(second);
	printf("Hello!\n");
}

