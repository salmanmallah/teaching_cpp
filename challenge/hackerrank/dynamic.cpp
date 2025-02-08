#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string user_input;
	getline(cin, user_input);

	stringstream ss(user_input);

	int array_length;
	ss >> array_length;
	cout << array_length << endl;

	int arr[array_length];

	for (int i = 0; i < array_length; i++) {
		int e;
		ss >> e;
		cout << e << endl;
		// arr[i] = e;
	}

	return 0;
}