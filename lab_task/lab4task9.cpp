#include <iostream>
using namespace std;

int main() {
	// : Write a C++ program that accepts an integer between 1 and 5
	// representing a grade (1 = Excellent, 2 = Good, 3 = Average, 4 = Below
	// Average, 5 = Poor) and prints the corresponding grade description.

	// int grade = -10;
	// while (!(grade >= 1 && grade <= 5)) {
	// 	cout << "Enter number between 1 and 5: ";
	// 	cin >> grade;
	// }

	int grade;
	cout << "Enter number between 1 and 5: ";
	cin >> grade;

	// if (grade >= 1 && grade <= 5) {

	switch (grade) {
	case 1:
		cout << "Excellent" << endl;
		break;
	case 2:
		cout << "Good" << endl;
		break;
	case 3:
		cout << "Average" << endl;
		break;
	case 4:
		cout << "Below Average" << endl;
		break;
	case 5:
		cout << "Poor" << endl;
		break;
	default:
		cout << "you entered a wrong grade number." << endl;
	}
	

	return 0;
}