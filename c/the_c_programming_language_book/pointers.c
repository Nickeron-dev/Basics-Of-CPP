#include <stdio.h>

int main(int argc, char **argv)
{
	struct s
	{
		int i, j, k;
	} s1;
	s1.i = 10;
	s1.j = 20;
	s1.k = 30;
	printf("%d\n", *(&(s1.i) + 1));
	printf("%d\n", *(&(s1.i) + 2));
	return 0;
}

