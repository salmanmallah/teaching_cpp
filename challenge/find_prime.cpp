#include <iostream>
using namespace std;

int main() {
	// program to find prime numbers
	// if a number is only division by 1 and itself is a prime number.

	int n = 15;
	int factor_count = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			factor_count += 1;
			// cout << i << " is factor of " << n << endl;
		}
		if (factor_count > 2) {
			break;
		}
	}

	if (factor_count > 2) {
		cout << n << " is not a prime number" << endl;
	} else {
		cout << n << " is a prime number" << endl;
	}
	return 0;
}