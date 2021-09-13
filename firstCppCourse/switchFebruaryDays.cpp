#include<iostream>

int main() {
  int month, year;
  std::cout << "Input month and year: " << std::endl;
  std::cin >> month >> year;

  switch(month) {
    case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
      std::cout << "29 days\n" : std::cout << "28 days\n"; break;
  }
}
