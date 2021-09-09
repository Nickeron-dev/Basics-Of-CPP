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
  std::cout << "Hello, world!\n";
  cout << "Second way to type" << std::endl;
  std::cout << "Check if newline was added" << endl;
  std::cout << "Check if it was compiled" << endl;
  //system("pause>0"); // it is slow, bad and platform dependent. Moreover, it won't compile
}
