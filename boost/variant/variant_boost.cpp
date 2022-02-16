#include <iostream>
#include <boost/variant.hpp>
#include <string>

using std::cout;

struct output : public boost::static_visitor<>
{
	void operator ()(double d) const
	{
		cout << d << '\n';
	}
	
	void operator ()(int i) const
	{
		cout << i << '\n';
	}
	
	void operator ()(std::string s) const
	{
		cout << s << '\n';
	}
};

struct better_output : public boost::static_visitor<>
{
	template <typename T>
	void operator ()(T instance) const
	{
		cout << instance << '\n';
	}
};

int main()
{
	boost::variant<double, char, std::string> var;
	var = 3.4;
	cout << boost::get<double> (var) << '\n';
	var = 'f';
	cout << boost::get<char> (var) << '\n';
	var = std::string("Hello");
	cout << boost::get<std::string> (var) << '\n';
	
	// var = 5; // there is no int in variant
	
	
	// You can't get one value when several were assigned
	//cout << boost::get<double> (var) << '\n';
	//cout << boost::get<char> (var) << '\n';
	//cout << boost::get<std::string> (var) << '\n';
	
	cout << "\nSecond\n";
	boost::variant<int, std::string> v;
	v = 5;
	cout << v << '\n';
	v = "heyy";
	cout << v << '\n';
	
	cout << "\nThird\n";
	// For type-safe access boost::apply_visitor() is preferable over boost::get()
	boost::variant<double, int, std::string> v_visitor;
	v_visitor = 3.5;
	boost::apply_visitor(output{}, v_visitor);
	v_visitor = 7;
	boost::apply_visitor(output{}, v_visitor);
	v_visitor = "str";
	boost::apply_visitor(output{}, v_visitor);
	
	
	cout << "\nFourth\n";
	boost::variant<int, std::string> v_for_template;
	v_for_template = 5;
	boost::apply_visitor(better_output {}, v_for_template);
	v_for_template = "Better";
	boost::apply_visitor(better_output {}, v_for_template);
	return 0;
}

