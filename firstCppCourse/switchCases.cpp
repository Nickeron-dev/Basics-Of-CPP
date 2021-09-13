#include<iostream>

int main() {
  float num1, num2;
  char operation;
  std::cout << "Calculator" << std::endl;
  std::cin >> num1 >> operation >> num2;
  /* in c++ it is impossible
  bool one = true;
  bool two = false;
  if (one = true && two = true) {
    std::cout << "Hi" << std::endl;
  } */

  switch (operation) {
    case '-': std::cout << num1 << operation << num2 << "="
    << num1 - num2 << std::endl; break;
    case '+': std::cout << num1 << operation << num2 << "="
    << num1 + num2 << std::endl; break;
    case '/': std::cout << num1 << operation << num2 << "="
    << num1 / num2 << std::endl; break;
    case '*': std::cout << num1 << operation << num2 << "="
    << num1 * num2 << std::endl; break;
    case '%':
      { // {} are used in order to set visibility area for these variables
        // because in other cases these variables won't be initialized
        bool isNum1Int = ((int)num1 == num1); // 5 == 5.0
        bool isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int) {
          std::cout << num1 << operation << num2 << "="
          << (int)num1 % (int)num2 << std::endl;
        } else {
          std::cout << "Not valid operation!\n";
        }
        break;
      }
    default:
      std::cout << "Operation is impossible(inputted values are invalid)\n";
  }

}
