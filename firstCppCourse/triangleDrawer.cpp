#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int height;

  cout << "Please, input height for the triangle: " << endl;
  cin >> height;

  for ( int i = height; i > 0; i--) {
    for (int j = height - i + 1; j > 0; j--) {
      cout << " * ";
    }
    cout << endl;
  }
}
