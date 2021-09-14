#include<iostream>

int main() {
  int actualPIN = 1234, inputValue, attempts = 0;
  bool isEntered = false;

  do {
    attempts++;
    std::cout << "PIN: \n";
    std::cin >> inputValue;
  } while (attempts < 3 && inputValue != actualPIN);

  if (inputValue == actualPIN) {
    std::cout << "Hello, User" << std::endl;
  } else {
    std::cout << "Your card was blocked!\n";
  }
}
