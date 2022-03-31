#include <stdio.h>

int func(int val)
{
	return val + 1;
}

int func_one(int val)
{
	return val + 2;
}

int main(int argc, char **argv)
{
	int (*name_of_pointer)(int) = &func;
	printf("result: %d\n", (*name_of_pointer)(10));
	
	int (*name_of_array_of_pointer[])(int) = { &func, &func_one };
	printf("result 1: %d\n", (*name_of_array_of_pointer[0])(10));
	printf("result 2: %d\n", (*name_of_array_of_pointer[1])(10));
	return 0;
}

