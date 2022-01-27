#include <iostream>

int main()
{
	int a = 5;
	int b = 6;
//	static_assert(b < a, "B is less than A");  // won't work, b<a is not constexpr
	assert(b < a);
	constexpr int c = 5;
	constexpr int d = 6;
	static_assert(d < c, "message");
	return 0;
}

