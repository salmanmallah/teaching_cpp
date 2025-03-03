#include <iostream>
#include <set>
using namespace std;

void TraverseSet(set<string> &string_set) {
	cout << "TraverseSet() function called..." << endl;
	int counter = 1;
	for (string item : string_set) {
		cout << counter << ": " << item << endl;
		counter++;
	}
}

// function overlaoding.
template <typename Compare> void TraverseSet(set<int, Compare> &string_set) {
	cout << "TraverseSet() function called..." << endl;
	int counter = 1;
	for (int item : string_set) {
		cout << counter << ": " << item << endl;
		counter++;
	}
}

int main() {
	// creating a set
	set<string> cars_set = {"Volvo", "Hyundai", "Toyota", "Ford", "Mehran"};
	set<int, greater<int>> numbers = {10, 8, 1, 3, 2, 5, 7,
	                                  9,  9, 9, 8, 6, 5, 4};

	// for string set
	TraverseSet(cars_set);

	// for int set;
	TraverseSet(numbers);

	return 0;
}