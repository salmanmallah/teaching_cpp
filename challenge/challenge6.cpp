#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	//  Write a C program that prompts the user to enter a positive integer and
	//  then calculates and prints the sum of the squares of each digit in that
	//  number using a do-while loop

	// input: 123 and the result should be 14
	// 1 + 4 + 9 = print(total.)

	string number;
	cout << "Enter a number of any length: ";
	cin >> number;

	// cout << typeid(number[0]).name() << endl;

	int input_length = number.length();
	// cout << number[0] << endl;
	// cout << number[1] << endl;
	// cout << number[2] << endl;
	// cout << number[3] << endl;

	int total = 0;

	int i = 0;
	do {
		// char to int datatype.
		int char_to_num = number[i] - '0';

		// cout << typeid(char_to_num).name() << endl;

		total += char_to_num * char_to_num;
		// cout << number[i] << endl;
		i++;
	} while (i < input_length);

	cout << total << endl;
}