#include <iostream>

using std::cout;
using std::endl;
// using namespace std; // this is very bad practice

template<class T> // difference is that class SHOULD be class(OBJECT) but typename can be anything
void swapClass(T& first, T& second) {
    T temp = first;
    first = second;
    second = temp;
}
// & after a type is used when you need to have your variables available after using that function
template<typename T>
void swapTypename(T& first, T& second) {
    T temp = first;
    first = second;
    second = temp;
}

int main() {
    int a = 5, b = 10;
    swapClass<int>(a, b);
    cout << "a=" << a << " b=" << b << endl;

    swapTypename<int>(a, b);
    cout << "a=" << a << " b=" << b << endl;

    float c = 3.5, d = 7.3;
    swapClass<float>(c, d);
    cout << "C=" << c << " D=" << d << endl;

    swapTypename<float>(c, d);
    cout << "c=" << c << " d=" << d << endl;
}
