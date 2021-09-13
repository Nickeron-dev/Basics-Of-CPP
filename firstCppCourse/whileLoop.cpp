#include<iostream>

int main() {
  int counter = 0;
  while (counter <= 100) {
    if (counter % 3 == 0 && counter % 5 == 0) {
      std::cout << counter << " ";
    }
    counter++;
  }
  std::cout << std::endl;
}
