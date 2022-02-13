#include <cstdio>
#include <cstdlib>
#include <vector>

int compare (const void *ch, const void *s)
{
	return *(char *)ch - * (char *)s;
}

int main()
{
	std::vector<int> v { 1, 2, 5, 6, 6, 7, 9, 10 };
	int find = 5;	
	int *found = (int *) std::bsearch(&find, v.data(), v.size(), sizeof(int), compare);
	printf("found: %i\n", *found);
	return 0;
}

