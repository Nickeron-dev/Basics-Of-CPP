#include <iostream>

struct a
{
	int m = 0;
};

struct b
{
	virtual void foo() = 0;
};

struct c : public b
{
};

int main()
{
	std::cout << std::boolalpha;
	std::cout << "is_polymorphic a: " << std::is_polymorphic<a>::value << '\n';
	std::cout << "is_polymorphic b: " << std::is_polymorphic<b>::value << '\n';
	std::cout << "is_polymorphic c: " << std::is_polymorphic<c>::value << '\n';
	return 0;
}

