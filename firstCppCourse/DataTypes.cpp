#include<iostream>

// this one is better
using std::cout;
using std::endl;
using std::string;
// using namespace std; // bad practice

int main() {
  int integerVariable = 20;
  float floatVariable = 4.5;
  double doubleVariable = 4234.432234;
  char character = 's';
  bool booleanVar = true;
  string str = "This is my string";

  cout << str << endl;

  std::cout << "Int memory: " << sizeof(int) << " bytes\n";
  std::cout << "Max int value: " << INT_MAX << std::endl;
  std::cout << "Min int value: " << INT_MIN << std::endl;

  uint usignedInt = 3000000000;
  std::cout << "Unsigned int memory: " << sizeof(unsigned int) << " bytes\n";
  std::cout << "Max unsigned int value: " << UINT_MAX << std::endl;
  // UINT_MIN  does not exist since it is 0(unsigned int has 32 bits and it
  //can only contain non-negative values)

  std::cout << "Boolean memory: " << sizeof(bool) << " bytes\n";
  std::cout << "Float memory: " << sizeof(float) << " bytes\n";
  std::cout << "Double memory: " << sizeof(double) << " bytes\n";
  std::cout << "Char memory: " << sizeof(char) << " bytes\n";
  std::cout << "Long memory: " << sizeof(long) << " bytes\n";

  int max_int = INT_MAX;
  std::cout << max_int + 1 << endl;

  cout << (int)'a' << endl;
  cout << (int)('a') << endl;
  cout << (char) 97 << endl;

  return 0;
}
