#include <iostream>

namespace apple {
	int stored_value = 5;

	bool print() {
		std::cout << "Apple!\n";
		return true;
	}
}

namespace orange {
	int stored_value = 10;

	bool print() {
		std::cout << "Orange!\n";
		return 1; // if we won't return, it will just show warning, but compile
	}
} // here, you don't put ;

// nested namespaces
namespace outer { 
	namespace inner {
		bool print() {
			std::cout << "Hello!\n";
			return 0;
		}
	}
}

int main() 
{
	int a = 1;
	if ( a == 1 ) {
		namespace a = apple;
		a::print();
		std::cout << "Value: " << apple::stored_value << std::endl;
	}

	a++;
	if ( a == 2 ) {
		using orange::print;
		print();
//		std::cout << "Value: " << stored_value << std::endl; // error(stored_value wasn't added as using
		std::cout << "Value: " << orange::stored_value << std::endl;
	}
	outer::inner::print();
	return 0;
}

