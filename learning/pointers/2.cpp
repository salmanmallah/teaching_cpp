#include <iostream>
using namespace std;

void Increament(int *a) {
	//
	*a += 1;
	cout << "Add of Function a: " << &a << endl;
}

int main() {
	int a;
	a = 10;
	Increament(&a);

	cout << "Add of Main's a: " << &a << endl;
	cout << "Value of a is: " << a << endl;
}