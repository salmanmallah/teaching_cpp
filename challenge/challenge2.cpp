#include <iostream>
using namespace std;

int main() {

	// Write a C program that prompts the user to input a series of integers
	// until the user stops by entering 0 using a do-while loop. Calculate and
	// print the sum of all positive integers entered.

	int i = 0;
	int user_input;
	int total = 0;

	do {
		cout << "Enter a number: ";
		cin >> user_input;

		total += user_input;

		i++;
	} while (0);

	cout << "Total is: " << total << "\n";
}