#include <cstdio>

int x = 50;
int main()
{
	int x = 10;
	// C
	{
		printf("C\nWithout extern, x: %i\n", x);
		extern int x;
		printf("Using extern, x: %i\n", x);
	}

	// C++
	printf("C++\nWithout ::, x: %i\n", x);
	printf("Using ::, x: %i\n", ::x);
}

