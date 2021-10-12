#include <iostream>

int main()
{
	int array_size = 10;
	int array[array_size]; // undefined behaviour(ub)
	int* location_1 = &array[0];
	int* location_2 = &array[array_size];
	std::cout << "Location 1: " << location_1 << std::endl;
	std::cout << "Location 2: " << location_2 << std::endl;
	std::cout << "Difference(returns in number ofintegers): " 
			<< location_2 - location_1 << std::endl;
	
	int entire_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int* first_element = &entire_array[0];
	// since values aren't given, they will be very strage
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Address: " << first_element + i 
			<< " Value: " << *(first_element + i) << std::endl;
	}

	std::cout << "Chars================\n";
	char char_array[] = "Hello!";
/*	
	char *a; // is better than char* a because * is more related to a variable
	than to type. Moreover, 
	char* a, b; // here 'a' will be char pointer(*) and 'b' will be JUST char
	VERY CONFUSING!!!
	char *a, *b; // this will be correct!
	
	BUT
	With functions is better to use:
	char * foo(); // not 'char* foo();' or 'char *foo();'
*/
	char *element_ptr = char_array;
	std::cout << "Pointer: " << element_ptr << std::endl;
	char *third_index_ptr = &char_array[3];
	char *zero_index_ptr = &char_array[0];
//	char *loc_3 = &char_array[3];
//	char *loc_0 = &char_array[0];
	std::cout << "Thrid: " << third_index_ptr 
			<< "Memory: " << (void *) &third_index_ptr << std::endl;
	std::cout << "Zero: " << zero_index_ptr 
			<< "Memory: " << (void *) &zero_index_ptr << std::endl;
	std::cout << "Difference: " << third_index_ptr 
				- zero_index_ptr << std::endl;
	//delete location_1;
	//delete location_2;
	//delete[] array_new;
	return 0;
}

