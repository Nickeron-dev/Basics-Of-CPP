#include <iostream>

#include "version.h"

int main(void)
{
	std::cout << "Hello from main" << std::endl;
	std::cout << "Version: " << second_file_namespace::get_version() << '\n';
	return 0;
}

