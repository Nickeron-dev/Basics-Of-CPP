#include <iostream>

void test(int *t);

int main( )
{
    int temp;
    int*ptr;   
    temp=3;
    ptr = &temp;
    test(ptr);


    std::cout << "\nvalue of the pointed memory after exiting from the function:%d\n" << *ptr << std::endl;
    std::cout << "\nvalue of the pointer after exiting from the function:%d\n" << ptr << std::endl;


//system("pause ");
return 0;
} 


void test(int *tes){

    int temp2;        
    temp2=710;
    tes =&temp2;

    std::cout << "\nvalue of the pointed memory inside the function%d\n" << *tes << std::endl;
    std::cout << "\nvalue of the pointer inside the function%d\n" << tes << std::endl;


}

