#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x) {

  while (x > 0) {
    std::cout << name << "\n";
    x-=1;
  }
}

int main() {

  std::string my_name = "Ben";
  int some_number = 3; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);

}
