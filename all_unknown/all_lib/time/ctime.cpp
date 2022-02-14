#include <iostream>
#include <ctime>

int main()
{
	std::clock_t start;
	start = std::clock();
	for (int i = 0; i < 10000000; i++)
	{
		int m = i;
	}
	std::clock_t end = std::clock() - start;
	std::cout << "It took: " << (float) end / CLOCKS_PER_SEC << " seconds.\n";
	
	return 0;
}

