#include<iostream>

int main() {
  int inputValue, factorial = 1;
  std::cout << "Please, enter number to get it's factorial: \n";
  std::cin >> inputValue;

  /*
  for (int i = 1; i <= inputValue; i++) {
    factorial *= i;  // also possible but it requires one more variable(so less efficient)
  }
  */

  
  for (; inputValue >= 1; inputValue--) {
    factorial *= inputValue;
  }

  std::cout << "Factorial: " << factorial << std::endl;
}
