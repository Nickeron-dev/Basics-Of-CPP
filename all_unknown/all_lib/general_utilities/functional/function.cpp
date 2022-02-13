#include <cstdio>
#include <functional>

void print(const int &n)
{
	printf("N: %i\n", n); 
}

int main()
{
	std::function<void(int)> func = print;
	func(5);
	return 0;
}

