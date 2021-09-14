#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// You can declare any function as many times as you want!!!
void method(int age, float balance);
void method(int age, float balance);

// You can change method's parameters' places and signature will be different(so it works)
void method(float balance, int age);

// You can declare method with the same signature(but different param names)
void method(int id, float balance);

int main() {
    method(5, 4.3);
    method(6.3, 21);
    method(4, 3.5);
}

// You can declare function as many times as you want!!!
void method(int age, float balance);

void method(int age, float balance) {
    cout << "Age: " << age << " Balance: " << balance << endl;
}

// But You can't define a function as many times as you wan't!!!
// void method(int age, float balance) {
//     cout << "Age: " << age << " Balance: " << balance << endl;
// }

// You can change parameters' order so there will be different signature and overloading
void method(float balance, int age) {
    cout << "Age: " << age << " Balance: " << balance << endl;
}

// But you can't define function with same signature but different param names
// C++ doesn't check names of params(since signature consists of only types(without names))
// That's why it will tell about redefinition
//void method(int id, float balance) {
//    cout << "Id: " << id << " Balance: " << balance << endl;
//}
