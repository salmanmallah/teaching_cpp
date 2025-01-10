#include <iostream>
using namespace std;

int main() {
	// challange:
	// Write a C program that calculates the sum of even and odd numbers from 1
	// to 50 using do-while loops.

	int even_total = 0;
	int odd_total = 0;

	int i = 0;
	do {

		if (i % 2 == 0) {
			// even
			even_total += i;

		} else {
			// odd
			odd_total += i;
		}

		i++;
	} while (i <= 50);

	cout << "Total of Even Numbers is: " << even_total << endl;
	cout << "Total of Odd Numbers is: " << odd_total << endl;

	return 0;
}