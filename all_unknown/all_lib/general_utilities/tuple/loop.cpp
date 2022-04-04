#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vecs;
	for (int i = 0; i < vecs.size(); i++)
	{
		vecs.push_back(i);
	}
	for (int i = 0; i < vecs.size(); i++)
	{
		std::cout << "val: " << vecs[i] << '\n';
	}
	bool a = true, b = false;
	if (a | b)
	{
		std::cout << "hey\n";
		if (true)
		{
			if (false)
                	{

                	}
		}
		if (true)
                {
			if (true)
                	{

                	}
                }
		if (true)
                {

                }
	}
	return 0;
}

