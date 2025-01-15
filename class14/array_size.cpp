#include <iostream>
using namespace std;

int main() {
	// int ages[10] = {20, 19, 17, 21, 18, 16, 22, 25, 27, 15};

	// for (int i = 0; i < 10; i++) {
	// 	cout << i << "=" << ages[i] << endl;
	// }

	// int ages[12] = {20, 19, 17, 21, 18, 16, 22, 25, 27, 15, 9, 8};

	// int array_length = sizeof(ages) / sizeof(ages[0]);
	// // cout << "The length of array is: " << array_length << endl;

	// for (int i = 0; i < array_length; i++) {
	// 	cout << ages[i] << endl;
	// }

	//
	//
	//
	// To demonstrate a practical example of using arrays, let's create a
	// program that calculates the average of different ages:
	// sum of all / length

	int ages[12] = {20, 19, 17, 21, 18, 16, 22, 25, 27, 15, 9, 8};
	int array_length = sizeof(ages) / sizeof(ages[0]);

	int sum_of_all = 0;

	for (int i = 0; i < array_length; i++) {
		// cout << ages[i] << endl;
		sum_of_all += ages[i];
	}

	double average = float(sum_of_all) / float(array_length);
	cout << "The average of the array is: " << average << endl;

	return 0;
}