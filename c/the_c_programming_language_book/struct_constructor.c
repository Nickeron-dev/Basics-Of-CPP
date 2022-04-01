#include <stdio.h>
#include <stdlib.h>

struct my_struct
{
	int a;
};

// OR
/* // in this case you don't need to write 'struct' always
 * typedef struct local_name_of_struct // name is related to struct
 * {
 *  	int a;
 * } name_of_struct_in_global_space; // name is related to typedef
 * */

// kind of "default constructor"
struct my_struct* init()
{
	struct my_struct *ptr = malloc(sizeof *ptr);
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory was not allocated\n");
		abort();
	}
	else
	{
		(*ptr).a = 10;
	}
	return ptr;
}

void free_name(struct my_struct *ptr)
{
	free(ptr);
}

int main(void)
{
	struct my_struct *ptr = init();
	printf("a: %d\n", (*ptr).a);
	free_name(ptr);
	return 0;
}

