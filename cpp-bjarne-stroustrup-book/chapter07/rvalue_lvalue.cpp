#include <iostream>
#include <string>

int& get_value()
{
	static int value = 10;
	return value;
}

void set_value(int &value)
{
	
}

void set_value_const(const int &value)
{
}

void print_name(const std::string& name)
{
	// do smth with lvalue
}

void print_name(std::string &&name)
{
	// do smth with rvalue(no memory)
}

int main()
{
	int i = 10; // int i is lvalue, 10 is rvalue
	// i has memory, 10 is just value(you can't say 10 = i;
	int a = i; // lvalue a is equal to lvlaue i
	
	int b = get_value(); // it will work
	get_value() = 20; // also works)))
	// value in get_value() function is lvalue(since it has memory)
	// we assign static int value in get_value()
	
	int m = 10;
	//int &n = 10; // impossible BUT
	const int &n = 10; // possible
	int temp = 10;
	const int &k = temp; // possible
	set_value(m);
	//set_value(10); // impossible because 10 doesn't have memory
	set_value_const(10); // possible

	// strings
	std::string first_name = "Illia"; // lvalue + rvalue
	std::string last_name = "Ko"; // lvalue + rvalue
	
	std::string full_name = first_name + last_name; // lvalue + rvalue

	
	return 0;
}

