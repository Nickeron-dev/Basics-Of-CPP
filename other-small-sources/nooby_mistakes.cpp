#include <iostream>
#include <string>

int main()
{
	// variables are not initialised(only defined)
	// so undefined behaviour will be there(values cannot be predicted)
	int x;
	int *x2 = new int;

	// OK. initial value 0 is guaranteed
	int y {};
	int *y1 = new int{};
	int *y2 = new int();

	int z();

	// The same works with structs and classes

	struct S
	{
		int n, m;
		std::string s;
	};

	// int values - undefined behavious, 
	// but std::string is defined to "" (empty string)
	S instance;
	S *instance1 = new S;

	// int values - initialized to 0
	// but std::string is defined to "" (empty string)
	S s1 {};
	S *s2 = new S{};
	S *s3 = new S();

	delete x2;
	delete y1;
	delete y2;
	delete instance1;
	delete s2;
	delete s3;
	return 0;
}

