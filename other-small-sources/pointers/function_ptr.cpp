#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void hello_world()
{
	cout << "hello!" << endl;
}

void print_int(int value)
{
	cout << "Value: " << value << endl;
}

void for_each(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
	{
		func(value);
	}
}

int main()
{
	auto func_ptr = hello_world; 
	// gives a memory address to memory instructions to function
	
	func_ptr();
	func_ptr();
	// more complicated way
	void(*better_ptr)() /* no params */ = hello_world;
	better_ptr();
	// people prefer auto because it is more simple

	// one more variant
	typedef void(*print_ptr)(int);
	print_ptr object = print_int;
	object(8);

	std::vector<int> values = {1, 5, 2, 5, 6, 3};
	for_each(values, print_int);
	
	cout << "=========\n";
	for_each(values, [](int value) { cout << "Hello: " << value << endl; });
	// you can init that function with brackets in diff lines, too
	return 0;
}

