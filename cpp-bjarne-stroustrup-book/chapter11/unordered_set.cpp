#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> uset = {1, 3, 5, 1, 2, 4, 3};

	auto search = uset.find(2);
	if (search != uset.end())
	{
		std::cout << "Found: " << (*search) << std::endl;
	}
	else
	{
		std::cout << "Not found!" << std::endl;
	}

	for (auto &e : uset)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
	return 0;
}

