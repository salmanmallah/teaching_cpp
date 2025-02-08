#include <iostream>
#include <sstream> // this is for the taking input from user example user giving 10 50 20, how will you parse this input? for that we use this module. sstream.
#include <vector>

using namespace std;

int main() {
	string input1, input2, input3, input4, input5;
	cout << " enter a line: ";
	getline(cin, input1);
	stringstream ss(input1);

	vector<int> line1;

	int num;
	while (ss >> num) {
		line1.push_back(num); // adding num value in line1 array.
	};

	cout << "first line: ";
	for (int e : line1) {
		cout << e << " ";
	};

	return 0;
}