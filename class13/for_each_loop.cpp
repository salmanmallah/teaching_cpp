#include <iostream>
using namespace std;

int main() {
	// string cars[5] = {"Mehran@gmail.com", "Suzuki@gmail.com",
	//                   "RoyalRoyce@gmail.com", "Farrari@gmail.com",
	//                   "Black Revo@gmail.com"};

	// // foreach loop
	// for (string c : cars) {
	// 	cout << c << endl;
	// }

	// looping in array with
	// we use this loop
	// int ages[5] = {18, 19, 21, 24, 26};
	// for (int a : ages) {
	// 	cout << a << endl;
	// }

	// int ages[2] = {18, 19};
	// cout << ages[1] << endl;

	// int ages[] = {18, 29, 57};
	// cout << ages[2] << endl;

	// Omit Elements on Declaration.
	// string name[5];
	// name[0] = "Salman";
	// name[1] = "Hooriya";
	// name[2] = "Hamda";
	// name[3] = "Khan";
	// name[4] = "aznik";

	string names[] = {"Hooriya", "Kinza",  "Ahmed",  "Haroon", "Zulfiqaar",
	                  "Khan",    "Fayyaz", "Salman", "Ayesha", "Mashooque"};

	// accessing elements with  foreach loop.
	for (string n : names) {
		cout << n << endl;
		if (n == "stop") {
			break;
		}
	}

	return 0;
}