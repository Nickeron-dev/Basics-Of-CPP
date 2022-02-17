#include <boost/bimap.hpp>
#include <iostream>
#include <string>
#include <boost/bimap/unconstrained_set_of.hpp>
#include <boost/bimap/support/lambda.hpp>

int main()
{
	typedef boost::bimap<std::string, int> bimap;
	bimap animals;
	
	animals.insert({"cat", 5});
	animals.insert({"spider", 10});
	animals.insert({"dog", 0});
	
	std::cout << animals.left.count("cat") << std::endl;
	std::cout << animals.right.count(10) << std::endl;
	
	std::cout << "Iteration: " << std::endl;
	for (auto i = animals.begin(); i != animals.end(); i++)
	{
		std::cout << i->left << " " << i->right << '\n';
	}
	
	auto it = animals.left.find("cat");
	animals.left.modify_key(it, boost::bimaps::_key = "pig");
	return 0;
}

