#include <iostream>

// Global variables
static int a; // zero-initialized
int b; // zero-initialized

int main()
{
	static int j; // zero-initialized
	int k; // undefined behaviour, might be initialize to anything	
	// depends on compiler(so you should use 
	// only when you know what you are doing

	// these are same
	int* empty; // it is platform-dependent, so it might give an error
	int* empty_1 = 0;
	int* empty_2 = NULL;
	int* empty_3 = (int*) 0;
	std::cout << "Empty pointer: " << empty_3 << std::endl;
	
	double d_value; // 0 by default
        double* d_value_ptr = &d_value;
	std::cout << "Double Var pointer: " << d_value_ptr << std::endl;
        std::cout << "Dereferenced double: " << *d_value_ptr << std::endl;

	int var = 5;
	int* var_ptr = &var; // each time you recompile a 
		//pointer to memory is different (because memory is different)
	std::cout << "Var pointer: " << var_ptr 
			<< " variable memory: " << &var << std::endl;
	// dereference
	std::cout << "Dereferenced: " << *var_ptr << std::endl;
	(*var_ptr)++; // *var_ptr++; is impossible(will be 
			//warning that it isn't used
	std::cout << "Changed: " << *var_ptr 
			<< " pointed var: " << var << std::endl;	
	
	int b = 20;
	*var_ptr = b; // it will just change the value in 
			// memory(pointer won't be changed)
	std::cout << "Changed with b: " << *var_ptr
                        << " pointed var: " << var << std::endl;
	
	return 0;
}
