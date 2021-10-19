#include <iostream>
#include <list>
//#include <stdlib.h>

int main()
{
	std::list<int> list = { 1, 2, 3, 4, 5 };
	list.push_back(6); // insert O(1)
	for ( auto i = list.begin(); i != list.end(); i++ )
	{
		std::cout << *i << " ";
		//printf(i);
		//printf(" ");
	}
	
	list.pop_back(); // delete O(1)
	std::cout << std::endl;
	for ( auto  i = list.begin(); i != list.end(); i++ )
        {
		std::cout << *i << " ";
                //printf(i);
		//printf(" ");
        }
	std::cout << std::endl;
	return 0;
}

