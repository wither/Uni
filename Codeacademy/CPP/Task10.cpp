#include <iostream>

void on_and_off() {
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
}

int main() {

  // Conduct IT support
  std::string on_off_attempt;
  on_and_off();
  std::cin >> on_off_attempt;

  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";

  // Conduct IT support again...
  on_and_off();
  std::cin >> on_off_attempt;

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";

  // Conduct IT support yet again...zzzz...
  on_and_off();
  std::cin >> on_off_attempt;

}
