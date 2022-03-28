#include <stdio.h>

int main(int argc, char **argv)
{
	register int a = 10;
	//register int *i = &a; // impossible to take address from register variable
	int a1 = 11;
	register int *i = &a1;
	register char *str = "hello";
	printf("a: %d\n", a);
	printf("*i: %d\n", *i);
	printf("str: %s\n", str);
	return 0;
}

