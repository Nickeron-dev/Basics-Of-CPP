#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int height, width;

  cout << "Input height for your rectangle: \n";
  cin >> height;
  cout << "Input width for your rectangle: \n";
  cin >> width;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      cout << " * ";
    }
    cout << endl;
  }
}
