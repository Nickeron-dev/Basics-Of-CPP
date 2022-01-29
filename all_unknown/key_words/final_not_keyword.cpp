#include <iostream>

class A
{
	virtual int foo() final
	{
		return 0;
	}
};

class B final : A
{
	int foo() override
	{
		return 5;
	}
};

struct C : B
{

};

int main()
{
	int final = 5;
	return 0;
}

