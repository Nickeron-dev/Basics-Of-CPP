#include <iostream>

using namespace std;

class non_virtual_class
{
public:
	void foo() {};
};

class virtual_class // in virtual there is a hidden pointer, that points to vtable
{
public: 
        virtual void foo() {};
};

int main()
{
	cout << "Size non-virtual: " << sizeof(non_virtual_class) << endl;
	cout << "Size virtual: " << sizeof(virtual_class) << endl;
	return 0;
}

