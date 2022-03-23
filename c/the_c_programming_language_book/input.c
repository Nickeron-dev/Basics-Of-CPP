#include <stdio.h>

int main(int argc, char **argv)
{
	long val = 0;
	while (getchar() != EOF)
	{
		val++;
	}
	printf("%ld\n", val);
	return 0;
}

