#include <iostream>
using namespace std;

int main() {

	// references
	int total = 2000;
	int *total_ref = &total;

	// & (address of) Operator
	// * (Pointer Declaration)

	// cout << total << endl;
	// cout << "reference of total variable is: " << total_ref << endl;
	// cout << "the value at " << total_ref << " is " << *total_ref << endl;





	// pointer to pointer.
	// int **pointer_pointing_pointer = &total_ref;
	// cout << *pointer_pointing_pointer << endl;

	// cout << total_ref << endl;
	// cout << **pointer_pointi

	
	// =========================================================================


	// arrays with pointers
	// int marks[] = {90, 80, 85,
	//                79}; // arrays are stored in contigeous memory location.

	// int *ptr = marks;

	// getting the value from the reference pointer is called dereferncing

	// cout << ptr << endl;
	// cout << (ptr + 1) << endl;
	// cout << (ptr + 2) << endl;
	// cout << (ptr + 3) << endl;

	//==============================================================

	// modify pointers.
	string food = "Pizaa";
	string *ptr = &food;
	cout << *ptr << endl;
	*ptr = "SanduBurger";
	cout << *ptr << endl;
	return 0;
}