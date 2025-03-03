#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	// Seed for random number generation
	srand(time(0));
	int secretNumber = (rand() % 10) + 1; // Generates number between 1 to 10
	int guess;

	cout << "Guess the number (between 1 and 10): ";

	do {
		cin >> guess;
		if (guess < secretNumber) {
			cout << "Too low! Try again: ";
		} else if (guess > secretNumber) {
			cout << "Too high! Try again: ";
		} else {
			cout << "Congratulations! You guessed the correct number." << endl;
		}
	} while (guess != secretNumber);

	return 0;
}