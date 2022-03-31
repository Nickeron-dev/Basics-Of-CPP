#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	srand(time(NULL));
	auto int upper = 10, lower = -10;
	auto int random = rand() % (upper - lower + 1) + lower;
	printf("random: %d\n", random);
	return 0;
}

