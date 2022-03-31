#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	int a = 10, b = 20;
	int *ptr1 = &a, *ptr2 = &b;
	ptrdiff_t difference = ptr1 - ptr2;
	printf("diff: %I64d\n", difference);
	return 0;
}

