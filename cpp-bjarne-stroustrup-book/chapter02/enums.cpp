#include <iostream>

enum Days_of_week : int
{
	MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY 
	// after all enum objects, you don't need to put ;
}; // here ; is required

int main()
{
	Days_of_week monday = MONDAY;
	std::cout << "Monday: " << monday << std::endl;
	std::cout << "Wednesday: " << Days_of_week::WEDNESDAY << std::endl;
	return 0;
}

