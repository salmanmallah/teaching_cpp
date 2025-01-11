#include <iostream>
using namespace std;

int main() {
	/// Task 4: Write a C++ program that checks if a given year is a leap year.
	/// A year is a leap year if it is divisible by 4, except for years that are
	/// divisible by 100, unless they are also divisible by 400. USE ONLY SINGLE
	/// IF & ELSE. Hint: Make use of logical operators.

	// (4 * 4) - 2

	// 2000: A leap year because it is divisible by 400
	// 2004 : A leap year 2008 : A leap year 2012 : A leap year 2016
	//     : A leap year 2020 : A leap year 2024 : A leap year 2028
	//     : A leap year 2032 : A leap year 2036 : A leap year 2040
	//     : A leap year 2044 : A leap year 2048
	//     : A leap year

	// if a year has 366 days then it is leap year
	// int year = 202;
	// if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
	// 	cout << "A year is a leap year" << endl;
	// }

	/// Task 4: Write a C++ program that checks if a given year is a leap year.
	/// A year is a leap year if it is divisible by 4, except for years that are
	/// divisible by 100, unless they are also divisible by 400. USE ONLY SINGLE
	/// IF & ELSE. Hint: Make use of logical operators.
	// input: 2004
	// output: is a leap year

	// 1 or 1 = 1
	// 1 or 0 = 1
	// 0 or 1 = 1
	// 0 or 0 = 0

	// solution code =======================================================
	// 	int year = 2004;
	// 	if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0) {
	// 		cout << "A year is a leap year" << endl;
	// 	}

	// 	return 0;
	// }
	// solution code end =================================================

	// Write a C++ program that accepts a temperature in Celsius and categorizes
	// the temperature into the following ranges:
	// •	Below 0°C: "Freezing"
	// •	0°C to 15°C: "Cold"
	// •	16°C to 30°C: "Moderate"
	// •	Above 30°C: "Hot"

	// int temperature = 16;

	// if (temperature < 0) {
	// 	cout << "Freezing";
	// } else if (temperature >= 0 && temperature <= 15) {
	// 	cout << "cold";
	// }

	// Task 7: Write a C++ program that asks the user to input a number between
	// 1 and 12 and prints the corresponding month of the year (e.g., 1 =
	// January, 2 = February, etc.).
	// int month;
	// count

	// is the best.
	// if(month == 1){
	// 	cout<<
	// }
}