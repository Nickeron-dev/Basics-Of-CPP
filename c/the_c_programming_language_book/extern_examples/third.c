#include <stdio.h>

extern int val;
// won't compile
int main(int argc, char **argv)
{
	val = 20;
	return 0;
}

