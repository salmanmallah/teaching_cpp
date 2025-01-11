#include <iostream>
using namespace std;

int main() {
	// Write a C program to display the n terms of odd natural numbers and their
	// // sum.
	// Test Data Input number of terms : 10 Expected Output
	//     : The odd numbers are : 1 3 5 7 9 11 13 15 17 19 The Sum of odd
	//     Natural
	//           Number upto 10 terms : 100

	cout << "Enter a number: ";
	int user_input;
	cin >> user_input;

	int org_user_input = user_input;

	user_input *= 2;
	int counter = 0;
	int total = 0;

	for (int i = 1; i <= user_input; i++) {
		if (i % 2 != 0) {
			counter += 1;

			cout << i << endl;
			total += i;

			// check if the value of counter == user_input
			if (counter == org_user_input) {
				break;
			}
		}
	}
	cout << "Total is: " << total << endl;
}