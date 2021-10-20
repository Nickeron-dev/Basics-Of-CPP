#include <iostream>
#include <array>

int main()
{
	std::array<int, 10> array = { 1, 2, 3, 4, 5 }; // array with size 10
	std::cout << array.size() << std::endl;

	std::cout << "Simple access: " << array[2] << std::endl;
	std::cout << "Checked-on-out-of-bounds access: " << array.at(2) 
		<< std::endl;
	
	for ( int i = 0; i < array.size(); i++ )
	{
		std::cout << array[i] << std::endl; // normal access
		// is more efficient(because it is without check)
	}

	return 0;
}

