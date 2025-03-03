#include <cctype>
#include <iostream>
using namespace std;

bool isVowel(char ch) {
	ch = tolower(ch);
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
	string input;
	int vowelCount = 0, consonantCount = 0;

	cout << "Enter a string: ";
	getline(cin, input);

	for (char ch : input) {
		if (isalpha(ch)) {
			if (isVowel(ch))
				vowelCount++;
			else
				consonantCount++;
		}
	}

	cout << "Number of vowels: " << vowelCount << endl;
	cout << "Number of consonants: " << consonantCount << endl;

	return 0;
}
