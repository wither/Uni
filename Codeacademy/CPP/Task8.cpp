#include <iostream>
#include <vector>

int main() {
  std::vector<int> even = {2, 4, 3, 6, 1, 9};
  int eventotal = 0;
  int oddtotal = 1;

  for (int i = 0; i < even.size(); i++) {
    if (even[i] % 2 == 0) {
      eventotal += even[i];
    } else {
      oddtotal = oddtotal * even[i];
    }
  }
  std::cout << "Sum of even numbers is " << eventotal << "\n";
  std::cout << "Product of odd numbers is " << oddtotal << "\n";
}
