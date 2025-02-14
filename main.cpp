#include <iostream>
#include <cstdlib>
#define maxValue 100 // Set your maximum value (Warning! maxValue cannot be zero!)

int main() {
  int rand = std::rand() % maxValue;

  for (int i = 0; i < 10; i++) {
    int guesses = 0;
    std::cout << "Enter your guesses: ";
    std::cin >> guesses;

    if (guesses > rand) {
      std::cout << "Lower";
    } else if (guesses < rand) {
      std::cout << "Higher" << std::endl;
    } else {
      std::cout << "Correct!" << std::endl;
      std::exit;
    }
  }
  std::cout << "Oops! Timeout!";
}