#include <iostream>
using namespace std;

// function.
string my_country(string country = "Pakistan") {
	string message = "Your country is: " + country;
	return message;
}

int main() {
	// calling myfunction
	cout << my_country() << endl;
	cout << my_country("China") << endl;
	return 0;
}