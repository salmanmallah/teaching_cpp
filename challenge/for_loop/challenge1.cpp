#include <iostream>
using namespace std;

int main() {
	// 3. Write a program in C to display n terms of natural numbers and their
	// sum.
	// Test Data : 7 Expected Output
	// The first 7 natural number is : 1 2 3 4 5 6 7 The Sum of Natural
	//  Number upto 7 terms : 28

	int user_input;
	cout << "Enter a number: ";
	cin >> user_input;

	int total = 0;

	for (int i = 1; i <= user_input; i++) {
		total += i;
		// cout << i << endl;
	}

	cout << "Total is: " << total << endl;
}