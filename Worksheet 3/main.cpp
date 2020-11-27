#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char * argv[]) {

  if (argc < 2) {
    cout << "File name not given. Usage is ./file-read <filename>" << endl;
    exit(0);
  }

  string filename = argv[1];
  ifstream lottonumbers("lottonumbers.txt");
  string myText;
  std::vector<int> vec;
  int number;

  while (getline (lottonumbers, myText)) {}
  std::stringstream iss( myText );
  while ( iss >> number ) {
    vec.push_back( number );
  }
  cout << "\n\nFile name is: " << filename << "\n";
  ifstream file_handler(filename, ios:: in );
  if (!file_handler.is_open()) {
    cout << "File cannot be open" << endl;
  }

  string line;
  int row_counter = 0;

  while (getline(file_handler, line)) {
    row_counter++;
    if (row_counter < 2) {
      continue;
    }

    stringstream ss(line);
    string value;
    int column_counter = 0;

    vector < int > numbers;
    vector < int > matching_numbers;

    while (getline(ss, value, ',')) {
      column_counter++;
      if (column_counter < 3) {
        continue;
      }
      numbers.push_back(std::stoi(value));
    }

    for (int i = 0; i < vec.size(); i++) {
      for (int n = 0; n < numbers.size(); n++) {
        if (vec[i] == numbers[n]) {
          matching_numbers.push_back(numbers[n]);
        }
      }
    }

    if (matching_numbers.size() >= 3) {
      cout << "Row " << row_counter << ": " << matching_numbers.size() << " Successful Matches!" << " ";
      for (int i = 0; i < matching_numbers.size(); ++i)
        std::cout << matching_numbers[i] << ' ';
    } else {
      continue;
    }

    cout << "\n";

  }

  file_handler.close();
  return 0;

}
