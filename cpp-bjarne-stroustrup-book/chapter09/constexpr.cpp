#include <iostream>
// constexpr can't be typed in function(that doesn't change)
constexpr int add(int a, int b)
{
	return a + b;
}

int main()
{
	// the main difference between const and constexpr:
	// constexpr must be known at compile time
	// const can be known at run time
	
	// Example 1 (it doesn't work)
	int a, b;
	std::cin >> a >> b;
	std::cout << add(a, b) << std::endl;

	// Example 2 (it works)
	std::cout << add(1, 2) << std::endl;
	
	constexpr int c = 5;
	constexpr int d = c; // Works, BUT
	int h = 5;
	h = 20;
	constexpr int f = h; // Doesn't!!! Because h is not constexpr
	
	return 0;
}

