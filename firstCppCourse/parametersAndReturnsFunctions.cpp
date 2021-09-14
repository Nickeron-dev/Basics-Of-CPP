#include <iostream>

// Difference between method and function:
// Function is piece of code in file
// Method is a piece of code(function) in object(class)

bool isPrimeNumber(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return true;
        }
    }
    return false; // if there won't be any return, it will return false(undefined behavior) and show warning!!!
}

int doInt(int number) {

    // if there won't be any return, it will return 1(undefined behavior) and show warning!!!
}

float doFloat(float number) {

    // if there won't be any return, it will return 1.4013e-45(undefined behavior) and show warning!!!
}

void introduce(std::string name, std::string city, int age = 18) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Age: " << age << std::endl;
}

// invalid because all default arguments must be at the end(or city must be last
// argument or age must have default value, too)
//void introduceInvalid(std::string name, std::string city = "Berlin", int age);
void introduceSeveralDefault(std::string name, std::string city = "Berlin", int age = 18);

int main() {
    introduce("John", "NY", 20);
    std::cout << "============ Using default parameter age: \n";
    introduce("Mark", "California");
    std::cout << "============ Using default parameters: \n";
    introduceSeveralDefault("Ivan");

    std::cout << "Prime number function\n";
    std::cout << "5 is prime: " << isPrimeNumber(5) << std::endl;
    std::cout << "10 is prime: " << isPrimeNumber(10) << std::endl;

    std::cout << "Function int without return\n";
    std::cout << "5 is prime: " << doInt(5) << std::endl;

    std::cout << "Function float without return\n";
    std::cout << "5 is prime: " << doFloat(5.0) << std::endl;

}

// void introduceInvalid(std::string name, std::string city = "Berlin", int age) {
//     std::cout << "Name: " << name << std::endl;
//     std::cout << "City: " << city << std::endl;
//     std::cout << "Age: " << age << std::endl;
// }

// When you define method after declaration, you mustn't set default
//values again(even if they are same as in declaration)
void introduceSeveralDefault(std::string name,
            std::string city, int age) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Age: " << age << std::endl;
}
