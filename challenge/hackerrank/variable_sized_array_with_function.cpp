#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void parseLine(vector<int> &line) {
	string input1;
	getline(cin, input1);
	stringstream ss(input1);

	int num;
	while (ss >> num) {
		line.push_back(num); // adding num value in line1 array.
	};
}

int main() {
	// create vector

	vector<int> line1;
	vector<int> line2;
	vector<int> line3;
	vector<int> line4;
	vector<int> line5;

	parseLine(line1);
	parseLine(line2);
	parseLine(line3);
	parseLine(line4);
	parseLine(line5);

	if (line4[0] == 0) {
		cout << line2[line4[1]] << endl;
	} else if (line4[0] == 1) {
		cout << line2[line3[1]] << endl;
	}

	if (line5[0] == 0) {
		cout << line2[line5[1]] << endl;
	} else if (line5[0] == 1) {
		cout << line3[line5[1]] << endl;
	}

	return 0;
}