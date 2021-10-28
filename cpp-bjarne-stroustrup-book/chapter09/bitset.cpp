#include <iostream>
#include <bitset>

int main()
{
	std::bitset<10> set; // all values are going to be false(0)
	std::cout << set << std::endl;

	std::cout << "===============\n";

	// 5 as an argument will set all bits to represent 5 in binary
	std::bitset<10> five(5); // 10 is amount of bits(bools)
	std::cout << five << std::endl;

	std::cout << "===============\n";

	std::bitset<10> binary_string("1011");
	std::cout << binary_string << std::endl;
	std::cout << "Any: " << binary_string.any() << std::endl;
	std::cout << "None: " << binary_string.none() << std::endl;
	std::cout << "Count: " << binary_string.count() << std::endl;	
	std::cout << "===============\n";
	// If there won't be enough size of a bitset, it will take only part of a string
        std::bitset<2> binary_string_2("1011");
        std::cout << binary_string_2 << std::endl;

	std::cout << "===============\n";
	std::cout << binary_string[0] << "(it goes from the end(last bit will be at[0])\n";
	
	std::cout << "===============\n";
	set[0] = 1; // here you can write any number > 0 and it will put 1, but you shouldn't
	set[2] = 1;
	std::cout << set << std::endl;
	
	std::cout << "===============\n";
	set.set(); // makes all elements 1
	// if you pass one param, it will set 1 to element with that index,
	// if you pass two params, it will set to the element with index of the first
	// param, value of the second param
	std::cout << set << std::endl;
	
	std::cout << "===============\n";
	set.reset(); // makes all elements 0
	// also, reset can take only 1 arg with index so that element will get 1
	std::cout << set << std::endl;

	std::cout << "===============\n";
        set[0] = 1;
	set[5] = 1;
	set.flip(); // makes 0 to 1, but 1 to 0(changes values to antonym)
	
        std::cout << set << std::endl;
	
	std::string str = set.to_string();
	std::cout << str << "\n";
	std::cout << set.to_ulong() << std::endl;

	std::cout << "Bitwise &: " << (set & binary_string) << std::endl;
	
	return 0;
}

