#include <iostream>
using namespace std;

int main() {
	// int a = 5;

	// int *pointer_of_a = &a;

	// cout << "This is address of variable a=" << *pointer_of_a << "; "
	//      << pointer_of_a << endl;
	// ;

	// cout << "changing the value of a by using its address." << endl;
	// *pointer_of_a = 1000;

	// cout << "This is address of variable a=" << *pointer_of_a << "; "
	//      << pointer_of_a;

	// cout << "changing the value of a by using its address." << endl;
	// *pointer_of_a++;

	// cout << "This is address of variable a=" << *pointer_of_a << "; "
	//      << pointer_of_a;

	// cout << *pointer_of_a << endl;
	// *pointer_of_a += 1;
	// cout << *pointer_of_a << endl;

	int a = 1;
	int *p = &a;

	cout << *p << endl;

	char *cp;

	cp = (char *)p;
	cout << cp;
}
