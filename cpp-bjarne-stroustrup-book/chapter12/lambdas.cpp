#include <iostream>
#include <vector>
#include <functional>

void for_each_f(const std::vector<int> &values, void(*func)(int))
{
	for (int value : values)
	{
		func(value);
	}
}

void for_each_advanced(const std::vector<int> &values,
	const std::function<void(int)> &func)
{
	for (int value : values)
	{
		func(value);
	}
}

int main()
{
	std::vector<int> vec = {3, 5, 1, 4, 6};
	//std::sort(vec.begin(), vec.end(), 
	//		[](int y, int x) );

	auto lambda = [](int value) { std::cout << "Value: " 
				<< value << std::endl; };
	// [] means lambda, (here we can specify arguments)
	// { here we put what to do } 
	for_each_f(vec, lambda);
	
	std::cout << "=============\n";

	// We can pass even all objects(and variables) that are from 
	// our part that we write lambda:
	int a = 5;
	auto lambda1 = [=](int value) { std::cout << "Value: "
		<< value << " variable: " << a << std::endl; };
	// [=] passes all variables from scope, where lambda is written
	// BY VALUE.
	// [&] passes all variables from scope, where lambda is written
	// BY REFERENCE 
	// [var_name] passes only passed variable from scope, where 
	// lambda is written BY VALUE;
	// [var_name] passes only passed variable from scope, where 
        // lambda is written BY REFERENCE;
	for_each_advanced(vec, lambda1); 

	std::cout << "=============\n";
	// It will select only elements that are greater than 3
	auto result = std::find_if(vec.begin(), vec.end(), 
		[](int value) { return value > 3; } );
	std::cout << *result << std::endl;

	return 0;
}

