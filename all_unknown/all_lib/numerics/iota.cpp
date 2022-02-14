#include <cstdio>
#include <numeric>

int main()
{
	int starting_value = 10;
	int size = 15;
	int arr[size];

	std::iota(arr, arr + size, starting_value);

	for (int i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}

	printf("\n");
	
}
