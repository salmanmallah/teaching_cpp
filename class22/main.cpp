#include <iostream>
using namespace std;

// Function Overloading
// With function overloading, multiple functions can have the same name with
// different parameters:

int plus_func(int x, int y) {
	// comment
	return x + y;
}

double plus_func(double x, double y) {
	// comment
	return x + y;
}

int main() {

	cout << plus_func(7.1, 1.2) << endl;
	return 0;
}