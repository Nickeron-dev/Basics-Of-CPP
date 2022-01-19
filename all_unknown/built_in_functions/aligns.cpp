#include <iostream>

struct s1
{
	int a;
	char b;
};

// you can specify several alignas in declaration, and compiler will choose the strictest one
struct alignas(8) s2
{
	int a;
	char b;
};

struct alignas(16) s3
{
        int a;
        char b;
};

struct alignas(16) s4
{
        int a;
	int c;
	double e;
        char b;
} x;

int main()
{
	std::cout << "Sizeof s1: " << sizeof(s1) << " alignof s1: " << alignof(s1) << std::endl;
	std::cout << "Sizeof s1: " << sizeof(s2) << " alignof s2: " << alignof(s2) << std::endl;
	std::cout << "Sizeof s1: " << sizeof(s3) << " alignof s3: " << alignof(s3) << std::endl;
	std::cout << "Sizeof s1: " << sizeof(s4) << " alignof s4: " << alignof(s4) << std::endl;
	return 0;
}

