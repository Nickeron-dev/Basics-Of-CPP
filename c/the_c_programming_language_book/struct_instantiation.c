#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct
{
	int a;
	char b;
} t_struct;

int main(int argc, char **argv)
{
	t_struct instance;
	instance.a = 8;
	instance.b = 'a';
	printf("a: %d\nb: %c\n", instance.a, instance.b);
	
	// pointer
	t_struct *ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory was not allocated\n");
		abort();
	}
	else
	{
		(*ptr).a = 8;
		(*ptr).b = 'a';
		printf("a: %d\nb: %c\n", ptr->a, ptr->b);
		free(ptr);
	}
	return 0;
}

