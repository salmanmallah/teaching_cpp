#include <iostream>
using namespace std;

int main() {
	// 17, 1 == 0, 17 == 0, a number having only two factor is a prime number.

	// 5

	// 1
	// 2
	// 3
	// 4
	// 5

	int num = 11;

	int factor_counter = 0;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			factor_counter += 1;
		}
	}

	if (factor_counter <= 2) {
		cout << num << " is a prime number" << endl;
	} else {
		cout << num << " is not a prime number" << endl;
	}

	return 0;
}