#include <cstdio>
#include <algorithm>
#include <vector>

int main()
{
	std::vector v = { 1, 3, 5, 2, 65, 0 };
	auto print = [](const int &n) { printf("%i ", n); }; // Unary func

	std::for_each(v.begin(), v.end(), print);
	return 0;
}

