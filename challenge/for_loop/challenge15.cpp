#include <iostream>
using namespace std;

int main() {
	// 15. Write a C program to calculate the factorial of a given number.
	// Test Data :
	// Input the number : 5
	// Expected Output :
	// The Factorial of 5 is: 120

	// taking input from the user;
	cout << "Enter number to find factorial: ";
	int factorial;
	cin >> factorial;

	int total_fact = 1;

	for (int i = factorial; i >= 1; i--) {
		total_fact = total_fact * i;
		// cout << i << endl;
	}
	cout << total_fact << endl;
}
