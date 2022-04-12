#include "triangle.h"

int type_of_triangle(int a, int b, int c)
{
	if (a < 0 || b < 0 || c < 0)
	{
		return -1;
	}
	
	if ( ! ((a + b) > c && (b + c) > a && (a + c) > b) )
	{
		return 0;
	}
	else if (a == b && b == c)
	{
		return 1;
	}
	else if (a == b || b == c || a == c)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

