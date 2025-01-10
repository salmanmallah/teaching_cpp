#include <iostream>
using namespace std;

int main() {
	// Write a program in C to read 10 numbers from the keyboard and find their
	// sum and average.

	int total = 0;
	int average = 0;

	int user_input;
	for (int i = 1; i <= 10; i++) {

		// taking input from user.
		cout << "Enter a number: ";
		cin >> user_input;

		total += user_input;
	}

	cout << "Sum is: " << total << endl;
	cout << "Average is: " << (total / 10.0) << endl;
}