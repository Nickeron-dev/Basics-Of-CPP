#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
	boost::any x, y, z, a, s;
	
	x = 12;
	std::cout << boost::any_cast<int>(x) << std::endl;
	
	y = 'G';
	std::cout << boost::any_cast<char>(y) << std::endl;
	
	//z = "String";  // compiles but doesn't work
	//std::cout << boost::any_cast<char *>(z) << std::endl;
	
	s = std::string("String");
	std::cout << boost::any_cast<std::string>(s) << std::endl;
	std::cout << "s.type() returns type_info obj: " << s.type().name() << std::endl;
	
	a = 12.43;
	std::cout << boost::any_cast<double>(a) << std::endl;
	
	try 
	{
		boost::any b = 1;
		std::cout << boost::any_cast<float>(b) << std::endl;
	}
	catch (boost::bad_any_cast &e)
	{
		std::cout << "Invalid cast: " << e.what() << std::endl;
	}
	return 0;
}
