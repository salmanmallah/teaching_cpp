#include <iostream>
using namespace std;

int main() {
	// Write a program in C to display a pattern like a right angle triangle
	// using an asterisk. The pattern like :
	// *
	// **
	// ***
	// ****
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}