#include <iostream>

class Entity {
	int* m_value;
	int m_x, m_y; // it will be private by default
	mutable int var = 1;	

public:
	int get_x() const {
		// if we really need to modify anything in 
		// const function(if it won't affect anything, for instance),
		// you can change only variable that are with keyword 'mutable'
		var += 10;
		std::cout << "Var: " << var << std::endl;
		return m_x;
	}

	void set_x(int x) {
		m_x = x;
	}

	const int* const get_value() const {
		return m_value;
	}
};

void print_entity(const Entity& entity) { // Entity* will be the same
	//entity = nullptr; // impossible because entity is const
	std::cout << entity.get_value() << std::endl;
}

int main() {
	std::string hello = "Hello";
	const int MAX_AGE = 90;
	//MAX_AGE = 40; // compile error
	int* a = new int;

	*a = 2; // changing contents of the pointer
	std::cout << "Change context of the pointer: " << *a << std::endl;
	a = (int*)&MAX_AGE; // changing pointer
	std::cout << "Change the actual pointer: " << *a << std::endl;

	std::cout << "===============\n";
	const int* b = new int; // const is before int*
//	int const* b = new int; is also possible
	//*b = 5; // impossible(compile error) (can't change content)
	b = (int*)&MAX_AGE; // still possible because we change the actual pointer
	
	std::cout << "=============\n";
	int* const c = new int; // const is after int*
	*c = 30; // possible because here we change the content
	//c = (int*)&MAX_AGE; // impossible because we change the actual pointer	
	//c = nullptr; // also impossible

	std::cout << "============\n";
	const int* const everything = new int; // everything together
	//*everything = 50; // impossible because here we change the content
	//everything = (int*)&MAX_AGE; // impossible because we change pointer

//	delete a; // this can be uncommented if you put the last action of this pointer to a real value(not to another variable)
//	delete b; // the same
}
