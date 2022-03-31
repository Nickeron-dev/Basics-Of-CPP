#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int number_of_el = 5;
	
	int *ptr = /*(*int) don't cast, it is done implicitly!!!*/ calloc(number_of_el, sizeof *ptr ); // *ptr -> int
	if (ptr == NULL)
	{
		printf("Memory was not allocated\n");
	}
	else
	{
		printf("Memory was successfully allocated\n");
		for ( ; number_of_el >= 0; number_of_el--)
		{
			printf("was: %d\n", *(ptr + number_of_el));
			*(ptr + number_of_el) = number_of_el * 2;
			printf("became: %d\n", *(ptr + number_of_el));
		}
	}
	
	number_of_el = 20;
	ptr = realloc(ptr, number_of_el * sizeof *ptr );
	if (ptr == NULL)
	{
		printf("Memory was not reallocated\n");
	}
	else
	{
		printf("Memory was successfully reallocated\n");
		for (int i = 0; i < number_of_el; i++)
		{
			*(ptr + number_of_el) = i * 3;
			printf("val: %d\n", *(ptr + number_of_el));
		}
		free(ptr);
		
	}
	return 0;
}

