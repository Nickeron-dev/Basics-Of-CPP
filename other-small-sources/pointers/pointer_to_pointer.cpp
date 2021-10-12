#include <iostream>

int main()
{
	int x = 5;
	int *p = &x; // memory address to x
	*p = 6; // x will be 6, too
	int **q = &p; // pointer q to pointer p which is a pointer to x
	int ***r = &q; // ptr r to ptr q to ptr p which is a ptr to x
	std::cout << "*p: " << *p << std::endl;
	std::cout << "*q: " << *q << std::endl;
	std::cout << "**q: " << **q << std::endl;
	std::cout << "**r: " << **r << std::endl;
	std::cout << "***r: " << ***r << std::endl;
	//std::cout << "****r: " << ****r << std::endl; // error
	***r = 10;
	std::cout << "x: " << x << std::endl;
	**q = *p + 2;
	std::cout << "x: " << x << std::endl;
	
	
}

