#include <iostream>

struct Base
{
	virtual void get_name()
	{
		std::cout << "Base!\n";
	}
};

struct Derived : Base
{
	void get_name() override // making as override is not necessary
	{
		std::cout << "Derived!\n";
	}
};


int main()
{
	Base b;
	b.get_name();

	Derived d;
	d.get_name();
	
	// run-time polymorphism
	Base* p = new Derived();
	p->get_name();
	return 0;
}

