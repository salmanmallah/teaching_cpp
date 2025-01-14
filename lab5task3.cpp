#include <iostream>
using namespace std;

int main() {
	// Write a C++ program that accepts a string as input from the user. The
	// program should count and display the number of vowels (a, e, i, o, u) and
	// consonants (all other alphabetic characters) in the string. Ignore spaces
	// and non-alphabetic characters.

	string name = "salman";
	// 0 = s
	// 1 = a
	// 2 = l
	// 3 = m
	// 4 = a
	// 5 = n

	cout << name[5];

	// int len = name.length();
	// for (int i = 0; i < len; i++) {
	// 	cout << name[i] << endl;
	// }

	// int name_len = name.length();

	// int vowel_counter = 0;
	// int consonants = 0;

	// for (int i = 0; i < name_len; i++) {
	// 	// cout << name[i] << endl;
	// 	if (name[i] == 'a') {
	// 		vowel_counter += 1;
	// 	} else if (name[i] == 'e') {
	// 		vowel_counter += 1;
	// 	} else if (name[i] == 'i') {
	// 		vowel_counter += 1;
	// 	} else if (name[i] == 'o') {
	// 		vowel_counter += 1;
	// 	} else if (name[i] == 'u') {
	// 		vowel_counter += 1;
	// 	} else {
	// 		consonants += 1;
	// 	}
	// }
	// cout << "total vowel counts: " << vowel_counter << endl;
	// cout << "total consonant counts: " << consonants << endl;

	return 0;
}