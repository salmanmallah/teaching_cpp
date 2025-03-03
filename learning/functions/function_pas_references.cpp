#include <iostream>
using namespace std;

void SwapValues(int &x, int &y) {
	int z = x;
	x = y;
	y = z;
}

int main() {
	int first_num = 100;
	int second_num = 200;

	cout << "before swap function" << endl;
	cout << "first_num =" << first_num << endl;
	cout << "second_num =" << second_num << endl << endl;

	cout << "After swap function" << endl;
	SwapValues(first_num, second_num);
	cout << "first_num =" << first_num << endl;
	cout << "second_num =" << second_num << endl;
	return 0;
}