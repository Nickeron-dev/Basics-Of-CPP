#include <stdio.h>
#include <stdlib.h> // must be here, because built-in malloc is: 
				   //int malloc(), but in stdlib.h it is: void* malloc()

int main(int argc, char **argv)
{
	int *ptr;
	int number_of_el = 5;
	
	ptr = (int*) malloc(number_of_el * sizeof(int));
	
	if (ptr == NULL)
	{
		printf("Memory was not allocated\n");
	}
	else
	{
		printf("Successful memory allocation\n");
		for (int i = 0; i < number_of_el; i++)
		{
			*(ptr + i) = i;
			printf("el: %d\n", *(ptr + i));
		}
		free(ptr);
	}
	return 0;
}

