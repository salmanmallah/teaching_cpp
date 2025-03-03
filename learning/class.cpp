#include <iostream>
using namespace std;

// function with one parameter
void my_name(string x) {
	// comment
	cout << x;
}

// function with multiple parameter.
void user_info(int num) {
	// comment
	int even = 0;
	for (int i = 1; i <= num; i++) {
		0;
		even += i;
	}
	cout << even;
}

int main() {
	// my_name("Hamda");

	user_info(6);

	return 0;
}