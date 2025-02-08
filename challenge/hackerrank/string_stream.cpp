#include <algorithm>
#include <iostream>
#include <sstream>
#include <typeinfo>
#include <vector>

using namespace std;

int main() {
	string input = "23,4,56";
	replace(input.begin(), input.end(), ',', ' ');
	stringstream ss(input);
	vector<int> numbers_vector;
	int temp;

	while (ss >> temp) {
		// cout << typeid(temp).name() << endl; // checking datatype of
		// fetched number.

		// adding fetched number into vector; before doing that we will also
		// convert string to int.
		// numbers_vector.push_back(temp);
	}

	// showing elements;
	// for (int e : numbers_vector) {
	// 	cout << e << endl;
	// }

	return 0;
}