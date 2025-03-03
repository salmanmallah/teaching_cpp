#include <iostream>
using namespace std;

void printEvenOdd(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << " Is Even." << endl;
		} else {
			cout << i << " Is Odd." << endl;
		}
	}
}

int main() {
	cout << "Enter a Positive Numbers: ";
	int n;
	cin >> n;
	if (n > 0) {
		printEvenOdd(n);
	} else {
		cout << "Please enter a positive number.";
	}

	return 0;
}