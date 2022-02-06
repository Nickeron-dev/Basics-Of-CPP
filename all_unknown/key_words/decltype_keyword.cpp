#include <cstdio>
#include <string>

int func()
{
	return 0;
}

std::string func_string()
{
	return "";
}

int main()
{
	// x and y are the same type as return type of respective functions
	decltype(func()) x;
	decltype(func_string()) y;

	x = 5;
	y = "Hello!!!";
	
	printf("x type: %s,value: %i\n", typeid(x).name(), x);
	printf("y type: %s,value: %s\n", typeid(y).name(), y.c_str());
	return 0;
}
