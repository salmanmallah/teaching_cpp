#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
	const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUV"
	                          "WXYZ0123456789!@#$%^&*()";
	string password = "";

	srand(time(0)); // Seed for randomness

	for (int i = 0; i < length; i++) {
		password += characters[rand() % characters.length()];
	}

	return password;
}

int main() {
	int length;

	cout << "Enter the desired password length: ";
	cin >> length;

	if (length <= 0) {
		cout << "Invalid length! Please enter a positive number." << endl;
		return 1;
	}

	string password = generatePassword(length);
	cout << "Generated Password: " << password << endl;

	return 0;
}
