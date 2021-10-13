#include <iostream>
// if you use str::string, you should include <string>
// because in case of another compiler etc. you might experience different problems
int main()
{
	int a = 5, b = 10;
	// warning because 'and' is logical(1 and 1) are numbers(asks for bitwise)
	std::cout << (1 and 1) << std::endl;
	
        // warning because 'or' is logical(1 and 1) are numbers(asks for bitwise)
	// when or has 1:1 or 0:0, it gives 1
	std::cout << (1 or 0) << std::endl;
	
        // warning because 'xor' is logical(1 and 1) are numbers(asks for bitwise)
	// when xor has 1:1 or 0:0, it gives 0
	std::cout << (1 xor 1) << std::endl;
	std::cout << (not(1 and 1)) << std::endl;
	
	//std::cout << (5 and_eq 5) << std::endl;
	//std::cout << (5 or_eq 5) << std::endl;
	//std::cout << "xor: " << (1 xor_eq 1) << std::endl;
	std::cout << (1 not_eq 1) << std::endl;
	
	if (++a > 5 || --b < 0) 
	// --b won't be performed because || is short-circuit
	// first action is true, so second is not performed
	{
		std::cout << "A: " << a << " b: " << b << std::endl;
	}

	// and = &&
	// or == ||
	// xor == ^
	// bitand = &
	// bitor = |
	// bitxor doesn't exist
	// and_eq is &=
	// or_eq is |=
	// xor_eq is ^=
	// not is !
	// not_eq is !=
}

