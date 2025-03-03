#ifndef MYHEADER_H // Include guard to prevent multiple inclusions
#define MYHEADER_H

#include <iostream>
using namespace std;

// Function prototype
void greet();
int add(int a, int b);

// Function definitions
void greet() {
	// comment
	cout << "Hello, welcome to C++ programming!" << endl;
}

int add(int a, int b) {
	// comment
	return a + b;
}

// Parameters and Arguments, what is the difference?

// at function defining we say parameter
void my_function() {
	// comment
	string name;
	cout << "Please Enter your full name: ";
	getline(cin, name);
	cout << "Hello, " << name << endl;
}

#endif
