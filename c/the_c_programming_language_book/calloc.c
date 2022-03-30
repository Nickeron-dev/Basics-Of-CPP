#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double *ptr;
	int number_of_el = 5;
	ptr = (double*) calloc(number_of_el, sizeof(double));
	if (ptr == NULL)
	{
		printf("Memory was not allocated\n");
	}
	else
	{
		printf("Memory was successfully allocated\n");
		for ( ; number_of_el >= 0; number_of_el--)
		{
			printf("was: %f\n", *(ptr + number_of_el));
			*(ptr + number_of_el) = number_of_el * 2;
			printf("became: %f\n", *(ptr + number_of_el));
			free(ptr);
		}
	}
	return 0;
}

