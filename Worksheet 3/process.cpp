#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include <fstream>

using namespace std;

int ran(int min, int max)
{
    std::random_device r;
    std::mt19937 gen(r());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
	const int fill_size = 6;
	const int min = 1;        // min random number
	const int max = 60;      // max random number

	std::vector<int> vec;
	while (vec.size() != fill_size) {
		vec.emplace_back(ran(min, max)); // create new random number
		std::sort(begin(vec), end(vec)); // sort before call to unique
		auto last = std::unique(begin(vec), end(vec));
		vec.erase(last, end(vec));       // erase duplicates
	}

	std::random_shuffle(begin(vec), end(vec)); // mix up the sequence
	ofstream lottonumbers;
	lottonumbers.open ("lottonumbers.txt");
	for(int i=0; i<vec.size(); ++i) {
		lottonumbers << vec[i] << ' ';
	}
	lottonumbers.close();
}
