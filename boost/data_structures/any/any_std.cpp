#include <iostream>
#include <any> // added in c++17
#include <utility> // any_cast
#include <ostream>

class my_type
{
	int m_a, m_b;
public:
	my_type(int a, int b) : m_a(a), m_b(b) {}; 
	
	// try to remove const!!!
	// It will not be able to access private elements
	friend std::ostream& operator<<(std::ostream& out, const my_type& data);
	// it should be friend in order to be able to access private elements
	
	~my_type()
	{
		std::cout << "Destroying my_type\n";
	}
	
};

std::ostream& operator<< (std::ostream &out, my_type const& data)
{
	out << "This is my object\n" << std::endl;
	out << "a: " << data.m_a << std::endl;
	out << "b: " << data.m_b << std::endl;
	out << "End of printing my object" << std::endl;
	return out;
}

int main()
{
	std::any a, b, c, d;
	
	a = 5;
	std::cout << std::any_cast<int> (a) << std::endl;
	
	b = std::make_any<double>(12.5); // there is no make_any in boost
	std::cout << std::any_cast<double> (b) << std::endl;
	
	c = std::string("str");
	std::cout << std::any_cast<std::string> (c) << std::endl;
	
	std::any e (std::in_place_type<my_type>, 10, 11);
	std::cout << std::any_cast<my_type> (e) << std::endl;
	// there will be 4 objects used in total
	e = 5;
	// it will destroy the object before assigning it to another value.
	
	try 
	{
		d = 2.5;
		std::cout << std::any_cast<std::string> (d) << std::endl;
	}
	catch (std::bad_any_cast &e)
	{
		std::cout << "Invalid any_cast: " << e.what() << std::endl;
	}
	return 0;
}
