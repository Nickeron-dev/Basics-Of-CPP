#include <iostream>
#include <exception>
#include <vector>

struct my_exception : std::exception
{
	const char* what()
	{
		return "hello!";
	}
};

int main()
{
	try
	{
		throw 'a';
	}
	catch (int)
	{
		printf("Int value was thrown!\n");
	}
	catch (...)
	{
		printf("other thing was thrown.\n");
	}

	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(5);

	try
	{
		vec.at(2);
	} catch ( std::exception e )
	{
		std::cout << e.what() << std::endl;
	}
	
//	without try/catch block it gives abort.
	try
	{
		throw my_exception();
	}
	catch (my_exception e)
	{
		printf("My exception: %s\n", e.what());
	}
	return 0;
}

