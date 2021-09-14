#include <iostream>

int recursiveFactorial(int a, int b) {
    if (a == b) {
        return a;
    }
    return a * (recursiveFactorial(a + 1, b));
}

int main() {
    int firstNumber = 1, secondNumber = 6;
    std::cout << recursiveFactorial(firstNumber, secondNumber) << std::endl;
}
