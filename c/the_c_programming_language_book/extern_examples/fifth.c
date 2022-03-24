#include <stdio.h>
#include "header_with_val.h"

extern int val;

int main(int argc, char **argv)
{
	val = 20;
	return 0;
}

