#include <iostream>
using namespace std;

int main() {
	int array[] = {10, 20, 30, 40, 50, 70};

	int array_length = sizeof(array) / sizeof(array[1]);

	// cout << array_length << endl;

	for (int i = 0; i < array_length; i++) {
		cout << array[i] << endl;
	}
	return 0;
}