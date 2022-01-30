#include <iostream>

struct entity
{
	int x, y;
};

int main()
{
	int a = 50;
	double b = *(double*) &a; // we take mem addr of a and move it to double *, and we take pointer of this pointer
	
	std::cout << b << std::endl;

	entity e = { 5, 8 };
	
	int *position = (int*) &e;
	int y = *(int*)((char*) &e + 4);

	std::cout << *position << std::endl;
	std::cout << y << std::endl;
	return 0;
}

