#include <stdio.h>
// how to print smth without semicolon(;)?  Or call a function without ';'?
/*
int main(void)
{
	if (printf("hello\n")) {}
}
*/

// Also possible:
/*
int main(void)
{
	while ( ! printf("%d\n", printf("hello\n"))) {} // '!' is required
		// Because while will stop only in case of 0.
	//while (printf("hello\n")) {} // printf() returns the amount of 
		//elements printed, since it is not 0, the loop will continue;
}
*/


// How to optimize this: int arr[7] = {0, 0, 2, 0, 5, 0, 0}?
/*
int main(void)
{
	int arr[7] = { [2] = 2, [4] = 5 };
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
*/

// The same is appliable to structs:
/*
struct s
{
	int a;
	int b;
};
int main(void)
{
	struct s obj = { .b = 10, .a = 20 }; // in c++ this must be ordered(.a = 20, .b = 10) only
	printf("a: %d\n", obj.a);
	printf("b: %d\n", obj.b);
}
*/


// Big Endian or Little Endian
/*
int main(void)
{
	int i = 1;
	char *ch = (char*)&i;
	if (*ch)
	{
		printf("Big Endian\n");
	}
	else
	{
		printf("Little Endian\n");
	}
	return 0;
}
*/

// How to return a 2d array?
const int n = 3;
void print_array(int **arr)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d \n", arr[i][j]);
		}
	}
}

int** generate_arr()
{
	int **arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
		}
	}
	return arr;
}

int main(void)
{
	int **arr;
	arr = generate_arr();
	print_array(arr);
	return 0;
}

