#include <iostream>
using namespace std;

// Variable Scop
// 1. Global Variables
// 2. local variables

string name = "I am global";

void any_function() {
	// local variables
	string local_name = "Hooriya";
}

int main() {
	// local variable
	cout << name;

	return 0;
}