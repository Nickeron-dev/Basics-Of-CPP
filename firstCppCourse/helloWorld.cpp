#include<iostream>

using namespace std; // gives opportunity not to type std:: each time
                      //(just cout or endl is enough)
                      // it works like static import in Java

/* some text
/* comment  // here will be warning(In Java there won't be any warnings)
*/

// some more text */


// it won't compile because it looks to the first */ in comment and refuses
//to check everything inside comment(even /*)

int main() {
  float number;
  std::cout << "Input your salary: ";
  std::cin >> number;
  std::cout << "Your salary is: " << number << std::endl;
  std::cout << "Your salary in 10 years is: " << number * 10 << std::endl;
  std::cout << "Hello, world!\n";
  cout << "Second way to type" << std::endl;
  std::cout << "Check if newline was added" << endl;
  std::cout << "Check if it was compiled" << endl;
  //system("pause>0"); // it is slow, bad and platform dependent. Moreover, it won't compile
}
