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

  system("cls");
  return 0;
}
