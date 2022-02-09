#include <stdlib.h>
#include <cstdio>
#include <string.h>

int main()
{
	char *p;
	p = (char *) malloc(17);
	if ( ! p)
	{
		printf("Allocation error!");
		return 0;
	}

	strcpy(p, "This is 16 chars");
	p = (char *) realloc (p, 18);
	if ( ! p )
	{
		printf("Allocation error.");
		return 0;
	}

	strcat(p, ".");
	printf(p);
	free(p);
	return 0;
}

