#include <cstdio>
#include <algorithm>

int main()
{
	int arr[] = {1, 2, 3, 3, 4, 7, 9};
	int index_3 = *std::upper_bound(arr, arr + 6, 3);
	int index_3_lower = *std::lower_bound(arr, arr + 6, 3);
	printf("Upper: %i\n", index_3);
	printf("Lower: %i\n", index_3_lower);
	
	std::pair<int*, int*> range = std::equal_range(arr, arr + 6, 3);
	printf("Lower: %i upper: %i\n", *range.first, *range.second);

	return 0;
}

