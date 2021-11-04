#include <iostream>

class Mango
{
public:
	void eat_mango_ints(int a, int b)
	{
		std::cout << "Eating mango! a: " << a << " b: " << b << std::endl;
	}
};

class Banana
{
public:
        void eat_banana_ints(int a, int b)
        {
                std::cout << "Eating banana! a: " << a << " b: " << b << std::endl;
        }
};

struct Struct
{
	// So this struct will need 16 bytes(after packing)
	int x;
	int y;
	char c; // char and bool we take together 4 bytes
	bool a;
};

int main()
{
	Banana *b = new Banana();
	Mango *m = new Mango();
	
	Banana *new_b = reinterpret_cast<Banana*>(m);
	// reinterpret_cast is very dangerous!!!
	// You can perform them only if you certainly
	// know what you are doing(you force compiler)
	new_b -> eat_banana_ints(1, 3);
	// or
	//Banana::eat_banana_ints(new_b, 1, 3); // will be same
	delete b;
	delete m;
	// Example 2:
	// We use reinterpret_cast when we want to work with bits
	// I think, it is almost always used in the Cheat Engine!!!
	Struct s;
	
	s.x = 5;
	s.y = 10;
	s.c = 'a';
	s.a = true;
	int *p = reinterpret_cast<int*>(&s);
	// it will go to first 4 bytes in this struct
	std::cout << "First: " << *p << std::endl;
	p++; // goes to next 4 bytes
	std::cout << "Second: " << *p << std::endl;
	// BUT
	p++; // goes to next 4 bytes
	std::cout << "Third: " << *p << std::endl;
	std::cout << "Should be: " << reinterpret_cast<char*>(p) << std::endl;
	return 0;
}

