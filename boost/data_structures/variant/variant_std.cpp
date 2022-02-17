#include <iostream>
#include <variant>
#include <string>

using std::cout;

// No static_visitor in std
//struct output : public std::visit<>
//{
	//void operator ()(double d) const
	//{
		//cout << d << '\n';
	//}
	
	//void operator ()(int i) const
	//{
		//cout << i << '\n';
	//}
	
	//void operator ()(std::string s) const
	//{
		//cout << s << '\n';
	//}
//};

//struct better_output : public std::visit<>
//{
	//template <typename T>
	//void operator ()(T instance) const
	//{
		//cout << instance << '\n';
	//}
//};

int main()
{
	std::variant<double, char, std::string> var;
	var = 3.4;
	cout << std::get<double> (var) << '\n';
	var = 'f';
	cout << std::get<char> (var) << '\n';
	var = std::string("Hello");
	cout << std::get<std::string> (var) << '\n';
	
	// var = 5; // there is no int in variant
	
	
	// You can't get one value when several were assigned
	//cout << std::get<double> (var) << '\n';
	//cout << std::get<char> (var) << '\n';
	//cout << std::get<std::string> (var) << '\n';
	
	// Impossible in std
	//cout << "\nSecond\n";
	//std::variant<int, std::string> v;
	//v = 5;
	//cout << v << '\n';
	//v = "heyy";
	//cout << v << '\n';
	
	// No static_visitor in std
	//cout << "\nThird\n";
	//// For type-safe access std::apply_visitor() is preferable over std::get()
	//std::variant<double, int, std::string> v_visitor;
	//v_visitor = 3.5;
	//std::apply_visitor(output{}, v_visitor);
	//v_visitor = 7;
	//std::apply_visitor(output{}, v_visitor);
	//v_visitor = "str";
	//std::apply_visitor(output{}, v_visitor);
	
	
	//cout << "\nFourth\n";
	//std::variant<int, std::string> v_for_template;
	//v_for_template = 5;
	//std::apply_visitor(better_output {}, v_for_template);
	//v_for_template = "Better";
	//std::apply_visitor(better_output {}, v_for_template);
	//return 0;
}
