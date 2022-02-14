#include <functional>
#include <iostream>
#include <string>

int main()
{
	std::string str = "HELLO!!!";
	std::hash<std::string> hash;
	std::cout << "Hash is: " << hash(str) << std::endl;
	return 0;
}

