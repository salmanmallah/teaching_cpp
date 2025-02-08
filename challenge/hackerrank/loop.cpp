#include <iostream>
using namespace std;
//  https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=false
int main() {
	int a, b;
	a = 1;
	b = 8;
	string arr[10] = {"zero", "one", "two",   "three", "four",
	                  "five", "six", "seven", "eight", "nine"};

	for (int i = a; i <= b; i++) {
		if (i >= 1 && i <= 9) {
			cout << arr[i] << endl;
		};
		if (i > 9) {
			if (i % 2 == 0) {
				cout << "even" << endl;
			}
			if (i % 2 == 1) {
				cout << "odd" << endl;
			}
		}
	}

	return 0;
}