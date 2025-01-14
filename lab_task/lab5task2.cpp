#include <iostream>
using namespace std;

int main() {
	// : Write a C++ program that accepts a positive integer n as input from the
	// user and calculates the factorial of the number. The program should
	// display the result to the user.

	int n;
	cout << "enter a number: ";
	cin >> n;

	int total = 1;

	for (int i = n; i >= 1; i--) {
		cout << i << endl;
		total *= i;
	}
	cout << total << endl;

	return 0;
}