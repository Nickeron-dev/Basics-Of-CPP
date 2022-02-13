#include <cstdio>
#include <cstdlib> // it also has exit() and atexit() etc.
#include <vector>
#include <algorithm>

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
	std::vector<int> v = { 2, 3, 2, 5, 2, 5, 6, 3 };
	auto print = [](const int &n) { printf("%i ", n); };
	
	printf("Was: \n");
	std::for_each(v.begin(), v.end(), print); // from <algorithm>

	std::qsort(v.data(), v.size(), sizeof(int), compare); // from <cstdlib>(worse than sort() in algorithm)
	printf("Became: \n");
	std::for_each(v.begin(), v.end(), print); // from <algorithm> 
}

