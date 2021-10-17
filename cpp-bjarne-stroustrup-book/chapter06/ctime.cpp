#include <iostream>
#include <ctime>

int main()
{
	time_t current_time = std::time(NULL);
	std::cout << current_time << std::endl;
	
	// OR
	time_t current_t;
	std::time(&current_t);
	std::cout << current_t << std::endl;	
	return 0;
}

