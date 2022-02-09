#include <cstdio>

int main()
{
	char buffer[100];
	
	FILE * ptr_file = fopen("file.txt", "r");
	if (ptr_file == NULL)
	{
		perror("Error opening file\n");
		return 0;
	}
	while ( ! feof(ptr_file) )
	{
		if (fgets(buffer, 100, ptr_file) != NULL)
		{
			fputs(buffer, stdout);
		}
	}
	fclose(ptr_file);
	return 0;
}

