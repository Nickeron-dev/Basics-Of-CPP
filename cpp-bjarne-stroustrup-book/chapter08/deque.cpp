#include <iostream>
#include <deque>

void print( const std::deque<int> deque )
{
	for ( int number : deque )
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::deque<int> example_1 = { 2, 3, 4 };
	example_1.push_front( 1 );
	example_1.push_back( 5 );
	print(example_1);

	std::deque<int> example_2 = { 2, 3, 4 };
	example_2.pop_front();
	example_2.pop_back();
	print(example_2);
}

