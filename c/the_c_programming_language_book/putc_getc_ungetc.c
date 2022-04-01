#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *file = fopen("text.txt", "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error opening file\n");
		return EXIT_FAILURE;
	}
	char c = getc(file);
	while (c != EOF)
	{
		c = getc(file);
		putc(c, stdout);
		
	}
	return 0;
}

