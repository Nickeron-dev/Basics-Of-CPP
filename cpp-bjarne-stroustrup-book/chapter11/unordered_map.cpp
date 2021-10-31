#include <iostream>
#include <unordered_map>

int main()
{
	std::unordered_map<int, char> umap = { {1, 'a'}, {2, 'b'} };
	std::cout << "Access: " << umap[1] << std::endl;
	std::cout << "Access: " << umap[2] << std::endl;
	std::cout << "=========\n";

	// Update
	umap[1] = 'c';

	// Iterate
	for (auto &e : umap)
	{
		std::cout << e.first << " " << e.second  << std::endl;
	}
	std::cout << "=========\n";
	
	// Find
	auto result = umap.find(2);
	if (result != umap.end())
	{
		std::cout << "Found: " << result -> first << " " << result -> second << std::endl;
	}
	else
	{
		std::cout << "Element was not found!\n";
	}
	return 0;
}

