#include<iostream>

int main() {
  std::cout << "Input whole number: " << '\n';
  int inputtedNumber;
  std::cin >> inputtedNumber;
  if (inputtedNumber % 2 == 0) {
    std::cout << "Your number: " << inputtedNumber << " is even" << std::endl;
  } else {
    std::cout << "Your number: " << inputtedNumber << " is odd" << "\n";
  }

  int a = 5, b = 6;
  std::cout << (a == 5 && b == 5) << '\n';
  bool result = (a == 5 && --b == 5);
  std::cout << result << std::endl;
  b = 6;
  bool result1 = (a == 5 && b-- == 5);
  std::cout << result1 << std::endl;
  //system("cls"); // it might be os-dependent

  double doubleValue = 5.7;
  int integerValue = 5;
  int sumWithout = 3;
  sumWithout = sumWithout + doubleValue;
  std::cout << sumWithout << std::endl;
  int sumWith = integerValue;
  sumWith += doubleValue;
  std::cout << sumWith << std::endl;
  return 0;
}
