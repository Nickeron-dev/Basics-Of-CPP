#include <iostream>
#include <string>

struct Int
{
	int x;
	Int(int x = 0) : x { x } 
	{
		std::cout << "Conversion constructor\n";
	}
	operator std::string ()
	{
		std::cout << "conversion operator\n";
		return std::to_string(x);
	}
};

int main()
{
	float f = 3.5;
	int a;

	// Both lines do the same, BUT it is much easier
	// to search for casting when it is performed with static_cast
	a = f;
	a = static_cast<int>(f); 
	
	// Example 2:
	Int obj(3); // constructor will be called
	// (in this case that constructor is not conversion one)
	
	std::string str = obj; // should be performed with static_cast
	// conversion operator is called

	
	obj = 20; // conversion constructor is called
	std::cout << "First: " << obj.x << std::endl;	

	// better version of casting implicitly
	std::string str2 = static_cast<std::string>(obj);	

	// better version of previous string 'obj = 20'
	obj = static_cast<Int>(20);
	std::cout << "Str: " << str << std::endl;
	std::cout << "Second: " << obj.x << std::endl;
	std::cout << "Str2: " << str2 << std::endl;
	
	// Example 3
	char c;
	int *p = (int*) &c;
	//*p = 5; // Pass at compile-time but FAIL at run time.(dangerous)

	//int *ip = static_cast<int*>(&c); // Fail at compile-time(less dangerous)

	return 0;
}

