#include <iostream>

int main() {
  int year;
  std::cout << "Year: ";
  std::cin >> year;
  if (year >= 1000){
    if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
      std::cout << year << " is a leap year!\n";
    } else {
      std::cout << year << " is not a leap year!\n";
    }
  } else {
    std::cout << "Year must be 4 characters!\n";
  }


}
