#include <iostream>
using namespace std;

int main() {
	//  Write a C program to display the sum of n terms of even natural numbers.
	// Test Data :
	// Input number of terms : 5
	// Expected Output :
	// The even numbers are :2 4 6 8 10
	// The Sum of even Natural Number upto 5 terms : 30

	cout << "Enter a number: ";
	int user_input;
	cin >> user_input;

	int sum_of_even = 0;
	cout << "The even numbers are: ";
	for (int i = 2; i <= (user_input * 2); i += 2) {
		cout << i << "  ";
		sum_of_even += i;
	}
	cout << endl << sum_of_even << endl;
}