#include <iostream>
using namespace std;

int main() {

	// int ages[] = {20, 35, 21, 53, 43};

	// cout << ages[]; // garbage value.

	// for (int i = 0; i < 5; i++) {
	// 	cout << ages[i] << endl;
	// }

	// cout <<  << endl;

	// =============================================
	// find the length of array.
	int ages[] = {20, 35, 21, 53, 43, 20, 21, 26, 73, 12, 7, 8, 1, 4, 10};

	int array_length = sizeof(ages) / sizeof(ages[2]);

	// cout << "The Length of array is: " << array_length << endl;

	for (int i = 0; i < array_length; i++) {
		cout << ages[i] << endl;
	}
	return 0;
}