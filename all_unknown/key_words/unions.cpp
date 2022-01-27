#include <iostream>

union un
{
	float a, b, c;
};

int main()
{
	un union_instance;
	union_instance.a = 10;
	std::cout << "a: " << union_instance.a << " b: " << union_instance.b 
		<< " c: " << union_instance.c << '\n';

	union_instance.c = 30;
	std::cout << "a: " << union_instance.a << " b: " << union_instance.b
                << " c: " << union_instance.c << '\n';
}

