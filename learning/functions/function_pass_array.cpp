#include <iostream>
using namespace std;

// C++ Pass Array to a Function
void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main() {
	// creating array
	int numbers_array[] = {10, 20, 30, 40, 50};
	int size = sizeof(numbers_array) / sizeof(numbers_array[0]);
	printArray(numbers_array, size);

	// ruff work to understand the concept.
	// int *array_ptr = numbers_array;
	// cout << numbers_array[7] << endl;
	// cout << *numbers_array << endl;
	// cout << *(numbers_array + 1) << endl;
	// cout << *(numbers_array + 2) << endl;
	// cout << *(numbers_array + 3) << endl;
	// cout << *(numbers_array + 4) << endl;

	return 0;
}