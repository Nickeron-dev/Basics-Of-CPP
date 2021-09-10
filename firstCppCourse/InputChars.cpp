#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  std::cout << "input 5 letters" << '\n';
  char letter1, letter2, letter3, letter4, letter5;
  cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
  cout << letter1 << " " << letter2 << " " << letter3 << " "
  << letter4 << " " << letter5 << endl;
  std::cout << "encoded: " << int(letter1) << " " << int(letter2) << " " << int(letter3)
  << " " << int(letter4) << " " << int(letter5) << endl;
}
