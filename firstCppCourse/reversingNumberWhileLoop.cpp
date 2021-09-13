#include<iostream>

int main() {
  int number, reversedNumber = 0;
  std::cout << "Input number to reverse: " << std::endl;
  std::cin >> number;

  while (number != 0) {
    reversedNumber *= 10;
    reversedNumber += number % 10;
    number /= 10;
  }

  std::cout << "Answer: " << reversedNumber << std::endl;
}
