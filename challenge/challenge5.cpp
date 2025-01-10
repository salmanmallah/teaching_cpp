#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	// Write a C program that generates a random number between 1 and 100 and
	// asks the user to guess it. Use a do-while loop to give the user multiple
	// chances until they guess the correct number.

	srand(time(0)); // seed the random number generator
	int winning_number = (rand() % 10 + 1);

	int user_guess;
	do {

		// taking input from the user.
		cout << "Guess a number: ";
		cin >> user_guess;

		// checking if user guess a number correctly.
		if (user_guess == winning_number) {
			cout << "You won the game!" << endl;
			break;
		} else {
			cout << "Wrong, Guess again!" << endl;
			
		}

	} while (user_guess != winning_number);
}