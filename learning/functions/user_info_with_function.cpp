// this file contains code for functions. will clear all topics related to
// multiple parameters.
#include <iostream>
using namespace std;

// creating function
void UserInfo(string first_name = "NULL", string last_name = "NULL",
              string Email = "NULL") {
	cout << "Hello, " << first_name << " " << last_name << "!" << endl;
	cout << "We recieved your this email: " << Email << endl;
}

int main() {
	// calling function
	UserInfo("Salman", "Mallah", "Mallahsalman06@gmail.com");
	return 0;
}