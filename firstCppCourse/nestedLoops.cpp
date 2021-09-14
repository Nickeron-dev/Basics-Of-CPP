#include<iostream>

int main() {
  int grade = 1, sum = 0;
  int const LOWER_BOUND_GRADE = 1, UPPER_BOUND_GRADE = 5, NUMBER_OF_GRADES = 3;
  std::string const INPUT_REQUEST = "Input Your grade number: ",
    RESULT_AVERAGE = "Your average grade is: ";

  for (int i = 1; i <= NUMBER_OF_GRADES; i++) {
    do {
      std::cout << INPUT_REQUEST << i << std::endl;
      std::cin >> grade;
    } while (grade < LOWER_BOUND_GRADE || grade > UPPER_BOUND_GRADE);
    sum += grade;
  }

  std::cout << RESULT_AVERAGE << sum / NUMBER_OF_GRADES << std::endl;
}
