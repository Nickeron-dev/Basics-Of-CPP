#include <iostream>

using str = std::string;
namespace s = std;
// using namespace std; // bad practice
using std::endl;

int main() {
	str name = "John Lemon";
	s::cout << name.substr(5, 100) << std::endl; // will work anyway
	s::cout << name.replace(0, 4, "george") << std::endl; // all parameters including
	s::cout << name[0] << std::endl;
	name[0] = toupper(name[0]);
	s::cout << name << std::endl;
	if (name == "George Lemon") {
		s::cout << "Equal!." << s::endl;
	}
	int i {10};
	std::cout << i << std::endl;
	int j = {10};
	std::cout << j << std::endl;
	int k[] = {1, 5, 3, 5};
	std::cout << k << std::endl;
	
	std::cout << "==========" << endl;
	int b = 'b'; // will be automaticaly converted(casted)
	char c = 'c';
	s::cout << 'a' << b << c << endl;
	
	std::cout << "==========" << endl;
	std::cout << "Type name: \n";
	std::string str1;
	std::cin >> str1; // will get only 1 word and won't touch whitespaces
	std::cout << "You've inserted: " << str1 << endl;

	std::cout << "==========" << endl;
	std::cout << "Input smth: \n";
	std::string all_insertions;
//	std::cin.clear(); // clearing cin buffer in order to input one more time(doesn't work)
	std::getline(std::cin, all_insertions);
	std::cout << "Your line: " << all_insertions << endl;
	return 0; // cout << variable (<< means 'write to') cin >> variable(>> means 'get from')
}

