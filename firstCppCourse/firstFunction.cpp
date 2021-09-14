#include <iostream>

void function(); // declaration of a function

void function1() { // definition(initialization) of a function
  std::cout << "function1()\n";
}

int main() {
  std::cout << "Hello from main()\n";
  function();
  function1();
  //function2(); // declaration and definition of a function is under this method
}

/*   // won't work because c++ reads code from top to bottom so it won't find it in main()
void function2() { // definition
  std::cout << "function2()\n";
}
*/
void function() { // definition of a function
  std::cout << "Hello from function()!\n";
}
