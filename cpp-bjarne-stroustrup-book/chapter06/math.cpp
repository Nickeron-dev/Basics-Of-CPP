#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using std::max;
using std::min;
using std::pow;
using std::sqrt;
using std::abs;
using std::round;
using std::ceil;
using std::floor;

int main()
{
	double a = 2.5;
	double b = 5.2;

	std::cout << "Max value: " << max(a, b) << std::endl;
	std::cout << "Min value: " << min(a, b) << std::endl;
	std::cout << "Value to 2nd power: " << pow(a, 2) << std::endl;
	std::cout << "Square root of 100 is: " << sqrt(100) << std::endl;
	std::cout << "Absolute value of -42 is: " << abs(42) << std::endl;
	std::cout << "Round value 2.5: " << round(a) << std::endl;
	std::cout << "Round UP value 2.5: " << ceil(a) << std::endl;
	std::cout << "Round DOWN value 2.5: " << floor(a) << std::endl;
}

