#include <iostream>
#include <typeinfo>

int main()
{
	int a, i;
	bool m;
	char d;
	float c;

	const std::type_info &first = typeid(a);
	const std::type_info &first_i = typeid(i);
	const std::type_info &second = typeid(m);
	const std::type_info &third = typeid(d);
	const std::type_info &fourth = typeid(c);

	if (first == first_i)
	{
		std::cout << "types of a and i are same.\n";
	}

	if (second != third)
	{
		std::cout << "Types of m and d are different\n";
	}
	
	std::cout << "Type of m is: " << second.name() << std::endl;

	std::cout << "Type of expression (a + c) is: " << typeid(a + c).name() << std::endl;
	const std::type_info &expr = typeid(d + m);
	std::cout << "Type of expression (d + m) is: " << expr.name() << std::endl;
	return 0;
}

