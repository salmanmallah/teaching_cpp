#include <iostream>
using namespace std;

int main() {
	int marks[] = {90, 80, 85, 95};

	// cout << marks << endl;

	int *ptr = marks;

	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;
	// cout << *(ptr + 10) << endl; // garbage value

	return 0;
}