#include <iostream>
#include <tuple>
#include <string>

int main()
{
	struct Person { int age, std::string name } p;
	std::cout << "Sizeof struct Person: " << sizeof(p) << std::endl;
	
	std::tuple<int, std::string> p_tuple;

	std::cout << p.age << " " << p.name << std::endl;
	std::cout << get<0>p_tuple << " " << get<0>p_tuple << std::endl;
	// So for one-time usage tuple can be more convenient, but 
	// in long term perspective, usual struct is more preferable.
	return 0;
}

