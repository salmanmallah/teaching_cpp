#include <iostream>
using namespace std;

int main() {
	// Write a program in C to display the multiplier table vertically from 1 to
	// n. Test Data : Input upto the table number starting from 1 : 8
	// Expected Output
	//: Multiplication table from 1 to 8
	// Enter Table number: 8
	// 1 X 1 = 1, 2 X 1 = 2, 3 X 1 = 3, 4 X 1 = 4, 5 X 1 = 5, 6 X 1 = 6, 7 X 1 =
	// 7, 8 X 1 = 8,

	// 1 X 2 = 2, 2 X 2 = 4, 3 X 2 = 6, 4 X 2 = 8, 5 X 2 = 10, 6 X 2 = 12, 7 X 2
	// = 14, 8 X 2 = 16,
	// ...
	// 1 X 9 = 9, 2 X 9 = 18, 3 X 9 = 27, 4 X 9 = 36, 5 X 9 = 45, 6 X 9 = 54, 7
	// X 9 = 63, 8 X 9 = 72,

	// 1 X 10 = 10, 2 X 10 = 20, 3 X 10 = 30, 4 X 10 = 40, 5 X 10 = 50, 6 X 10 =
	// 60, 7 X 10 = 70, 8 X 10 = 80,

	int user_input;
	cout << "Enter Table number: ";
	cin >> user_input;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= user_input; j++) {
			cout << j << " X " << i << " = " << (i * j) << ", ";
		}
		cout << "\n";
		cout << "\n";
	}
}