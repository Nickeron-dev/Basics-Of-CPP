#include <boost/python.hpp>

char const* greet()
{
	return "hello, world";
}

BOOST_PYTHON_MODULE(hello_ext)
{
	boost::python::def("greet", greet);
}

int main()
{
	return 0;
}

