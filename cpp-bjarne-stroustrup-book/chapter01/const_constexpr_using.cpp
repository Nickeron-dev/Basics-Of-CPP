#include <iostream>

namespace s = std;

class class_with_const_method {
private: // or just don't type private, since class has private modifier by default 
	int number;

public:	
	class_with_const_method() {
		number = 1;
	}
	int getNumber() const;
	void setNumber(int new_number);
};

int class_with_const_method::getNumber() const { // since this method is const it does not modify anything
	return number;
}

void class_with_const_method::setNumber(int new_number) {
	number = new_number; // since it modifies data member(field) it can't be const
}

int main() {
	const int num = 5;
	//num++; // error(num is const)
	
	// smth strange
	//char character = 'a';
	//char *const const_char = *character;
	//*const_char = 'c'; // OK
	//const_char = 'b'; // error
	//s::cout << const_char << s::endl;
	
	const class_with_const_method obj;
	//obj.setNumber(5); // won't work, since object is const;
	s::cout << obj.getNumber() << s::endl; 

	class_with_const_method obj1;
        obj1.setNumber(5); // will work, since object is not const;
        s::cout << obj1.getNumber() << s::endl;
	return 0;
}
