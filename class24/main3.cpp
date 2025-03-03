#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	string name;
	int rollNo;
	float marks[5], total = 0, percentage;

	cout << "Generating Marksheet..." << endl;
	cout << "\n------------------------------------\n";

	cout << "\nName: ";
	getline(cin, name);
	cout << "Roll No.: ";
	cin >> rollNo;

	cout << "\nMarks obtained:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Subject " << (i + 1) << ": ";
		cin >> marks[i];
		total += marks[i];
	}

	percentage = (total / 500) * 100;

	cout << "\nTotal Marks: " << total << endl;
	cout << fixed << setprecision(1);
	cout << "Percentage: " << percentage << "%" << endl;

	return 0;
}
