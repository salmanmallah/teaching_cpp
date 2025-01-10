#include <iostream>
using namespace std;

int main() {
	// Write a C program that prompts the user to enter a series of numbers
	// until they input a negative number. Calculate and print the sum of all
	// entered numbers using a do-while loop.

	int user_input;
	int total = 0;

	int i = 0;
	do {
		cout << "Enter a number: ";
		cin >> user_input;

		total += user_input;

		i++;
	} while (user_input > 0);

	cout << "Total is: " << total << "\n";
}