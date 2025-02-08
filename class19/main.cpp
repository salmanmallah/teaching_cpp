#include <iostream>
using namespace std;

void array_sum() {
	int array[] = {10, 20, 30, 40, 50};
	int array_length = sizeof(array) / sizeof(array[0]);

	int total = 0;

	for (int i = 0; i < array_length; i++) {
		total += array[i];
	}

	cout << "total sum is: " << total << endl;
}

int main() {
	// calling my function.
	array_sum();
}
