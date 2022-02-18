#include <boost/parameter.hpp>
#include <string>
#include <ios>
#include <iostream>

using std::cout;

BOOST_PARAMETER_NAME(a)
BOOST_PARAMETER_NAME(b)
BOOST_PARAMETER_NAME(c)
BOOST_PARAMETER_NAME(d)
BOOST_PARAMETER_NAME(e)

BOOST_PARAMETER_FUNCTION(
	(void),
	complicated,
	tag,
	(required
		(a, (int))
		(b, (double))
		(c, (char))
		(d, (std::string))
		(e, *)
	)
)

{
	cout.setf(std::ios::boolalpha);
	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << d << '\n';
	cout << e << '\n';
}

int main()
{
	complicated(_c = 'c', _a = 5, _b = 3.14, _d = "hello", _e = true);
	return 0;
}

