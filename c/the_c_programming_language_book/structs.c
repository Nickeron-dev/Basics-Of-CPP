#include <stdio.h>

struct point
{
	int m_x, m_y;
} instance;

void f( struct point argument ); // here 'struct' is required

typedef struct point point; // but after this line

void f( point argument ); // not required 

struct key
{
	char *word;
	int count;
} keys[] = {{"auto", 1}, {"break", 1}, {"hello world", 2}};

int main()
{
	instance.m_x = 5;
	instance.m_y = 10;
	printf("x: %d\ny: %d\n", instance.m_x, instance.m_y);
	return 0;
}

