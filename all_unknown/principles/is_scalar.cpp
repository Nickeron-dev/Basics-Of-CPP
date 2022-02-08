#include <iostream>

class a
{
	int h = 0;
};

enum class en
{
	var1, var2, var3
};

int main()
{
	std::cout << std::boolalpha;
	std::cout << "is_scalar a: " << std::is_scalar<a>::value << std::endl;
	std::cout << "is_scalar en: " << std::is_scalar<en>::value << std::endl;
	std::cout << "is_scalar int[10]: " << std::is_scalar<int[10]>::value << std::endl;
	std::cout << "is_scalar int&: " << std::is_scalar<int&>::value << std::endl;
	std::cout << "is_scalar char: " << std::is_scalar<char>::value << std::endl;

	return 0;
}

