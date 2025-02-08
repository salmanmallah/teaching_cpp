#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// getting arrays based on first input value
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
	vector<int> line1;
	parseLine(line1);
	// int myarr[];
	// line1 = "1 2 3 4 5 6 7"

	// array of vectory type
	vector<int> array[line1[0]];

	vector<int> query[line1[1]];

	// getting dynamic arrays
	for (int i = 0; i < line1[0]; i++) {
		vector<int> temp;
		parseLine(temp);
		array[i] = temp;
	}

	cout << "Now give programming is asking query input: ";
	// getting dynamic query
	for (int i = 0; i < line1[1]; i++) {
		vector<int> temp;
		parseLine(temp);
		query[i] = temp;
	}

	// check size of array
	// int array_length = sizeof(array[0]) / sizeof(array);
	// cout << array_length;

	// getting all elemets from array of array;
	// int i = 1;
	// for (vector<int> vec : array) {
	// 	cout << i << "st array: ";
	// 	for (int e : vec) {
	// 		cout << e << " ";
	// 	}
	// 	cout << "\n";
	// }

	// cout << array[query[0][0]][query[0][1] + 1] << endl;

	// for (int i = 0; i < line1[1]; i++) {
	for (vector<int> vec : query) {

		// cout << "arr: " << vec[0] << " and fetch element at: " << vec[1];
		cout << array[vec[0]][vec[1] + 1] << endl;
	}
	// }
	return 0;
}