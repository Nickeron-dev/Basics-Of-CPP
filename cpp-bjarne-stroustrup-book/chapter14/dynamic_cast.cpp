#include <iostream>

class Base
{
	virtual void print()
	{
		std::cout << "Base\n";
	}
};

class Derived1 : public Base
{
	void print()
	{
		std::cout << "Derived1\n";
	}
};

class Derived2 : public Base
{
        void print()
        {
                std::cout << "Derived2\n";
        }
};

int main()
{
	Derived1 d1;
	Base *b = dynamic_cast<Base*>(&d1); // works

	//Derived1 *d2_1 = dynamic_cast<Derived2*>(b); // You cannot cast Derived1 to Derived2
	Derived1 *d2 = dynamic_cast<Derived1*>(b); // Works

	if (d2 == nullptr)
	{
		std::cout << "NULL\n";
	}
	else
	{
		std::cout << "Not null\n";
	}

	return 0;
}

