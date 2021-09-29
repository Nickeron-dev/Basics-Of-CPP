#include <iostream>

class Base 
{
public: Base() {
		std::cout << "Base constructor" << std::endl;
	}
	
	// try to remove virtual!!!
	// virtual says to a class that there might be a subclass that also has a destuctor
	virtual ~Base() {
		std::cout << "Base destructor" << std::endl;
	}
};

class Derived : public Base
{
public:
	Derived() {
		std::cout << "Derived constructor." << std::endl;
	}
	
	~Derived() {
		std::cout << "Derived destructor.\n";
	}
};

int main() 
{
	std::cout << "Simple usage: \n";
	Base* base = new Base(); // creating on Heap because of *
	delete base;
	std::cout << "-----------\n";
	
	Derived* derived = new Derived();
	delete derived;
	
	std::cout << "-----------\n";
	// in following case, it doesn't call the Derived destructor(it might have memory leak)
	// So we need to write BASE!!! destructor as 'virtual'
	Base* derived_base = new Derived(); // polymorphism
	delete derived_base;	
	return 0;
}
